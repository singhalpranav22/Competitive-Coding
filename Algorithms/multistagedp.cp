#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX
int n;


void mul_stage()
{
    
    int g[8][8]={{inf,1,2,5,inf,inf,inf,inf},
        {inf,inf,inf,inf,4,11,inf,inf},
        {inf,inf,inf,inf,9,5,16,inf},
        {inf,inf,inf,inf,inf,inf,2,inf},
        {inf,inf,inf,inf,inf,inf,inf,18},
        {inf,inf,inf,inf,inf,inf,inf,13},
        {inf,inf,inf,inf,inf,inf,inf,2},
        {inf,inf,inf,inf,inf,inf,inf,inf}
    };
    int d[n];
    d[n-1]=0;
    int c[n];
    c[7]=7;
    for(int i=n-2;i>=0;i--)
    {
        d[i]=inf;
        for(int j=i;j<n;j++)
        {
            if(g[i][j]==inf)
                continue;
            
            if(d[i]>d[j]+g[i][j])
            {
                d[i]=d[j]+g[i][j];
                c[i]=j;
            }
            
            
        }
    }
    
    cout<<"Shortest distance 0->7="<<d[0]<<endl;
    cout<<"Path:0->";
     int t=c[0];
    while(1)
    {
       
        cout<<t<<"->";
        t=c[t];
        if(t==7)
            break;
        
    }
    cout<<7;
}


int main(){
    n=8;
    
    
    mul_stage();
    
   
    
    
    
    
}

