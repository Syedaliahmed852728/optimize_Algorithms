// encryption_decryption_code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int i,
    char option;
    int key;
    int userKey;
    string decryptKey;
    ofstream keys;
    char str[100];
    int attempt = 0;
    cout << "enter the message" << endl;
    cin >> str;
    cout << "chose the following option" << endl;
    cout << "1.encrypt";
    cout << "2.decrypt";
    cout << "3.exit";
    cin >> option;
    do {
        switch (option) {
        case '1':
            cout << "chose the key for encryption" << endl;
            keys.open("myKeys.txt", ios::out);
            keys << key;
            for (int i = 0; i < str[i] && str[i] != '\0'; i++) {
                str[i] = str[i] + key;
            }
            cout << "message encryted" << endl;
            break;
        case '2':
            ifstream decKeys;
            decKeys.open("myKeys.txt", ios::in);
            while (!decKeys.eof()) {
                decKeys >> key;
            }
            while (attempt < 3) {
                cout << "enter the user Key" << endl;
                cin >> userKey;
                if (userKey == key) {
                    for (int i = 0; i < 100 && str[i] != '\0'; i++) {
                        str[i] = str[i] - key;
                    }
                    cout << str;
                    cout << endl;
                    cout << "message decrypted" << endl;
                }
                else {
                    cout << "you have entered the wrong key";
                }
                attempt++;
            }
            if(attempt==3){
                cout << "too many attempts....Try again later" << endl;
            }
            break;
        case '3':
            exit(0);
        default:
            cout << "chose the correct option" << endl;

            }
    } while (true);
    
       
}

