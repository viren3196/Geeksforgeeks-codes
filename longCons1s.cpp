#include<iostream>
using namespace std;

int max1s(int num)
{
    int cnt = 0, mxcnt = 0;
    while(num)
    {
        if((num&1)==1)
            cnt++;
        else
        {
            mxcnt = max(cnt,mxcnt);
            cnt = 0;
        }
        num >>= 1;
    }
    return max(cnt,mxcnt);
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cout<<max1s(n)<<endl;
        }
	return 0;
}
