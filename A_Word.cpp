#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
string a;
int lcount=0;
int ucount=0;
//int i,j;
getline(cin,a);
for(int i=0;i<a.size();i++)
{
if(a[i]>='A' && a[i]<='Z')
{
    ucount++;
}
else
{
    lcount++;  
}
}

if(ucount > lcount)
{
    for(int i=0;i<a.size();i++)
    {
    if(a[i]>= 'a' && a[i]<= 'z')
    {
        a[i]=a[i]-32;
    }
    }
}

else{
    {
    for(int i=0;i<a.size();i++)
    {
    if(a[i]>= 'A' && a[i]<= 'Z')
    {
        a[i]=a[i]+32;
    }
    }
}
}
cout<<a;
return 0;
}
