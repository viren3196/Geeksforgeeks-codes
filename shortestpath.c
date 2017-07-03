#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	        cin>>a[i][j];

	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	    {
	        if(i==0)
	        {
	            if(j!=0)
	                a[i][j] += a[i][j-1];
	        }
	        else if(j==0)
	        {
	            a[i][j] += a[i-1][j];
	        }
	        else
	        {
	            a[i][j] += min(a[i-1][j],a[i][j-1]);
	        }
	    }

	 cout<<"Cost is : "<<a[n-1][m-1]<<endl;

	 int i=0,j=0,temp;
	 cout<<a[i][j]<<" ";
	 while(true)
	 {
	        temp = a[i][j];
	        if(j==m-1)
	            i++;
	        else if(a[i+1][j]<a[i][j+1])
	            i++;
	        else
	            j++;
	        cout<<abs(a[i][j]-temp)<<" ";
	        if(i==n-1 && j==m-1)
	            break;
	 }
	return 0;
}
