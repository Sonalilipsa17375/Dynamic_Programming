#include <iostream>
#include <vector>

using namespace std;

int fibo(int n)
{
    // if (n == 1)
    //     return 1;

    vector<int> dp(n + 1);
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;

    cout << "answer of nth num is : " << fibo(n) << endl;

    return 0;
}
