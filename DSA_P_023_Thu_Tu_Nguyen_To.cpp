#include <bits/stdc++.h>

using namespace std;

int x[20] ={0};
int dem = 0;

bool check(int n){
    if (n < 2){
        return false;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void Try(int i,int n , int k){
    for(int j = x[i-1] + 1;j <= n;j++){
        x[i] = j;
        if(i == k){
            dem++;
            if (check(dem)){
                cout << dem << ": ";
                for(int t = 1;t <= k;t++){
                    cout << x[t] << " ";
                }
                cout << "\n";
            }
        }
        else {
            Try(i + 1,n,k);
        }
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    Try(1,n,k);
    return 0;
}
