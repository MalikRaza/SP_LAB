import requests
import wget
import os
from PIL import Image
import shutil
import datetime
from bs4 import BeautifulSoup
from StringIO import StringIO
def trimming(length):
	return length-26
my_url='https://download.quranicaudio.com/quran/'
name_list=[] #contain name of qari
qari_name=[]
file=open("log.txt","a")
file_obj=requests.get(my_url)
html_page=BeautifulSoup(file_obj.content,"html.parser")
name_list= html_page.findAll("a")
mp3=[]
for i in name_list:
	qari_name.append(i.text)
del qari_name[-1]
qari_name.pop(0)
file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" Total Qari : "+str(len(qari_name))+"\n")
counter=1
for qari in qari_name:
		new_url=my_url+qari
		print new_url
		file_obj2=requests.get(new_url)
		new_html_page=BeautifulSoup(file_obj2.content,"html.parser")
		mp=new_html_page.findAll("a")
		file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" StartProcessing :"+str(counter)+" out of "+str(len(qari_name))+"\n")
		#making directory
		os.makedirs(qari)
		#print mp
		var=os.getcwd()
		di=var+'/'+qari
		print di
		link=[]
		for n in mp:
		     link.append(new_url+n['href'])
		length=trimming(len(link))
		print length
		new_folder="org_"+qari
		os.makedirs(new_folder)
		file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" "+qari+" "+new_folder+" Start"+"\n" )
		for mp3files in link[len(link)-3:len(link)-1]:
				wget.download(mp3files,di)
		file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" "+qari+" "+new_folder+" End"+"\n" )
		file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" Merging file of  "+qari+" Start "+"\n" )
	        os.system("mp3wrap " + new_folder + "final.mp3 " + qari + "*.mp3")
		shutil.rmtree(qari) 
		file.write(str(datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))+" Merging file of  "+qari+" End " +"\n")
	        counter+=1		
		 

