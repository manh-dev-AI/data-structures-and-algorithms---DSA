#include <bits/stdc++.h>

using namespace std;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    vector<int> b,c;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            b.push_back(a[i]); // vị trí chẵn
        else
            c.push_back(a[i]); // vị trí lẻ
    }
    sort(b.begin() , b.end());
    sort(c.rbegin() , c.rend());
    int l1 = 0 , l2 = 0;
    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            cout << b[l1++] << " ";
        }
        else {
            cout << c[l2++] << " ";
        }
    }
    return 0;
}