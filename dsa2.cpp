#include <iostream>

class Solution{
  public:
    bool isPalindrome(int x){
      if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
      
      int rev = 0;

      while(x > rev){
        rev = rev * 10 + x % 10;
        x /= 10;
      }
      
      return (x == rev || x == rev / 10);
    }
};

int main(){
  Solution s;
  int x;
  std::cout << "Enter a number to check palindrome :: ";
  if (!(std::cin >> x)){
    std::cerr << "Error :: Invalid Number Input";
    return 67;
  }
  if (s.isPalindrome(x))
    std::cout << x << " is a palindrome\n";
  else 
    std::cout << x << " is NOT a palindrome\n";
  
  return 0;
}

// Time complexity :: O(log10n)
// Space complexity :: O(1)
