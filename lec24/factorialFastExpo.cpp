#include <iostream>
#include <cmath>
using namespace std;

int getFac(int n) {

    int m = pow(10, 9) + 7;
    long long ans = 1;

    for (int i = 1; i <= n; i++)
    {

        ans = ((ans) % m * (i % m)) % m;
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;

    cout << getFac(n);
}