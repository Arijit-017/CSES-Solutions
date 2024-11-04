#include<bits/stdc++.h>
using namespace std;

long long missing_number(long long n,vector<long long> &nums){
    long long ans=0;
    for(long long i = 1;i<=n;i++){
        ans ^= i;
    }
    for(long long i = 0;i<n-1;i++){
        ans ^= nums[i];
    }
    return ans;
}

int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for (long long i = 0; i < n-1; ++i) {
        cin >> nums[i];
    }
    cout<<missing_number(n,nums);
    return 0;
}