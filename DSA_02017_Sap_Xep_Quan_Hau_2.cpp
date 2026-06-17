#include <bits/stdc++.h>
using namespace std;

vector<int> cheochinh(16 , 0);
vector<int> cheophu(16 , 0);
vector<int> used(9 , 0);
int a[9][9];
long long ans = 0;

void backtrack(int row,long long sum = 0){

    if(row > 8){
        ans = max(ans , sum);
        return;
    }

    for(int col = 1;col <= 8;col ++){


        if(!cheochinh[row - col + 8] && !cheophu[row + col] && !used[col] ){
            cheochinh[row - col + 8] = 1;
            cheophu[row + col] = 1;
            used[col] = 1;

            backtrack(row + 1,sum + a[row][col]);

            cheochinh[row - col + 8] = 0;
            cheophu[row + col] = 0;
            used[col] = 0;

        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {   
        ans = 0;
        fill(cheochinh.begin() , cheochinh.end() , 0);
        fill(cheophu.begin() , cheophu.end() , 0);
        fill(used.begin() , used.end() , 0);
        for(int i = 1;i <= 8;i++){
            for(int j = 1;j <= 8;j++){
                cin >> a[i][j];
            }
        }
        backtrack(1 , 0);
        cout << ans << "\n";
    }
    
    return 0;
}