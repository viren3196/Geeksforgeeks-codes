#include<iostream>
using namespace std;
int main()
 {
	int t,n,k,mn,index;
        cin>>t;
        while(t--)
        {
            cin>>n>>k;
            int a[n];

            for(int i=0;i<n;i++)
                cin>>a[i];

            int res[k+1];
            res[0]=0;

            for(int i=1;i<k+1;i++)
            {
                mn=1e9, index=-1;
                for(int j=0;j<n;j++)
                {
                    if(a[j]<=i && mn>res[i-a[j]])
                    {
                      if(a[j]<i && res[i-a[j]]==-1)
                        ;
                      else
                      {
                          mn = res[i-a[j]];
                          index = i-a[j];
                      }
                    }
                }
                if(mn==1e9)
                    res[i] = -1;
                else
                    res[i] = res[index]+1;
            }
            cout<<res[k]<<endl;
        }
	return 0;
}
