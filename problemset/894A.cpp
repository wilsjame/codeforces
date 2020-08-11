#include <iostream>
#include <string>
using namespace std;
int main () {
    int ans = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Q') {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == 'A') {
                    for (int k = j + 1; k < s.size(); k++) {
                        if (s[k] == 'Q') {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
