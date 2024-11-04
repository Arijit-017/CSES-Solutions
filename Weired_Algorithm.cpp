#include<bits/stdc++.h>
using namespace std;

void weired_algo(long long n,vector<long long> &ans){
    if(n==1) {
        ans.push_back(n);
        return;
    }
    if(n%2==1){
        ans.push_back(n);
        n=(n*3)+1;
        weired_algo(n,ans);
    }
    else{
        ans.push_back(n);
        n=n/2;
        weired_algo(n,ans);
    }
}

int main(){
    long long n;
    vector<long long> ans;
    cin>>n;
    weired_algo(n,ans);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}