#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 1;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(a[j] <= a[i]){
                swap(a[i] , a[j]);
            }
        }
        cout << "Buoc " << cnt << ": ";
        for(int z = 0;z < n;z++){
            cout << a[z] << " ";
        }
        cout << "\n";
        cnt++;
    }
    return 0;
}