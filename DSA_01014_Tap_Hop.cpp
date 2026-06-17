#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
int n, k, s;

void backtrack(int start, int i, int sum) {


    if(i == k) {
        if(sum == s) cnt++;
        return;
    }


    if(sum > s) return;

    for(int j = start; j <= n; j++) {
        backtrack(j + 1, i + 1, sum + j);
    }
}

int main(){
    while(cin >> n >> k >> s){
        if(n == k && k == s && s == 0){
            break;
        }
        backtrack(1 , 0 , 0);
        cout << cnt << "\n";
        cnt = 0;
    }
    return 0;
}