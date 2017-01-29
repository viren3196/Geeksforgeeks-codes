#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t,n,flag,key;
        cin>>t;
        while(t--)
        {
            cin>>n>>key;
            int a[n];
            flag = 0;
            map<int, int> m;
            
            for(int i=0 ; i<n ; i++)
            {
                cin>>a[i];
                if(m[key-a[i]])
                    flag=1;
                else
                    m[a[i]] = 1;
            }
            
            if(flag)
                cout<<"Yes\n";
            else
                cout<<"No\n";
            
        }
	return 0;
}
