def duplication():
	l=raw_input()
	k=l.split(" ")
	k.sort()
	second=[]
 	for i in k:
		if i not in second:
			second.append(i)
        var=second	
	print var


if __name__=="__main__":
	duplication()
	
	
