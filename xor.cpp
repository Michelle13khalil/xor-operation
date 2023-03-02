#include <iostream>
#include <string>
using namespace std;

string decrypt(string cipherText, char key) {
    string plainText = "";
    for (int i = 0; i < cipherText.size(); i++) {
        plainText += cipherText[i] ^ key;
    }
    return plainText;
}

int main() {
    string cipherText = "which we get";
    char key = 'm';
    string plainText = decrypt(cipherText, key);
    cout << "Plain Text: " << plainText << endl;
    return 0;
}