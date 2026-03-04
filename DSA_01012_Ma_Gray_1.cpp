#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        vector<string> gray;
        gray.push_back("0");
        gray.push_back("1");
        for(int i = 2;i <= n;i++){
            int size = gray.size();

            for(int j = size - 1;j >= 0;j--){
                gray.push_back(gray[j]);
            }
            for(int j = 0;j < size;j++){
                gray[j] = "0" + gray[j];
            }
            for(int j = size;j < 2*size;j++){
                gray[j] = "1" + gray[j];
            }
        }
        for(auto x : gray){
            cout << x << " ";
        }
        cout << "\n";
        

    }
    return 0;
}