#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    vector<string> A(N);
    bool found = false;
    for (int i = 0; i < N; i++) {
        char a, b, c, d;
        scanf(" %c%c|%c%c", &a, &b, &c, &d);
        if ((a == 'O' && b == 'O') && !found) { 
            a = b = '+';
            found = true;
        }
        if ((c == 'O' && d == 'O') && !found) {
            c = d = '+';
            found = true;
        }
        //cerr << a + b + '|' + c + d << endl;; 
        string s ;
        s+=a;
        s+=b;
        s+='|';
        s+=c;
        s+=d;
        A[i]=s;
    }
    cout << (found ? "YES\n" : "NO\n");
    if (found) {
        for (auto a : A)
            cout << a << endl;
    }

    return 0;
}
