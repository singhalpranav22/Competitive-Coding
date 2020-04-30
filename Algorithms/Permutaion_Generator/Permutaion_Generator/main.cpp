//
//  main.cpp
//  Permutaion_Generator
//
//  Created by Pranav Singhal on 05/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<iostream>
using namespace std;

void perm(int a[],int k,int n)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=k;i<n;i++)
    {
        int t=a[k];
        a[k]=a[i];
        a[i]=t;
         perm(a,k+1,n);    //Dividing the problem in other parts
        t=a[k];
        a[k]=a[i];
        a[i]=t;
        
    }
   
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    perm(a,0,n);
    return 0;
}
