#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res=1,maxi=1;

        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                res++;
            }
            else{
                res=1;
            }
            maxi=max(maxi,res);
        }
        cout<<maxi+1<<endl;
    }
}