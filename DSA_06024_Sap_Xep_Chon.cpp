#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int cnt = 1;
    for(int i = 0;i < n - 1;i++){
        int index = i;
        for(int j = i + 1; j < n;j++){
            if(a[index] > a[j]){
                index = j;
            }
        }
        swap(a[index] , a[i]);
        cout << "Buoc " << cnt << ": ";
        for(int t = 0;t < n;t++){
            cout << a[t] << " ";
        }
        cout << "\n";
        cnt++;
    }
    return 0;
}