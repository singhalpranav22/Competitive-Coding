//
//  main.cpp
//  one two codechef
//
//  Created by Pranav Singhal on 27/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include <iostream>
using namespace std;
int sry[10000001];
int main()
{
    for(int i=0;i<10000001;i++)
        sry[i]=0;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum[n];
        int i;
        cin>>a[0];
        sum[0]=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            sum[i]=a[i]+sum[i-1];
            
        }
        for(i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i==0)
                {
                    int s=0;
                    s=sum[j];
                    sry[s]=1;
                    
                }
                else
                {
                    int s=0;
                    s=sum[j]-sum[i-1];
                    sry[s]=1;
                    
                }
            }
        }
        int c=0;
        for(i=0;i<10000001;i++)
        {
            if(sry[i]==1)
            {
               
                c++;
                
            }
            
                
        }
        cout<<c<<endl;
        
        
    }
    return 0;
    
}
