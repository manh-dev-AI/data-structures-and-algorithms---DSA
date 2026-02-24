#include <bits/stdc++.h>

using namespace std;

vector<int> used;
vector<int> chinh;
vector<int> phu;
long long MAX = INT_MIN;

void backtrack(int i,long long sum,int a[9][9]){
    for(int j = 1;j <= 8;j++){
        if(used[j] && chinh[i - j + 8] && phu[i + j - 1]){
            sum += a[i][j];
            used[j] = 0;
            chinh[i - j + 8] = 0;
            phu[i + j - 1] = 0;
            if(i == 8){
                MAX = max(MAX , sum);
                return;
            }
            else {
                backtrack(i + 1,sum , a);
            }
            sum -= a[i][j];
            used[j] = 1;
            chinh[i - j + 8] = 1;
            phu[i + j - 1] = 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {   used.assign(9 , 1);
        chinh.assign(2 *8 + 1, 1);
        phu.assign(2 * 8 + 1 , 1);
        int a[9][9];
        for(int i = 1;i<= 8;i++){
            for(int j = 1;j <= 8;j++){
                cin >> a[i][j];
            }
        }
        MAX = INT_MIN;
        backtrack(1 , 0 , a);
        cout << "Test " << t + 1 << ": " << MAX << "\n";
    }
    return 0;
}