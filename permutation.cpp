#include<iostream>
#include<algorithm>
using namespace std;

string nextpermutation(string s, int k)
{
    int i = k-1;
    while(i>0)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(s[j]<s[i])
            {
                swap(s[j],s[i]);
                sort(s.begin()+j+1,s.end());
                return s;
            }
            if(i-j>1)
            {
                int p = i-1;
                while(p>j)
                {
                    if(s[j]<s[p])
                    {
                        swap(s[j],s[p]);
                        sort(s.begin()+j+1,s.end());
                        return s;
                    }
                    p--;
                }
            }
        }
        i--;
    }
    return "false";
}

int main()
{
    int n, k;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        k = s.size();
        sort(s.begin(),s.end());
        while(s!="false")
        {
            cout<<s<<" ";
            s = nextpermutation(s,k);
        }
        cout<<endl;
    }
    return 0;
}
