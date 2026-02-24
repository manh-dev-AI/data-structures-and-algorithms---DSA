#include <bits/stdc++.h>
using namespace std;

int n;
int a[20], x[20];
vector<vector<int>> o;

bool check(){
    vector<int> c;
    for(int i = 0; i < n; i++){
        if(x[i]) c.push_back(a[i]);
    }

    int cnt = c.size();
    if(cnt < 2) return false;
    for(int i = 0;i < cnt - 1;i++){
        if(c[i] >= c[i+1]){
            return false;
        }   
    }
    o.push_back(c);
    return true;
}

void Try(int i) {
    for(int j = 1; j >= 0; j--){
        x[i] = j;
        if(i == n - 1){
            check();
        }
        else{
            Try(i + 1);
        }
    }
}

bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    x.pop_back(); // remove the last space
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    Try(0);

    sort(o.begin(), o.end(), cmp);

    for(auto &r : o){
        for(int v : r){
            cout << v << " ";
        }
        cout << "\n";
    }
    return 0;
}
