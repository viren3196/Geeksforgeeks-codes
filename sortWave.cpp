#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);
            for(int i=1;i<n;i+=2)
            {
                if(a[i]>a[i-1])
                    swap(a[i],a[i-1]);
                if(i<n-1 && a[i]>a[i+1])
                    swap(a[i],a[i+1]);
            }
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
	return 0;
}
