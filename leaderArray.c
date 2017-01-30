#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	int t,n,k;
        cin>>t;
        while(t--)
        {
            cin>>n;
            
            stack<int> s;
            int a[n], mx=-1e9;
            
            for(int i=0;i<n;i++)
                cin>>a[i];
                
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]>mx)
                {
                    mx = a[i];
                    s.push(mx);
                }
            }
            
            while(!s.empty())
            {
                k = s.top();
                s.pop();
                cout<<k<<" ";
            }
            cout<<endl;
        }
	return 0;
}
