#include <bits/stdc++.h>
using namespace std;

int n;
bool used[100];
char x[100];
bool isVowel(char c){
    return (c == 'A' || c == 'E');
}

bool check(){
    for(int i = 1; i < n - 1; i++){
        if(!isVowel(x[i-1]) && isVowel(x[i]) && !isVowel(x[i+1])){
            return false;
        }
    }
    return true;
}
void Try(int i){
    for(int j = 0; j < n; j++){
        if(!used[j]){
            x[i] = 'A' + j;
            used[j] = true;

            if(i == n - 1){
                if(check()){
                    for(int k = 0; k < n; k++){
                        cout << x[k];
                    }
                    cout << "\n";
                }
            } else {
                Try(i + 1);
            }

            used[j] = false; 
        }
    }
}

int main(){
    char c;
    cin >> c;

    n = c - 'A' + 1;

    memset(used, false, sizeof(used));

    Try(0);

    return 0;
}