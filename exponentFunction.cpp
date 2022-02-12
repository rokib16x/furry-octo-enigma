#include <iostream>
using namespace std;
int exponentFunction(int base, int power);
int exponentFunction(int base, int power){
    int result =1;
    for (int i = 0; i < power; ++i) {
        result = result * base;
    }
    return result;
}
int main() {
    cout<<exponentFunction(2,3);
    return 0;
}
