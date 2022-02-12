#include <iostream>
using namespace std;
void mainFunc(int a,int b, string c);
void mainFunc2();
int x;
int y;

void mainFunc(int a,int b, string c){
    x=a;
    y=b;
    cout<< "Hi, "<<c<<"."<<endl;
    mainFunc2();
    cout<<endl;
}
void mainFunc2(){
    cout<<"You're "<<x<<" years old. Your Fav number is: "<<y<<endl;
}

int main() {
    mainFunc(20,16,"Rokibul Hasan");
    mainFunc(2, 31, "Fiasco");
    return 0;
}
