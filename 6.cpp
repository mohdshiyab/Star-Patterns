#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<n-i+1;
        }
        cout<<endl;
    }
    return 0;
}

// 11111
// 2222
// 333
// 44
// 5