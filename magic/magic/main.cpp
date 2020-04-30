//
//  main.cpp
//  magic
//
//  Created by Pranav Singhal on 27/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

//
//  main.cpp
//  Magic_Square
//
//  Created by Pranav Singhal on 07/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//
//Magic square is a square with each row or column or main diagonal sum individually equal to a constant
#include<iostream>
using namespace std;

void magicsquare(int n) //n should be always odd.
                        //Coxeter Rule is used here.
{
    if(n%2==0)
        return ;
    int a[n][n];
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
    {
            a[i][j]=-1;
    }
    }
    int t=1;
    int p=0;
    int q=(n-1)/2;
    a[p][q]=t;
    t++;
    for(int i=2;i<=n*n;i++)
    {
        int tr=p;
        int tc=q;
        p--;
        q--;
        if(p==-1)
            p=n-1;
        if(q==-1)
            q=n-1;
        if(a[p][q]==-1)
        {
            a[p][q]=t;
            t++;
            
            continue;
        }
        else
        {
            p=tr;
            q=tc;
            p++;
            if(p==n)
                p=0;
            a[p][q]=t;
            t++;
                
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    magicsquare(n);
    return 143;
}
