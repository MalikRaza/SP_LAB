def integral_number(n):
	d={}
	i=1
	while i <n+1: 
	 	d[i]=i*i
		i+=1
	return d
if __name__=="__main__":
	l=integral_number(10)
	print l
