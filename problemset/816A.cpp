#include <iostream>
#include <string>
using namespace std;

// increment 24hr clock by minute
string solve(string t) {
	string r;
	int h, m;
	h = (t[0] - '0')*10 + (t[1] - '0');
	m = (t[3] - '0')*10 + (t[4] - '0');
	if (++m > 59) {
		m = 0;
		if (++h > 23)
			h = 0;
	}
	if (h <= 9)
		r += '0';
	r += to_string(h);
	r += ':';
	if (m <= 9)
		r += '0';
	r += to_string(m);

	return r;
}

bool isPal(string s) {
	if ((s[0] == s[4]) && (s[1] == s[3]))
		return true;
	else 
		return false;
}

int main() {
	string S;
	cin >> S;
	int h, m;
	int t = 0;
	while (!isPal(S)) {
		S = solve(S);
		t++;
	}
	cout << t;

	return 0;
}
