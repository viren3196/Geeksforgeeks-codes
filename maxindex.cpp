#include<iostream>
using namespace std;
int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n];
            for(int i=0 ; i<n ; i++)
                cin>>arr[i];
            
            int *left = (int*)malloc(sizeof(int)*n);
            int *right = (int*)malloc(sizeof(int)*n);
            
            left[0] = arr[0];
            for(int i=1 ; i<n ; i++)
                left[i] = min(left[i-1],arr[i]);
                
            right[n-1] = arr[n-1];
            for(int i=n-2 ; i>=0 ; --i)
                right[i] = min(right[i+1],arr[i]);
                
            int i=0,j=0,maxdiff=-1;
            while(i<n && j<n)
            {
                if(left[i]<=right[j])
                {
                    maxdiff = max(maxdiff,j-i);
                    ++j;
                }
                else
                    ++i;
            }
            cout<<maxdiff<<endl;
        }    
          
	return 0;
}
