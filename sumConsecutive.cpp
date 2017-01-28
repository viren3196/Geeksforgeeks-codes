#include<iostream>
#include<math.h>
using namespace std;

int sumConsecutive(int n)
{
    if((n&(n-1)) == 0)
        return 0;
    return 1;
}

int main()
 {
	int t;
        long n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cout<<sumConsecutive(n)<<endl;
        }
	return 0;
}
