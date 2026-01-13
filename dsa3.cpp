#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int sum = 0;
        int n = s.length();
        for (int i = 0;i < n;i++){
            
            if (s[i] == 'M') sum += 1000;
            else if (s[i] == 'D') sum += 500;
            else if (s[i] == 'L') sum += 50;
            else if (s[i] == 'V') sum += 5;
            else if (s[i] == 'C'){
                if (i + 1 < n && s[i + 1] == 'M') {sum += 900;i++;}
                else if (i + 1 < n && s[i + 1] == 'D') {sum += 400;i++;}
                else sum += 100;
            }
            else if (s[i] == 'X'){
                if (i + 1 < n && s[i + 1] == 'C') {sum += 90;i++;}
                else if (i + 1 < n && s[i + 1] == 'L') {sum += 40;i++;}
                else sum += 10;
            }  
            else if (s[i] == 'I'){
                if (i + 1 < n && s[i + 1] == 'X') {sum += 9;i++;}
                else if (i + 1 < n && s[i + 1] == 'V') {sum += 4;i++;}
                else sum += 1;
            }
        }

        return sum;
    }
};

int main(){
  Solution s;
  std::string roman;
  std::cout << "Roman to Integer\n================\n";
  std::cout << "Enter a roman numerical (I,V,X,L,C,D,M) :: ";
  if (!(std::cin >> roman)){
    std::cerr << "Error : Invalid Roman input\n";
    return 67;
  }
  std::cout << "The Roman numerical " << roman << " to integer is " << s.romanToInt(roman) << '\n';
  return 0;
}
