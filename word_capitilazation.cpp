#include<bits/stdc++.h>
using namespace std;
int main(void){
    int i;
    string s;
    cin>>s;
    if(s[0]>=97&& s[0]<=122){
        s[0]-=32;
    }
    cout<<s<<endl;
    return 0;
}