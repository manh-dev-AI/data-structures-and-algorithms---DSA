#include <bits/stdc++.h>

using namespace std;

int n , s;
vector<int> cur;
vector<vector<int>> ans;
int cnt = 0;
void backtrack(int pos,int sum,int a[]){
    if(sum > s){
        return;
    }
    if(sum == s){
        ans.push_back(cur);
        cnt++;
        return;
    }


    for(int i = pos;i < n;i++){
        cur.push_back(a[i]);
        backtrack(i ,sum + a[i],a);
        cur.pop_back();
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        cur.clear();
        ans.clear();
        cnt = 0;
        backtrack(0 , 0 , a);
        if(cnt == 0){
            cout << "-1\n";
        }
        else {
            cout << cnt << " ";
            for(auto x : ans){
                for(int i = 0;i < x.size();i++){
                    if(i == 0){
                        cout << "{" << x[i];
                    }
                    else cout <<  " " << x[i];
                    if(i == x.size() - 1) cout << "} ";
                }
            }
            cout << "\n";
        }
        
    }
    
    return 0;
}