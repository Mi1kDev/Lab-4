#include <iostream>

int main(){
  std::cout << "Enter a character: ";
  std::string inputChar;
  std::cin >> inputChar;
  std::string vowels = "aeiouAEIOU";
  std::string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
  std::string digits = "1234567890";
  std::string punctuation = "!,.\"\';:?";

  if(vowels.find(inputChar) != std::string::npos){
    std::cout << "This character is a vowel";
  }else if(consonants.find(inputChar) != std::string::npos){
    std::cout << "This character is a consonant";
  }
  else if(digits.find(inputChar) != std::string::npos){
    std::cout << "This character is a digit";
  }else if(punctuation.find(inputChar) != std::string::npos){
    std::cout << "This character is punctuation";
  }else{
    std::cout << "This character is unrecognized";
  }
}
