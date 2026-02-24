#include <bits/stdc++.h>

using namespace std;

bool check(int a[],int b[],int n){
    for(int i = 0;i < n;i++){
        if(a[i] == b[i]){
            if(a[n - i - 1] != b[n-i-1]){
                return false;
            }
        }
        else {
            if(a[i] != b[n-i-1]){
                return false;
            }
        }
    }
    return true;
}

void test(){
    int n;
    cin >> n;
    int a[n] , b[n];
    for(int  i=  0;i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b , b + n);
    if(check(a,b,n)){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}