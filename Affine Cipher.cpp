// Vidhur Vashisht

// Affine Cipher Code

#include <iostream>

using namespace std;

// function encrypts the user's text
// string message, int alpha, and int beta are parameters that are carried in both encryption and decryption functions
string encryption(string message, int alpha, int beta)
{
   string encryptedtext = "";

     for(int r = 0; r < message.length(); r++)
     {
// encryption formula is applied
       if(message[r] != ' ')
          encryptedtext = encryptedtext + (char) ((((alpha * (message[r] - 'A')) + beta) % 26) + 'A');
       else
          encryptedtext += message[r];

     }
// program returns the encrypted text for output
   return encryptedtext;

}

// function decrypts the user's text back to the original message
string decryption(string message, int alpha, int beta)
{
   string decryptedtext = "";

     for(int s = 0; s < message.length(); s++)
     {

// decryption formula is applied
       if(message[s] != ' ')
         decryptedtext = decryptedtext + (char) ((((alpha * (message[s] - 'A')) - beta) % 26 ) + 'A');
       else
         message += decryptedtext[s];
     }

  return message;
}

int main()
{
   string message;
   char i;
   int alpha, beta;

// User is required to input a string with all capital letters (spaces are allowed)
   while(message[i] < 'A' || message[i] > 'Z')
   {
      cout << "Enter a string using only characters A - Z : ";
      getline(cin, message);
   }
// User is required to input a numerical value for alpha with given conditions
   while(alpha <= 0 || alpha >= 26)
   {
      cout << "Enter a value from 1-25 for alpha :";
      cin >> alpha;
   }

// user is required to input a numerical value for beta with given conditions
   while(beta <= 0 || beta >= 26)
   {
      cout << "Enter a value from 0-25 for beta :";
      cin >> beta;
   }

// Program returns the user's message, encryption of the message, and decryption of the message

   cout << "Your message is: " << message << endl;
   cout << "Your encrypted message is: " << encryption(message, alpha, beta) << endl;
   cout << "The decrypted message is: " << decryption(message, alpha, beta) << endl;
}
