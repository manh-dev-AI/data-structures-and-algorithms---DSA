#include<bits/stdc++.h>

using namespace std;


vector<int>  x(15 , 0);
vector<vector<int>> v;
bool snt(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return  false;
        }
    }
    return true;
}
bool check(int n,vector<int> a){
    long long sum = 0;
    for(int i = 0;i < n;i++){
        if(x[i] == 1){
            sum += a[i];
        }
    }
    if(sum % 2 == 0){
        return false;
    }
    else {
        return true;
    }
}

void Try(int i,int n,vector<int> a){
    for(int j = 0;j <= 1;j++){
        x[i] = j;
        if(i  == n - 1){
            if(check(n,a)){
                v.push_back(x);
            }
        }
        else {
            Try(i + 1,n,a);
        }
    }
}







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a.rbegin() , a.rend());
        Try(0 , n , a);
        
        for(auto c : v){
            for(int i = 0;i < n;i++){
                if(c[i] == 1){
                    cout << a[i] << " ";
                }
            }
            cout << "\n";
        }
        v.clear();
        cout << "\n";
    }
    return 0;
}