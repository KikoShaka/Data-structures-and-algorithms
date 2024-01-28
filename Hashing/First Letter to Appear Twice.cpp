#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

char repeatedCharacter(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            return c;
        }
        seen.insert(c);
    }

    return ' ';
}

int main() {
    string s;
    cin >> s;

    cout << repeatedCharacter(s)<<endl;

    return 0;
}

