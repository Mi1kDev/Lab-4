#include <iostream>

int main(){
  std::cout << "Enter three integers: ";
  int num1, num2, num3;
  std::cin >> num1 >> num2 >> num3;
  if(num1 > num2 && num2 > num3){
    std::cout << "These numbers are in descending order.";
  }else if(num3 > num2 && num2 > num1){
    std::cout << "These numbers are in ascending order.";
  }else{
    std::cout << "These numbers are not in order.";
  }

}
