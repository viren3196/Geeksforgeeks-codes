#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n+1];
            arr[0] = 1;
            arr[1] = 1;
            for(int i=2 ; i<=n ; i++)
            {
                arr[i]=0;
                for(int j=0,k=i-1 ; j<=i-1&&k>=0 ; j++,k--)
                    arr[i] += arr[j]*arr[k];
            }
            cout<<arr[n]<<endl;;
        }
	return 0;
}
