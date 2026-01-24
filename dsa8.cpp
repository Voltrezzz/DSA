#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0){
            int digit = x % 10;

            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
                return 0;
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
                return 0;

            reversed = reversed * 10 + digit ;
            x /= 10;
        }
        return reversed;
    }
};

int main(){
  Solution s;
  int x;

  std::cout << "Reverse Integer (32-bit)\n";
  std::cout << "Enter an integer to reverse :: ";
  if (!(std::cin >> x)){
    std::cerr << "Error : Invalid integer input\n";
    return 1;
  }
  std::cout << "Reversed Integer :: " << s.reverse(x);
  
  return 0;
}