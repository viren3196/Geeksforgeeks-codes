#include<iostream>
using namespace std;

void rotate(int a[], int n, int k)
{
    if(k>n/2)
    {
        k = n-k;
        while(k--)
        {
            int temp = a[n-1];
            for(int i=n-1 ; i>0 ; i--)
                a[i] = a[i-1];
            a[0] = temp;
        }
    }
    else
    {
        while(k--)
        {
            int temp = a[0];
            for(int i=1 ; i<n ; i++)
                a[i-1] = a[i];
            a[n-1] = temp;
        }
    }
}

int main()
 {
	int t, n, k;
        cin>>t;
        while(t--)
        {
            cin>>n>>k;
            int a[n];
            for(int i=0 ; i<n ; i++)
                cin>>a[i];
                
            rotate(a, n, k);
            
            for(int i=0 ; i<n ; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
	return 0;
}
