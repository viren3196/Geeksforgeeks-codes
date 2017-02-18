#include<bits/stdc++.h>
using namespace std;

int compare(string s1, string s2)
{
    string x,y;
    x = s1, y = s2;
    x += y;
    y += s1;
    if(x>y)
        return 1;
    return 0;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,compare);
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }
}

