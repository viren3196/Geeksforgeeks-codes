#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,n,key,flag,sum;
        cin>>t;
        while(t--)
        {
            cin>>n>>key;
            int a[n];
            flag=1;
            
            for(int i=0 ; i<n ; i++)
            {
                cin>>a[i];
            }
            sort(a,a+n);
            for(int l=0, r=n-1 ; l<r ; )
            {
                sum = a[l]+a[r];
                if(sum == key)
                {
                    cout<<"Yes\n";
                    flag=0;
                    break;
                }
                else if(sum > key)
                    r--;
                else
                    l++;
            }
            if(flag)
                cout<<"No\n";
        }
	return 0;
}
