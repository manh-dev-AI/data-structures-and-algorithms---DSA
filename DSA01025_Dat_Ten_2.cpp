#include <bits/stdc++.h>

using namespace std;
int x[20] = {0};

void in(int k){
    for(int i = 1;i <= k;i++){
        char c = 'A';
        c += x[i] - 1;
        cout << c;
    }
    cout << "\n";
}

void Try(int i,int n,int k){
    for(int j = x[i-1] + 1;j <= n;j++){
        x[i] = j;
        if(i == k){
            in(k);
        }
        else {
            Try(i + 1,n,k);
        }
    }
}

void test(){
    int n,k;
    cin >> n >> k;
    Try(1,n,k);
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        test();
    }

    return 0;
}