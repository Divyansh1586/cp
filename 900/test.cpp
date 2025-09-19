#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        // Store which arrays each number can appear in
        vector<int> mask(N + 1, 0); 
        for (int i = 0; i < N; i++) {
            mask[A[i]] |= 1; // bit 0 -> A
            mask[B[i]] |= 2; // bit 1 -> B
        }

        int answer = N;  // worst case MEX = N
        for (int mex = 0; mex <= N; mex++) {
            if (mask[mex] == 0) { 
                // This number is missing from both arrays
                answer = mex;
                break;
            }
            if (mask[mex] == 1) { 
                // Appears only in A
                // B will miss this number, hence B's MEX <= mex
                answer = mex + 1;
            }
            if (mask[mex] == 2) { 
                // Appears only in B
                // A will miss this number
                answer = mex + 1;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
