//2 ^ x * 3 ^ y * 5 ^ z //c(n) = c(n-1)*2 || c(n-1)*3 || c(n-1)*5
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> ugly(10001);
    ugly[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;

    for(int i = 1; i < 10000; i++){
        long long next2 = ugly[i2] * 2;
        long long next3 = ugly[i3] * 3;
        long long next5 = ugly[i5] * 5;

        long long next = min({next2, next3, next5});
        ugly[i] = next;

        if(next == next2) i2++;
        if(next == next3) i3++;
        if(next == next5) i5++;
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ugly[n-1] << "\n";
    }
}