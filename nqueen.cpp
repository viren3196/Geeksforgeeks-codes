#include<iostream>
#include<vector>
using namespace std;

int check(int arr[][10],int row, int col, int n)
{
    for(int i=0 ; i<n ; i++)    
        if(arr[row][i])
            return 0;
    
    for(int i=row,j=col ; i>=0&&j>=0 ; i--,j--)    
        if(arr[i][j])
            return 0;
            
    for(int i=row,j=col ; i<n&&j>=0 ; i++,j--)    
        if(arr[i][j])
            return 0;
    
    return 1;
}

void printboard(int arr[][10], int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(arr[j][i])  cout<<j+1<<" ";
    cout<<"] ";
}

void nqueen(int arr[][10], int col, int n, int &flag)
{
    if(col>=n)
    {
        flag=0;
        printboard(arr,n);
    }
    for(int i=0;i<n;i++)
    {
        if(check(arr,i,col,n))
        {
            arr[i][col] = 1;
            nqueen(arr, col+1, n, flag);
            arr[i][col] = 0;
        }
    }
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[10][10];
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    arr[i][j] = 0;
            
            int flag=-1;
            nqueen(arr,0,n,flag);
            if(flag==-1)  
                cout<<-1;
            cout<<endl;
        }
	return 0;
}
