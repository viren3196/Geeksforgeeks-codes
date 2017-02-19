#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n], cnt=0;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cnt+=m[a[i]+k];
            cnt+=m[a[i]-k];
        }
        cout<<cnt/2<<endl;
    }
}
