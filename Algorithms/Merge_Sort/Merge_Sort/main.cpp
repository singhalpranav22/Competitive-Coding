//
//  main.cpp
//  Merge_Sort
//
//  Created by Pranav Singhal on 09/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//Recursive Merge Sort
//Temporary Array Is used in the merge function

#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int i=l;
    int j=m+1;
    int k=0;
    int b[r-l+1];
    while(i<=m && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k++]=a[i++];
            
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=m)
    {
        b[k++]=a[i++];
    }
    while(j<=r)
    {
        b[k++]=a[j++];
    }
    i=l;
    for(int p=0;p<r-l+1;p++)
    {
        a[i++]=b[p];
    }
    
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
        
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//Merge funtion without a temporary array.
//Yukta's Code
/*//Te Amo
//Call me when You see It !!
//Correct Code
#include<iostream>
using namespace std;
void merge(int l,int r,int a[])
{
int mid=(l+r)/2;
int n1,n2;
n1=mid-l+1;
n2=r-mid;
int p[n1],q[n2];
for(int i=0;i<n1;i++)
p[i]=a[l+i];
for(int i=0;i<n2;i++)
q[i]=a[mid+1+i];
int i=0,j=0,k=l;
while(i<n1&&j<n2)
{
if(p[i]<=q[j])
{
a[k]=p[i];
i++;
k++;
}
else
{
a[k]=q[j];
j++;
k++;
}
}
while(i<n1)
{
a[k]=p[i];
i++;
k++;
}
while(j<n2)
{
a[k]=q[j];
j++;
k++;
}

}
void mergesort(int l,int r,int a[])
{
int mid=(l+r)/2;
if(l<r)
{
mergesort(l,mid,a);
mergesort(mid+1,r,a);
merge(l,r,a);
}

}


int main()
{
int n,l,r;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
l=0;
r=n-1;
mergesort(l,r,a);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 143;

}*/
