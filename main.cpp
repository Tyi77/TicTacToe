#include <iostream>
#include <string>
using namespace std;

int main(){
    // Title
    cout << "!! Tic Tac Toe !!" << endl;
    // Choose the first going person
    bool firstFlag = false;
    bool firstPlayer = true; // T: Player, F: Computer
    cout << "O goes first. Do you want O or X? (O/X): ";
    do{
        string playerInput;
        cin >> playerInput;
        playerInput.erase(0, playerInput.find_first_not_of(" \t\f\v\n\r"));
        playerInput.erase(playerInput.find_last_not_of(" \t\f\v\n\r") + 1);
        
        if(playerInput == "O" || playerInput == "o"){
            firstFlag = true;
        } else if (playerInput == "X" || playerInput == "x"){
            firstFlag = true;
            firstPlayer = false;
        } else {
            cout << "Please choose again (O/X): ";
        }
    } while(!firstFlag);

    if(firstPlayer){
        cout << "You choose O. Let's get started!" << endl;
    } else {
        cout << "You choose X. Let's get started!" << endl;
    }

    // Computer uses must-win algorithm
    
    
    // Player win or not

    return 0;
}