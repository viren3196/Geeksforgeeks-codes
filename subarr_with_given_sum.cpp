#include<iostream>
using namespace std;
int main()
 {
	int t,n,k;
        cin>>t;
        while(t--)
        {
            cin>>n>>k;
            int arr[n];
            for(int i=0 ; i<n ; i++)
                cin>>arr[i];
            int curr_sum=0, flag=0, i,j;
            for( j=0,i=0 ; i<n ; i++)
            {
                if(curr_sum<k)
                    curr_sum+=arr[i];
                while(curr_sum>k && j<=i)
                {
                    curr_sum-=arr[j];
                    j++;
                }
                if(curr_sum==k)
                {
                    flag=1;
                    break;
                }
            }
            if(flag) cout<<j+1<<" "<<i+1<<endl;
            else     cout<<"-1\n";
        }
	return 0;
}
