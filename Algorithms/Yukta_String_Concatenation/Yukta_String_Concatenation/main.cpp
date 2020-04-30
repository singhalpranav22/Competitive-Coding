//
//  main.cpp
//  Yukta_String_Concatenation
//
//  Created by Pranav Singhal on 09/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//
//code that prints the string if it is a concatenated string else print -1
#include <iostream>
#include<string.h>
using namespace std;

struct str
{
    char a[100];
};

int main()
{
    int n;
    cin>>n;
    struct str s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].a;
    }
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char b[100];
            strcpy(b,s[i].a);
            strcat(b,s[j].a);
            for(int p=0;p<n;p++)
            {
                if(strcmp(b,s[p].a)==0)
                {
                    flag=1;
                    cout<<b<<endl;
                }
            }
        }
    }
    if(flag==-1)
        cout<<"-1"<<endl;
    return 0;
    
}
