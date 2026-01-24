#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        std::vector <int> v = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        std::vector <std::string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        std::string result = "";
        for (int i = 0;i < v.size();++i){

            while (num >= v[i]){
                num -= v[i];
                result += s[i];
            }
        }
        return result;
    }
};

int main(){
  int n;
  Solution s;
  std::cout << "Integer to Roman Conversion\n";
  std::cout << "Enter a integer :: ";
  if (!(std::cin >> n)){
    std::cerr << "Error : Invalid Input\n";
    return 1;
  }
  std::cout << "Roman numerical :: " << s.intToRoman(n);
  return 0;
}

// Time Complexity :: O(n)
// Space Complexity :: O(1)