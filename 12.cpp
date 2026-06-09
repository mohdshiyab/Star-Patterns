#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=n; i++){
    char x='a';
    for(int j=1; j<=i; j++){
        cout<<x;
        x++;
    }
    cout<<endl;
}
return 0;
}

// a
// ab
// abc
// abcd
// abcde