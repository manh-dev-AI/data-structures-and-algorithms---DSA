#include <bits/stdc++.h>
using namespace std;

int priority(char op){
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int calc(int a, int b, char op){
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;
    if(op == '/') return a / b; // chia nguyên
    return 0;
}

int solve(string s){
    stack<int> num;
    stack<char> op;

    for(int i = 0; i < s.size(); i++){
        // 1. Nếu là số (có thể nhiều chữ số)
        if(isdigit(s[i])){
            int val = 0;
            while(i < s.size() && isdigit(s[i])){
                val = val * 10 + (s[i] - '0');
                i++;
            }
            i--; // lùi lại 1 bước
            num.push(val);
        }
        // 2. (
        else if(s[i] == '('){
            op.push(s[i]);
        }
        // 3. )
        else if(s[i] == ')'){
            while(!op.empty() && op.top() != '('){
                int b = num.top(); num.pop();
                int a = num.top(); num.pop();
                num.push(calc(a, b, op.top()));
                op.pop();
            }
            op.pop(); // bỏ '('
        }
        // 4. toán tử
        else{
            while(!op.empty() && priority(op.top()) >= priority(s[i])){
                int b = num.top(); num.pop();
                int a = num.top(); num.pop();
                num.push(calc(a, b, op.top()));
                op.pop();
            }
            op.push(s[i]);
        }
    }

    // 5. tính nốt
    while(!op.empty()){
        int b = num.top(); num.pop();
        int a = num.top(); num.pop();
        num.push(calc(a, b, op.top()));
        op.pop();
    }

    return num.top();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}