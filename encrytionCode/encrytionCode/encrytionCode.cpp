
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char option;
    int key;
    int userKey;
    string decryptKey;
    ofstream wMessageFile;
    ifstream rMessageFile;
    ofstream keys;
    char str[100];
    char message[100];
    ifstream decKeys;
    int attempt = 0;
    cout << "enter the message" << endl;
    cin >> str;
    cin.ignore(100, '\n');
    wMessageFile.open("messgage.txt", ios::out);
    wMessageFile << str;
    wMessageFile.close();
    do {
        cout << "chose the following option" << endl;
        cout << "1.encrypt"<<endl;
        cout << "2.decrypt"<<endl;
        cout << "3.exit";
        cin >> option;
        switch (option) {
        case '1':
            cout << "chose the key for encryption" << endl;
            cin >> key;
            keys.open("myKeys.txt", ios::out);
            keys << key;
            keys.close();
            for (int i = 0; i < str[i] && str[i] != '\0'; i++) {
                str[i] = str[i] + key;
            }
            cout << "message encryted" << endl;
            break;
        case '2':
            decKeys.open("myKeys.txt", ios::in);
            while (!decKeys.eof()) {
                decKeys >> key;
            }
            decKeys.close();
            while (attempt < 3) {
                cout << "enter the user Key" << endl;
                cin >> userKey;
                if (userKey == key) {
                    for (int i = 0; i < 100 && str[i] != '\0'; i++) {
                        str[i] = str[i] - key;
                    }
                    rMessageFile.open("messgage.txt", ios::in);
                    while (!rMessageFile.eof()) {
                        rMessageFile >> message;
                    }
                    cout << message;
                    cout << endl;
                    cout << "message decrypted" << endl;
                }
                else {
                    cout << "you have entered the wrong key";
                }
                attempt++;
            }
            if (attempt == 3) {
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

