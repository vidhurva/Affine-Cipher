# Affine-Cipher
Neat Code in Programming Affine Cipher

// General Summary

Hello readers! In this program, I developed a Affine Cipher, which is a monoalphabetic substitution cipher. This program  allows users to enter a message, a alpha variable, and a beta variable. The purpose of this program is to code an algorithm that allows one to encrypt and decrypt an entered string.

The resulted output is the user's original message, encrypted message, and the decrypted message (the original string inputted in the program). 

// Affine Cipher Description

This program highlights the Affine Cipher, which is a type of substitution cipher where each letter in the alphabet is converted to a numeric equivalent. For example, the letter A is equivalent to 0 and the letter Z is equivalent to 25. Converting the characters from a string of text to the numerical equivalent is the first step when implementing the formula.
This is the following formula used to encrypt and decrypt the text: Encryption: y =  αx + β mod 26
Decryption x = α-  1 (y - β) mod 26
In this formula, “α” represents alpha, which is used to multiply the value of a character's numerical equivalent by a numerical amount. Meanwhile, “β” represents beta, which is used to add a character by a numerical amount when encrypting. If the new numerical value of the character exceeds 25, mod is then applied to the value. Mod divides the numerical value by 26 until the value is no longer higher than 26. Once the value is lower than 26, the algorithm outputs
Vashisht 3
 
the remainder of the numerical value that is converted to the letter equivalent. If the new numerical value does not exceed 25, then only the number to letter conversion is implemented when outputting the value. When decrypting, an inverse is applied to the formula in order for the encrypted characters to switch into their original message. α-1 represents the inverse of alpha which is found by performing the Euclidean inverse. Additionally, beta subtracts the encrypted character’s numerical value.

// Algorithm

Step 1: Start. Program prompts user to enter string.
Step 2: User enters a string
Step 3: Program ensures string is from a – z. If not, return to step 2.
Step 4: User enters a value for alpha.
Step 5: Program ensures that value is from 1 < a < 25. If not, return to step 4. Step 6: User enters a value for beta
Step 7: Program ensures that value is from 0 < b < 25. If not, return to step 6. Step 8: Program outputs the user’s original message.
Step 9: Program returns the encrypted message.
Step 10: Program returns the decrypted message.
Step 11: End

// Example


The user input is “A”.
α =1 β =3
Encryption formula: y =  αx + β mod 26
The variables are then replaced with the user input: y = (1)(‘A’) + 3
Note that the numerical equivalent for ‘A’ is 0.
y = (1)(0) + 3 mod 26 y = 0 + 3 mod 26
y = 3 mod 26
y= 3
The numerical value is then converted into a character by applying  (char) in the c++ code. The resulted output is, “D”, which is the letter equivalent of 3. Then, the decryption process occurs.
The character for decryption is “D”. Decryption formula: x = α-  1 (y - β) mod 26
x = 1/mod26( 3 - 3) x = 1/mod26(0)
x= 0
Note that the letter equivalent for 0 is “A”, which is the user’s original string input.
