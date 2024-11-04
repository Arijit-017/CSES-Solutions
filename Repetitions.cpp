#include<bits/stdc++.h>

using namespace std;

long long repetition(string n) {
    long long count = 1;
    long long maxi = 1;
    for(long long i = 0; i < n.length() - 1; i++) {
        if(n[i] == n[i + 1]) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 1;
        }
    }
    return maxi;
}

int main() {
    string n;
    cin >> n;
    cout << repetition(n);
    return 0;
}
