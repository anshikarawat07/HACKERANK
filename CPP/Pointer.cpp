#include <iostream>
using namespace std;
void update(int *a, int *b) {
    int x = *a;  
    int y = *b;  
    *a = x + y;  
    *b = abs(x - y);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; 
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl << b << endl;
    return 0;
}
