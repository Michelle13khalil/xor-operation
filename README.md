while trying to learn xor operation which used to obfusscate malwares by malware developers to make it more confusing to analyze them 
in xor operatin ,we use xor bitwise ,,,,,,,,,,,, i have learned to encrypt ip adress as an example and decrypt it 
here is the code in c++ 
![xor](https://user-images.githubusercontent.com/104471727/221652660-73c24024-7ed3-4099-ab4c-8bb3f003df91.png)











#include <iostream>
#include <string>
using namespace std;

int main()
{
  string key = "m";

  string message = "127.198.192.22";

  string binary_key = key;
  string binary_message = message;

  string ciphertext = "";
  for (int i = 0; i < binary_message.length(); i++)
  {
    ciphertext += binary_message[i] ^ binary_key[i % binary_key.length()];
  }

  cout << ciphertext << endl;
  return 0;
  }


++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++






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
