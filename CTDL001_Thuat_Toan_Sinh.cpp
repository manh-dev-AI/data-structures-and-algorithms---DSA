#include <bits/stdc++.h>

using namespace std;

int x[20] = {0};
int n;

void in(){
    for(int i = 0;i <= n - 1;i++){
        cout << x[i] << " ";
    }
    cout << "\n";
}

void Try(int i){
    for (int j = 0;j <= 1;j++){
        x[i] = j;
        x[n - i - 1] = j;
        if (i == n/2){
            in();
        }
        else {
            Try(i + 1);
        }
    }
}
int main(){
    cin >> n;
    Try(0);
    return 0;
}