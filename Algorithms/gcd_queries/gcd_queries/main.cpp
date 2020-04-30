//
//  main.cpp
//  gcd_queries
//
//  Created by Pranav Singhal on 19/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int hcfl[n],hcfr[n];
        hcfl[0]=a[0];
        for(i=1;i<n;i++)
        {
            hcfl[i]=gcd(a[i],hcfl[i-1]);
        }
        hcfr[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            hcfr[i]=gcd(a[i],hcfr[i+1]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            if(l==0)
            {
                cout<<hcfr[r+1]<<endl;
            }
            else if(r==n-1)
                cout<<hcfl[l-1]<<endl;
            else
                cout<<gcd(hcfl[l-1],hcfr[r+1])<<endl;
            
        }
    }
    return 0;
}
