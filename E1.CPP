// this is example for revesee the number which we will used frequentloy 
// math vedio example 1
#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int revNum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    cout << revNum;
}