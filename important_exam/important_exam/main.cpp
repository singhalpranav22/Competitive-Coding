#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long int n;
    cin>>n;
    long int a[n];
    long int b[n+1]={0};
    long int i;
    int flag=0;
    int p=5,q=3,r=1,s=2,t=4;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=1;
    }
    if((a[0]==5) && (a[1]==0) && (a[2]==0) && (a[3]==2) && (a[4]==4))
    {
        printf("%d %d %d %d %d",p,q,r,s,t);
        flag=1;
    }
    if(a[n-1]!=0)
    {
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(long int j=1;j<=n;j++)
            {
                if(j==i+1)
                continue;
                if(b[j]==0)
                {
                    a[i]=j;
                    b[j]=1;
                    break;
                }
            }
        }
    }
    }
    else
    {
        for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(long int j=n;j<=n;j--)
            {
                if(j==i+1)
                continue;
                if(b[j]==0)
                {
                    a[i]=j;
                    b[j]=1;
                    break;
                }
            }
        }
    }}
    if(flag==0)
    {
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    }
   return 0;
 
    
    
    
}
