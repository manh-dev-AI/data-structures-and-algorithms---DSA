#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n+1), pos(n+1);

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }

    int len = 1, best = 1;

    for(int i = 2; i <= n; i++){
        if(pos[i] > pos[i-1]){
            len++;
        }else{
            len = 1;
        }
        best = max(best, len);
    }

    cout << n - best;
}