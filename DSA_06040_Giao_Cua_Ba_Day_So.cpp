#include <bits/stdc++.h>

using namespace std;

vector<long long> giao(vector<long long> a,vector<long long> b){
    long long n = a.size() , m = b.size();
    vector<long long> res;
    long long i = 0 , j = 0;
    while(i < n && j < m ){
        if(a[i] == b[j]){
            res.push_back(a[i]);
            i++;j++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else {
            i++;
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m,p;
        cin >> n >> m >> p;
        vector<long long> a(n) , b(m ) , c(p);
        for(long long &x : a){
            cin >> x;
        }
        for(long long &x : b){
            cin >> x;
        }
        for(long long &x : c){
            cin >> x;
        }
        vector<long long> tmp = giao(a, b);
        if(tmp.empty()){
            cout << "-1\n";
            continue;
        }
        vector<long long> ans = giao(tmp , c);
        if(ans.empty()){
            cout << "-1\n";
        }
        else {
            for(long long x : ans){
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}