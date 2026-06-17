#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

void Try(int n,int k){
    if(n == 0){
        cout << '(';
        for(int i = 0;i < a.size();i++){
            if(i == a.size() - 1)
            {
                cout << a[i] <<  ')';
            }
            else {
                cout << a[i] << " ";
            }
        }
        cout << " ";
        return ;
    }

    for(int j = min(n , k);j >= 1;j--){
        a.push_back(j);
        Try(n - j,j);
        a.pop_back();
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(n , n);
        cout << "\n";
    }
    return 0;
}
