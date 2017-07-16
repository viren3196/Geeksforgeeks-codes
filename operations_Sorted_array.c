/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function(s) below*/
int search(int arr[],int x,int n)
{
    int low=0, high=n-1,i;
    while(low<=high)
    {
        i=(low+high)/2;
        if(arr[i]==x)
            return i;
        else if(arr[i]<x)
            low=i+1;
        else
            high=i-1;
    }
    return 0;
}
bool insert(int arr[], int y,int n)
{
    int i,j;
    i = search(arr,y,n);
    for(j=n;j>i;j--)
        arr[j]=arr[j-1];
    arr[i]=y;
}
bool deleteEle(int arr[], int z,int n)
{
    for(int i=0 ; i<n ; i++)
        if(arr[i]==z)
        {
            for(int j=i ; j<n-1 ; j++)
                arr[j]=arr[j+1];
        }
}
