#include<iostream>
using namespace std;

void reverse(int a[], int start, int end)
{
    if(start>=end)
        return;
    swap(a[start], a[end]);
    reverse(a, ++start, --end);
}

void rotate(int a[], int n, int k)
{
    reverse(a, 0, k-1);
    reverse(a, k, n-1);
    reverse(a, 0, n-1);
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
