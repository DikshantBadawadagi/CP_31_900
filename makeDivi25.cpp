#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int op1 = 0, op2 = 0, op3 = 0, op4 = 0;
        //for divisible by 25 suffi shld be 00,25,50,75
        string s = to_string(n);
        string s1 = "00", s2 = "25", s3 = "50", s4 = "75";
        int len = s.length();
        int j=1;
        for(int i = len -1;i>=0;i--){
            if(j < 0){
                break;
            }
            if(s[i] == s1[j]){
                j--;
            }
            else{
                op1++;
            }
        }
        j =1;
        for(int i = len -1;i>=0;i--){
            if(j < 0){
                break;
            }
            if(s[i] == s2[j]){
                j--;
            }
            else{
                op2++;
            }
        }
        j =1;
        for(int i = len -1;i>=0;i--){
            if(j < 0){
                break;
            }
            if(s[i] == s3[j]){
                j--;
            }
            else{
                op3++;
            }
        }
        j =1;
        for(int i = len -1;i>=0;i--){
            if(j < 0){
                break;
            }
            if(s[i] == s4[j]){
                j--;
            }
            else{
                op4++;
            }
        }
        cout<<min({op1,op2,op3,op4})<<endl;
    }
}