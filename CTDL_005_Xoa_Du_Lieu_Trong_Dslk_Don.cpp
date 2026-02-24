#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int &i : a){
        cin >> i;
    }
    int x;
    cin >> x;
    for (int i : a){
        if ( i != x){
            cout << i << " ";
        }
    }
    cout <<"\n";
    return 0;
}