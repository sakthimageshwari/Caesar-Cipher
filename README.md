# Caesar-Cipher Shifting

PROBLEM :

  Have the function CaesarCipher(str,num) take the the str parameter and perform a caesar ciphershift on it using the num parameter as the shifting number.
A Caesar Cipher works by shifting each letter in th string N place in the  alphabet (in this case N will be num). Punctuation, spaces,  and capitalization should remain intact.Foe example, if the string is "Caesar Cipher" and num is 2 the output should be "Ecguct Ekrigt" shiffted for 2  alphabets.

EXPLANATION:

  Caeser Cipher shifting:
      The Caesar cipher is named after none other than Julius Caesar himself (yes, the Roman leader with the laurel wreath and all). Legend has it that he used this cipher to communicate secretly with his generals during military campaigns.It’s a type of substitution cipher, which means it replaces each letter in the plaintext with another letter based on a fixed shift value.
      
  How Does It Work?
  
  Shift Value:You choose a fixed shift value (let’s call it n). For example, if n is 3, every letter will be shifted three places down the alphabet.

  Encryption:
      Take your plaintext message (the original text you want to encrypt).
      Replace each letter with the letter n positions down the alphabet.
      Wrap around if you go past Z (or A if you’re shifting left).
      For instance, if n is 3:
        “A” becomes “D”
        “B” becomes “E”
        “C” becomes “F”
        …and so on.
        
Decryption for problem:
    (1)To decrypt, simply reverse the process. Shift each letter back by n positions.
    (2)For instance, if n is 3:
      “A” becomes “D”
      “B” becomes “E”
      “C” becomes “F”
      …and so on.
   (3)Punctuation, spaces,  and capitalization should remain intact.
       
PROBLEM TYPE:

  String  function 
  
SOLVING METHOD:

  Solved using c++ programming language
  
  
