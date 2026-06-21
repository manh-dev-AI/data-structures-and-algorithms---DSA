#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    deque<int> de;
    for(int i = 0;i < q;i++){
        string s;
        cin >> s;
        if(s == "PUSHBACK"){
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if(s == "PUSHFRONT"){
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(!de.empty()){
                cout << de.front() << "\n";
            }
            else {
                cout << "NONE\n";
            }
        }
        else if(s == "PRINTBACK"){
            if(!de.empty()){
                cout << de.back() << "\n";
            }
            else {
                cout << "NONE\n";
            }
        }
        else if(s == "POPFRONT"){
            if(!de.empty()){
                de.pop_front();
            }
        }
        else if(s == "POPBACK"){
            if(!de.empty()){
                de.pop_back();
            }
        }

    }
    return 0;
}