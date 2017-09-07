#include<iostream>
using namespace std;

void makeZERO(string a[], int no, int len, int i, int j)
{
    a[i][j] = 'O';
    if(i-1>=0 && i-1<no && j>=0 && j<len) if(a[i-1][j]=='X')
        makeZERO(a,no,len,i-1,j);
    if(i>=0 && i<no && j-1>=0 && j-1<len) if(a[i][j-1]=='X')
        makeZERO(a,no,len,i,j-1);
    if(i>=0 && i<no && j+1>=0 && j+1<len) if(a[i][j+1]=='X')
        makeZERO(a,no,len,i,j+1);
    if(i+1>=0 && i+1<no && j>=0 && j<len) if(a[i+1][j]=='X')
        makeZERO(a,no,len,i+1,j);
}

int main()
 {
	int t,no,len;
        cin>>t;
        while(t--)
        {
            int cnt=0;
            cin>>no>>len;
            string arr[no];
            for(int i=0;i<no;i++)
                cin>>arr[i];
            for(int i=0;i<no;i++)
            {
                for(int j=0;j<len;j++)
                {
                    if(arr[i][j]=='X')
                    {
                        cnt++;
                        makeZERO(arr,no,len,i,j);
                    }
                }
            }
            cout<<cnt<<endl;
        }
	return 0;
}
