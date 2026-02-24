#include <bits/stdc++.h>
using namespace std;

int n;

bool check(const string &s) {
    if (s[0] == '8' &&
        s[s.length() - 1] == '6' &&
        s.find("6666") == string::npos &&
        s.find("88") == string::npos)
        return true;
    return false;
}

void Try(int i, string s) {
    if (i == n) {
        if (check(s))
            cout << s << "\n";
        return;
    }

    Try(i + 1, s + '6');
    Try(i + 1, s + '8');
}

int main() {
    cin >> n;
    Try(0, "");
    return 0;
}
