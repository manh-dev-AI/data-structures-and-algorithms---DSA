#include <bits/stdc++.h>

using namespace std;

int x[100] = {0};
int n;
int k;
void Try(int i){
    int start;
    if( i== 0){
        start = 0;
    }
    else {
        start = x[i-1];
    }
    for(int j = start;j < n;j++){
        x[i] = j;
        if(i == k - 1){
            for(int t = 0;t < k;t++){
                char c = 'A' + x[t];
                cout << c;
            }
            cout << "\n";
        }
        else {
            Try(i + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char s;
    cin >> s >> k;
    n = s - 'A' + 1;
    Try(0);
    return 0;
}