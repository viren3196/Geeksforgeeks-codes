def check(arr,n,m,i,j):
    if i>=0 and i<n and j>=0 and j<m:
        return 1
    return 0
        
        
def util(arr,n,m,i,j):
	arr[i][j]=0
	for x in range(-1,2):
		for y in range(-1,2):
		    if not(x==0 and y==0) and check(arr,n,m,i+x,j+y):
		        if arr[i+x][j+y] == 1:
			        util(arr,n,m,i+x,j+y)
		
def findIslands(arr,n,m):
	ans = 0
	for x in range(0,n):
		for y in range(0,m):
			if arr[x][y] == 1:
			    ans = ans+1
			    util(arr,n,m,x,y)
	return ans
