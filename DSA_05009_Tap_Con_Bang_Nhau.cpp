#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;
int used[101];
bool ok;

void Try(int pos, long long sum, long long k){
    if(!ok) return;
    if(sum > k) return;

    for(int j = pos; j < n; j++){
        if(!used[j]){
            used[j] = 1;
            sum += a[j];

            if(sum == k){
                ok = false;
                return;
            }

            Try(j + 1, sum, k);

            sum -= a[j];
            used[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);

        memset(used, 0, sizeof(used));
        ok = true;

        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum % 2 != 0){
            cout << "NO\n";
            continue;
        }

        Try(0, 0, sum / 2);

        if(ok) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
