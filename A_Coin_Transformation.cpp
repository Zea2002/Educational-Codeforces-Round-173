#include<bits/stdc++.h>
using namespace std;

long long maxCoins(long long n) {
    long long count = 1; 
    while (n > 3) {
        n /= 4;
        count *= 2; 
    }
    return count; 
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n; 
        cout << maxCoins(n) << endl; 
    }
   return 0;
}