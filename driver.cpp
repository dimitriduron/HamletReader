#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;

//helper functions
string randomWord();

int main(){
    string validChars = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890.,;:!?&-()[]\t\"\'\t";
    string line;
    char randChar;
    char ptrChar;
    int count;

    ifstream hamlet("hamlet.txt");

    while(getline(hamlet, line)){
        for(int i = 0; i < line.length(); i++){
            ptrChar = line[i];
            randChar = validChars[rand() % validChars.length()];
            count = 0;
            cout << ptrChar;
            while(ptrChar != randChar){
                randChar = validChars[rand() % validChars.length()];
                count++;
                if(count == 100){
                    count = 0;
                    //cout << endl << line[i];
                }
            }
        }
        cout << endl;
    }
    
    hamlet.close();
    return 0;
}

