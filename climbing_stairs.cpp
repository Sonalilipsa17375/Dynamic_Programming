#include <iostream>
#include <vector>

using namespace std;

int climbstairs(int n)
{
    // if (n == 1)
    //     return 1;

    vector<int> dp(n + 1);

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{

    int n;
    cout << "Enter number of stairs" << endl;
    cin >> n;

    cout << "number of ways : " << climbstairs(n) << endl;

    return 0;
}
