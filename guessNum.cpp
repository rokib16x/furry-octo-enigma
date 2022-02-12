#include <iostream>
using namespace std;

int main() {
    
    int secretNum =7;
    int guess;
    int guessCount=0;
    while (secretNum!= guess){
        cout<<"Enter guess: ";
        cin>>guess;
        guessCount++;
        if (guessCount==4)
            cout<<"You Lose...";
            break;
    }
    if (secretNum==guess)
    cout<<"You Win";
    return 0;
}
