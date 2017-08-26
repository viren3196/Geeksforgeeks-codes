#include<iostream>
using namespace std;

int minimumSum(int arr[], int i, int calSum, int totalSum)
{
    if(i==0)
    {
        return abs( (totalSum-calSum) - calSum);
    }
    return min(minimumSum(arr,i-1,calSum+arr[i],totalSum),
               minimumSum(arr,i-1,calSum,totalSum));
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n], sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                sum+=arr[i];
            }   
            cout<<minimumSum(arr,n,0,sum)<<endl;;
        }
	return 0;
}
