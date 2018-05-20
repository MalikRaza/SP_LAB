import requests
import wget
import os
from PIL import Image
from bs4 import BeautifulSoup
from StringIO import StringIO
my_url='https://propakistani.pk/category/sports/'
pages=[]
page_list=[]
news=[]
link=[]
pages.append(my_url)
user_input=raw_input("Enter a string you want to match: ")
print user_input
check=[]
i=0
while i<5:
	fi=requests.get(pages[i])
	html_pg=BeautifulSoup(fi.content,"html.parser")
	page_list= html_pg.findAll("a",{"class":"page-link"})
	#print page_list[len(page_list)-1]["href"]
	pages.append(page_list[len(page_list)-1]["href"])
	i+=1

for p in pages:
	print p
	file_obj=requests.get(p)
	html_page=BeautifulSoup(file_obj.content,"html.parser")
	news=html_page.findAll("div",{"class":"row"})
	print len(news)
	del news[-1]
	for a in news:
			#print a.a["href"]
			string=a.a.text
			if string.find(user_input)!=-1:
					link.append(a.a["href"])
			else:
				fie_obj=requests.get(a.a["href"])
				hml_page=BeautifulSoup(fie_obj.content,"html.parser")
				nes=hml_page.findAll("div",{"class":"the-post-content"})
				for i in nes:
					  s=i.text
					  if s.find(user_input)!=-1:
							link.append(a.a["href"])
							break
	
for l in link:
	print l
