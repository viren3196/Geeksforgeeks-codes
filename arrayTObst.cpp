#include<iostream>
using namespace std;

void convertToBST(int arr[], int low, int high)
{
    if(low<=high)
    {
        int mid = (low+high)/2;
        cout<<arr[mid]<<" ";
        convertToBST(arr,low,mid-1);
        convertToBST(arr,mid+1,high);
    }
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n];
            for(int i=0 ; i<n ; i++)
                cin>>arr[i];
            convertToBST(arr,0,n-1);
            cout<<endl;
        }
	return 0;
}
