#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    cout << "Buoc " << cnt <<  ": " <<  a[0]  << "\n";
    
    for(int i = 1;i < n;i++){
        cnt++;
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        cout << "Buoc " << cnt << ": ";
        for(int j = 0;j <= i;j++){
            cout <<   a[j]  << " ";
        }
        cout << "\n";
    }
    return 0;
}