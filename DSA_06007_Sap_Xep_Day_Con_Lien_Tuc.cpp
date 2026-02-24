#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b , b + n);
        int i = 0;
        while(a[i] == b[i] && i <  n){
            i++;
        }
        i++;
        int j = n-1;
        while(a[j] == b[j] && j >= 0){
            j--;
        }
        j++;
        cout << i << " " << j << "\n";
        
    }
    return 0;
}