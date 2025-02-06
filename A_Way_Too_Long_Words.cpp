#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,count=0;
    string word;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>word;
        count=0;// i don't write this line
        if(word.size()>10)
        {
            for(j=1;j<word.size()-1;j++)
            {
                count++;
            }
            cout<<word[0]<<count<<word[word.size()-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
}