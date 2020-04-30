//
//  main.cpp
//  is_palin_between_index_l_and_r
//
//  Created by Pranav Singhal on 18/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        int q;
        cin>>s>>q;
        char a[s+1];
        cin>>a;
        int count[26][s];
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<s;j++)
                count[i][j]=0;
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(a[j]-'a'==i)
                    count[i][j]++;
            }
        }
        while(q--)
        {
           
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            
            int flag=0;
            if((r-l+1)%2==0)
            {
            for(int i=0;i<26;i++)
            {
                if(l==0)
                {
                    int c=count[i][r];
                    if(c%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else{
                    int c=count[i][r]-count[i][l-1];
                    if(c%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                    
            }
              if(flag==0)
              {cout<<"YES"<<endl;
                continue;
            }
            }
            
                
            
                else
                {
                    flag=0;
                    int odd=0;
                    for(int i=0;i<26;i++)
                    {
                       if(l==0)
                       {
                           int c=count[i][r];
                           if(c%2!=0)
                           {
                               if(odd==1)
                               {
                                   cout<<"NO";
                                   flag=1;
                                   break;
                               }
                               odd=1;
                           }
                       }
                        else
                        {
          int c=count[i][r]-count[i][l-1];
                            
                            if(c%2!=0)
                            {
                                if(odd==1)
                                {
                                    cout<<"NO";
                                    flag=1;
                                    break;
                                }
                                odd=1;
                            }
                        }
                    }
                    if(flag==0)
                    {
                        cout<<"YES"<<endl;
                        continue;
                    }
                    
                }
            
        }
    }
    return 0;
}

