#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = n - 2;
    while(i >= 0 && a[i] >= a[i + 1]){
        i--;
    }

    if(i < 0){
        
        sort(a.begin(), a.end());
    } else {
        int j = n - 1;
        while(a[j] <= a[i]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.end());
    }

    for(int x : a){
        cout << x << " ";
    }
    cout << "\n";
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
