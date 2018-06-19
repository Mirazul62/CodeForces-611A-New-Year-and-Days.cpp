#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    string a,b;
    cin>>n>>a>>b;
    if(b=="week" && n==6)
        cout<<"53";
    else   if(b=="week" && n==5)
        cout<<"53";
    else  if(b=="week" )
        cout<<"52";
    else
    {
        if(n<=29)
            cout<<"12";
        else if(n==30)
            cout<<"11";
        else if(n==31)
            cout<<"7";
    }
}
