#include<iostream>
#include<math.h>
using namespace std;

double diff(double cube,double n)
{
    if (n > cube)
        return n-cube;
    else
        return cube-n;
}

int cuberoot(double n)
{
    double start=1, end=n, mid,e=0.0000001, cube;
    while(true)
    {
        mid = (start+end)/2;
        cube = mid*mid*mid;
        
        if(diff(cube,n)<=e)
            return mid;
        
        if(cube>n)
            end=mid;
        else
            start=mid;
    }
    
}

int main()
 {
	int t;
        cin>>t;
        double n;
        while(t--)
        {
            cin>>n;
            cout<<cuberoot(n)<<endl;
        }
	return 0;
}
