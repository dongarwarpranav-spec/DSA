// doing practice of prime number
#include <iostream>
#include <cstdio>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int cnt =0;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            cnt ++;
            if ((n/i)!=i) cnt++;
        }
    }
    if (cnt==2)
    cout<<"true";
    else cout <<"false";
    return 0;
}

// logic hai 2 se jada number divible ho toh prime number nhi hota 