#include <iostream>
using namespace std;

int main() {
    int n=5;
    char x='a';
    for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<x <<" ";
        x++;
    }
    cout<<endl;
}
return 0;
}

// a 
// b c 
// d e f 
// g h i j 
// k l m n o 