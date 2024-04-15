#include <iostream>
#include <ctime>
using namespace std;
int main()
 {  cout<<"* * * Welcome to Number Guessing Game * * * "<<endl;
    srand(time(0));
    int randomnumber=rand() % 100 + 1;
    int guess;
    bool guessedCorrectly=false;

    cout<<"Guess the number between 1 and 100: ";
    while (!guessedCorrectly) {
        cin>>guess;
        if (guess == randomnumber) {
            cout<<"Congratulations! You guessed the correct number."<<endl;
            guessedCorrectly = true;
        }
        else if(guess<randomnumber) {
            cout<<"Too low. Guess again: ";
        } 
        else {
            cout<<"Too high. Guess again: ";
        }
    }

    return 0;
}
