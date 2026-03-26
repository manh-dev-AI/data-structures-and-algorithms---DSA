#include <bits/stdc++.h>

using namespace std;

long long step[52];

void nhay(){
    step[0] = 0;
    step[1] = 1;
    step[2] = 2;
    step[3] = 4;
    for(int i = 4;i <= 50;i++){
        step[i] = step[i - 1] + step[i - 2] + step[i - 3];
    }
}

int main(){
    nhay();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << step[n] << "\n";
    }
    return 0;
}