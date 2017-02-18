
#include<iostream>
#include<algorithm>
using namespace std;

int twoGreater(int a[], int n)
{
    int max1,max2;
    if(a[1]>a[0])
    {
        max1=a[1];
        max2=a[0];
    }
    else
    {
        max2=a[1];
        max1=a[0];
    }

    for(int i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
            max2=a[i];
    }
    return max2;
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int a[n], max2;
            for(int i=0;i<n;i++)
                cin>>a[i];

            sort(a,a+n);

            for(int i=0;i<n-2;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
	return 0;
}
