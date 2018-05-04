def calc():
 	digit=0
	alphabet=0	
	l=raw_input()
	for i in l:
		if i.isdigit():
			digit+=1
		if i.isalpha():
			alphabet+=1		
	print ("digits :%s | alphabets:%s")%(digit,alphabet)


if __name__=="__main__":
	calc()
