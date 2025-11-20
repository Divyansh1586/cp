#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// int solve(int i, int prev, vector<vector<int>> &arr, vector<vector<int>> &dp,
//           unordered_set<int> &s)
// {
//     if (i >= 3)
//         return 0;
//     if(dp[i][prev] != -1) return dp[i][prev];
//     int mx = INT_MIN;
//     for (int j = 0; j < arr[0].size(); j++)
//     {
//         if (s.find(j) == s.end())
//         {
//             s.insert(j);
//             int ans = arr[i][j] + solve(i + 1, j, arr, dp, s);
//             mx = max(mx, ans);
//             s.erase(j);
//         }
//     }
//     dp[i][prev] = mx;
//     return mx;
// }

int solve(int i, vector<vector<int>> &arr, unordered_set<int> &s)
{
    if (i >= 3)
        return 0;

    int mx = INT_MIN;
    for (int j = 0; j < arr[0].size(); j++)
    {
        if (s.find(j) == s.end())
        {
            s.insert(j);
            int ans = arr[i][j] + solve(i + 1, arr, s);
            mx = max(mx, ans);
            s.erase(j);
        }
    }
    return mx;
}


int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(3, vector<int>(n));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<vector<int>> dp(3, vector<int>(n + 1, -1));
        unordered_set<int> s;
        // cout << solve(0, 0, arr, dp, s) << '\n';
        cout << solve(0, arr, s) << '\n';
    }
}