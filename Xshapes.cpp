#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void ghumo(string arr[], int no, int len, int i, int j,vector<vector<bool> > &visited)
{
    visited[i][j] = true;
    if(i+1>=0 && i+1<no && j>=0 && j<len) 
        if(arr[i+1][j]=='X')
        ghumo(arr,no,len,i+1,j,visited);
    if(i-1>=0 && i-1<no && j>=0 && j<len) 
        if(arr[i-1][j]=='X')
        ghumo(arr,no,len,i-1,j,visited);
    if(i>=0 && i<no && j+1>=0 && j+1<len) 
        if(arr[i][j+1]=='X')
        ghumo(arr,no,len,i,j+1,visited);
    if(i>=0 && i<no && j-1>=0 && j-1<len) 
        if(arr[i][j-1]=='X')
        ghumo(arr,no,len,i,j-1,visited);
        
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
            vector<vector<bool> > visited;
            
            for(int i=0;i<no;i++)
            {
                vector<bool> temp;
                for(int j=0;j<len;j++)
                    temp.push_back(false);
                visited.push_back(temp);
            }
                
            for(int i=0;i<no;i++)
                cin>>arr[i];
            
            for(int i=0;i<no;i++)
            {
                for(int j=0;j<len;j++)
                {
                    if(arr[i][j]=='X' && visited[i][j])
                    {
                        cnt++;
                        ghumo(arr,no,len,i,j,visited);
                    }
                }
            }
            
            cout<<cnt<<endl;
        }
	return 0;
}
