/*Complete the function below*/
void printDuplicates(int arr[], int n)
{
    int cnt[n], flag=1;
    for(int i=0;i<n;i++)
        cnt[i]=0;

    for(int i=0;i<n;i++)
        cnt[arr[i]]++;

    for(int i=0;i<n;i++)
        if(cnt[i]==1)
            cnt[i]=0;

    for(int i=0;i<n;i++)
    {
        if(cnt[arr[i]]>1)
        {
            cnt[arr[i]]=1;
            flag=0;
        }
        else if(cnt[arr[i]]==1)
        {
            cout<<arr[i]<<" ";
            cnt[arr[i]] = 0;
        }
    }
    if(flag==1)
        cout<<"-1 ";
}
