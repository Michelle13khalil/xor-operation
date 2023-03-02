#include <iostream>
#include <string>

using namespace std;

int main()
{
  string key = "m";
  string message = "172.168.100.12";
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