#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, d;
    cin >> n >> d;
    cout << 1 << ' ';
    if(d % 3 == 0 || n > 2) cout << 3 << ' ';
    if(d % 5 == 0) cout << 5 << ' ';
    if(d % 7 == 0 || n>2) cout << 7 << ' ';
    if((n==2 && d==9)||(n<=5 && n>2 && (d==3 || d==6 || d==9)) || n>=6) cout << 9 << ' ';
    cout << endl;
}


int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}