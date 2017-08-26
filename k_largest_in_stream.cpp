#include<iostream>
using namespace std;

void heapifydown(int arr[], int k)
{
    int parent=0;
    while(parent<k/2)
    {
        int c1 = 2*parent+1;
        int c2 = 2*parent+2;
        int swapper = c2;
        if(arr[c1]<arr[c2])
            swapper = c1;
        if(arr[swapper]<arr[parent])
        {
            swap(arr[swapper],arr[parent]);
            parent = swapper;
        }
        else
            break;
    }
}

int main()
 {
	int t,k,n;
        cin>>t;
        while(t--)
        {
            int input;
            cin>>k>>n;
            int arr[k];
            for(int i=0 ; i<k ; i++)
                arr[i] = -1;
            for(int i=0;i<n;i++)
            {
                cin>>input;
                if(arr[0]>input)
                    ;
                else
                {
                    arr[0] = input;
                    heapifydown(arr,k);
                }
                cout<<arr[0]<<" ";
            }
            cout<<endl;
        }
	return 0;
}
