def matrix_match(matrix,user,index_i,index_j):
	if index_i+1 <8 and index_j+1 <8:	
			if matrix[index_i][index_j+1] == user[0][1] and matrix[index_i+1][index_j]==user[1][0] and matrix[index_i+1][index_j+1]==user[1][1]:
											       return True
			else:
				return False
	else :
		return False
Matrix =[
[10,20,102, 75, 85, 96, 17, 28],
[9, 10, 1, 12, 13, 44, 88, 96],
[17, 108, 1, 0, 1, 22, 23, 24],
[27, 26, 27, 28, 29, 30, 31, 32],
[25, 34, 35, 36, 37, 38, 39, 40],
[93, 42, 43, 44, 45, 46, 47, 48],
[33, 50, 53, 62, 53, 44, 55, 56],
[77, 58, 19, 80, 61, 72, 63, 64]
]
found=0
User_Matrix = [[0] * 2 for i in range(2)]
for i in range(2):
	for j in range(2):
		User_Matrix[i][j] = input("Enter 2*2 matrix elements : " )
		
for i in range(8):
	for j in range(8):
	   if int(Matrix[i][j]) == int(User_Matrix[0][0]):
						if matrix_match(Matrix,User_Matrix,i,j)==True:
										print "Found"
										found+=1
										break							       

if found==0:
    print "Matrix Not Found!"

	   

  
