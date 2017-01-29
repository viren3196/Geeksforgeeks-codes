#include<iostream>
using namespace std;

void reverse(int a[], int start, int end)
{
        if(start>=end)
            return;
        swap(a[start], a[end]);
        reverse(a, ++start, --end);
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int a[n];
            for(int i=0 ; i<n ; i++)
                cin>>a[i];
            reverse(a,0,n-1);
            for(int i=0 ; i<n ; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
	return 0;
}
