#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A) 
        cin >> x;

    // brute force sliding window O(n^2)
    // one pass for each window size 
    // window sizes [1, N]
    int best = 0;
    for (int start = 0; start < N; start++) {
        //cerr << "start " << start << endl;
        for (int window = 1; window <= N; window++) {
            int bits = 0;
            // bits left of window
            for (int i = 0; i < start; i++) {
                //cerr << A[i] << "-";
                bits += A[i];
            }
            // bits in window
            //cerr << "|";
            for (int i = start; i < min(start + window, N) ; i++) {
                //cerr << A[i] << "-";
                bits += 1 - A[i];
            }
            //cerr << "|";
            // bits right of window
            for (int i = min(N, start + window); i < N; i++) {
                //cerr << A[i] << "-";
                bits += A[i];
            }
            //cerr << endl;
            best = max(bits, best);
        } 
    }
    cout << best << endl;

    return 0;
}
