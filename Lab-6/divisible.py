def divisible():
	lis=[]
	for i in range(2000,3200):
		if i%7==0 and i%5!=0:
			lis.append(i)
	return lis
if __name__=="__main__":
	l=divisible()
	print l
