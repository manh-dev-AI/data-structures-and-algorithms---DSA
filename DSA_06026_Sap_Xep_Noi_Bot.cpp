#include <bits/stdc++.h>

using namespace std;

int xet(int a[],int n){
    for(int i = 0;i < n - 1;i++){
        if(a[i] > a[i + 1]){
            return 0;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i< n;i++){
        cin >> a[i];
    }
    int cnt = 1;
    for(int i = 0;i < n ;i++){
        
        for(int j = 0;j < n - i - 1;j++){
            if(a[j] > a[j + 1]){
                swap(a[j + 1] , a[j]);
            }
        }
        
        cout << "Buoc " << cnt << ": ";
        cnt++;
        for(int j = 0;j < n;j++){
            cout << a[j] << " ";
        }
        cout << "\n";
        if(xet(a , n)){
            break;
        }
    }
    return 0;
}