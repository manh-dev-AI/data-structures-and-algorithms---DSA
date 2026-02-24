#include <bits/stdc++.h>

using namespace std;

void test(){
    int n;
    cin >> n;
    int a[n*n];
    for(int i = 0;i < n*n;i++){
        cin >> a[i];
    }
    sort(a , a+ (n*n) ,greater<int>());
    long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += a[i];
    }
    cout << sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}