#include <iostream>
using namespace std;

int main() {
    char x='a';
    int n=5;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<x<<" ";
    }
    x++;
    cout<<endl;
}
return 0;
}

// a 
// b b 
// c c c 
// d d d d 
// e e e e e 