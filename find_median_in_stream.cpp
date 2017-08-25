#include<iostream>
using namespace std;

int insertionsort(int arr[], int n)
{
    int temp = arr[n-1];
    int i = n-2;
    while(arr[i]>temp && i>=0)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = temp;
    if(n%2)
        return arr[(n-1)/2];
    return (arr[(n-1)/2]+arr[(n-1)/2+1])/2;
}

int main()
 {
	int n,t;
    cin>>n;
    int arr[n],i=1;
    while(n--)
    {
        cin>>t;
        arr[i-1] = t;
        cout<<insertionsort(arr,i)<<endl;
        i++;
    }
	return 0;
}
