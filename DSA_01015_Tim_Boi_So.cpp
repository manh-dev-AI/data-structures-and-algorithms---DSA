#include <bits/stdc++.h>
using namespace std;

string bfs(int n){

    queue<string> q;

    q.push("9");

    while(!q.empty()){

        string s = q.front();
        q.pop();


        int rem = 0;

        for(char c : s){
            rem = (rem * 10 + (c - '0')) % n;
        }


        if(rem == 0){
            return s;
        }


        q.push(s + "0");
        q.push(s + "9");
    }

    return "";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        cout << bfs(n) << "\n";
    }

    return 0;
}