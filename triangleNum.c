#include<iostream>
#include<math.h>
using namespace std;

int checkTriangular(int n)
{
    // n2 + n - (2*num)
    if(n<0)
        return 0;

    int a, b, c, d;
    float root1, root2;

    a = 1;
    b = 1;
    c = -2*n;
    d = (b*b)-(4*a*c);

    if(d<0)
        return 0;

    root1 = (-b + sqrt(d)) / (2*a);
    root2 = (-b - sqrt(d)) / (2*a);

    if((root1>0 && root1==floor(root1)) || (root2>0 && root2==floor(root2)))
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
            cout<<checkTriangular(n)<<endl;
        }
	return 0;
}
