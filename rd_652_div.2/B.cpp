// B. GCD Compression
#include <iostream>
#include <vector>

using namespace std;

const int N = 2e5;

int main() {
    int n, a[N];
    int t;
    cin >> t;
    
    while(t--)
    {
        cin >> n;

        // discern even and odd numbers
        vector< int > even, odd;
        for (int i = 1; i <= 2 * n; i++) 
        {
            cin >> a[i];
            // store the indices (base 1) not the value
            if (a[i] % 2) 
                odd.push_back(i);
            else
                even.push_back(i);
        }

        // answer is pairs of indices 
        // remember 2*odd = even and 2*even = even
        vector< pair< int, int > > ans;
        for (int i = 0; i + 1 < odd.size(); i += 2) 
            ans.push_back({odd[i], odd[i + 1]});
        for (int i = 0; i + 1 < even.size(); i += 2)
            ans.push_back({even[i], even[i + 1]});

        // print
        for (int i = 0; i < n - 1; i++) 
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
