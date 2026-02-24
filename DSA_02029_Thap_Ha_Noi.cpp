#include <bits/stdc++.h>

using namespace std;

vector<int> a;

void Try(int n,char dau,char trgian,char cuoi)
{
    if(n == 1){
        cout << dau << " -> " << cuoi << "\n";
        return;
    }

    Try(n - 1,dau,cuoi,trgian);
    cout << dau << " -> " << cuoi <<"\n";
    Try(n - 1,trgian,dau,cuoi);
}

int main(){
    for(int i = 0;i <= 10;i++){
        a.push_back(i);
    }
    int n;
    cin >> n;
    Try(n,'A','B','C');
    return 0;
}