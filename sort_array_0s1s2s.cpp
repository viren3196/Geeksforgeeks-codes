#include<iostream>
using namespace std;
int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n], zero=0, one=0;
            for(int i=0 ; i<n ; i++)
            {
                cin>>arr[i];
                if(arr[i] == 0)
                    zero++;
                else if(arr[i] == 1)
                    one++;
            }
            int k = n-(zero+one);
            while(zero--)
                cout<<"0 ";
            while(one--)
                cout<<"1 ";
            while(k--)
                cout<<"2 ";
            cout<<endl;
        }
	return 0;
}
