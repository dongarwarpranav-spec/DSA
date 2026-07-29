#include <iostream>
#include <cstdio>
using namespace std;

void Printdivisor (int n){
for(int i=1;i<=n;i++){
    if(n % i==0)
    cout<<i<<" ";
}
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >>n;
    Printdivisor(n);
    return 0;
}
// if  ke badd comma nhi atta hai

