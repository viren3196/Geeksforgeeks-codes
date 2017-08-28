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
            if(n==0)
            {
                cout<<0<<endl;
                continue;
            }
            int arr[n], ans=1;
            int* lis = new int[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                lis[i] = 1;
            }
            for(int j=1;j<n;j++)
            {
                int i=0;
                while(i<j)
                {
                    if(arr[j]>arr[i])
                    {
                        lis[j] = max(lis[j],lis[i]+1);
                        ans = max(ans,lis[j]);
                    }
                    i++;
                }
            }
            
            cout<<ans<<endl;
        }
	return 0;
}
