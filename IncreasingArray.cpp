#include<bits/stdc++.h>
using namespace std;

long long noOfMoves(int n, vector<long long>& nums) {
    long long count = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            count += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << noOfMoves(n, nums) << endl;
    return 0;
}
