#include <bits/stdc++.h>

using namespace std;

int x[20];
int used[20] ={0};

void Try(int i,int n,vector<int> a){
    for(int j = 0;j <= n - 1;j++){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n - 1){
                for(int i = 0;i < n;i++){
                    cout << a[x[i]] <<  " ";
                }
                cout << "\n";
            }
            else{
                Try(i + 1,n , a);
            }
            used[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    Try(0,n,a);
    return 0;
}