//
//  main.cpp
//  binary_generator
//
//  Created by Pranav Singhal on 05/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int t=pow(2,n);
    int a[n];
    for(i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
            a[j]=0;
        int temp=i;
        int k=0;
        while(temp>0)
        {
            a[k]=temp%2;
            k++;
            temp=temp/2;
        }
        for(int j=n-1;j>=0;j--)
            cout<<a[j]<<" ";
        cout<<endl;
        
    }
    return 0;
}
