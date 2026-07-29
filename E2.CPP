#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int sum = 0;
    int dup = n;

    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }

    if (dup == sum)
        cout << "true";
    else
        cout << "false";

    return 0;
}
// same concept using number extension just remenber to change iint of revNum 