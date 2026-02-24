#include<bits/stdc++.h>

using namespace std;

int n,k;
int x[20] = {0};
vector<int> a;
int dem = 0;
void newtest(){
    cin >> n >> k;
    a.resize(n + 1);
    for (int i = 1;i <= n;i++){
        cin >> a[i];
    }
}
void xet(){
    int sum = 0;
    for(int i = 1;i <= n;i++){
        sum += a[i]*x[i];
    }
    if (sum == k){
        for(int i = 1;i <=n;i++){
            if(x[i] > 0){
                cout << a[i] << " ";
            }
        }
        cout << "\n";
        dem++;
    }
}
void Try(int i){
    for (int j = 0;j <= 1;j++){
        x[i] = j;
        if (i == n){
            xet();
        }
        else {
            Try(i+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    newtest();
    Try(1);
    cout << dem;
    return 0;
}