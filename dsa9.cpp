#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1;i >= 0;i--){
            if (digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main(){
  int n,num;
  std::vector <int> digits,res;
  Solution s;
  std::cout << "Plus One\n==== ===\n";
  std::cout << "Enter the number of element :: ";
  if (!(std::cin >> n) || n <= 0){
    std::cerr << "Error :: invalid input\n";
    return 1;
  }
  for (int i = 0;i < n;i++){
    std::cout << "Enter Element " << i + 1 << "(0 - 9) :: ";
    if (!(std::cin >> num) || num > 9 || num < 0){
      std::cerr << "Error : invalid element input\n";
      return 1;
    }
    digits.push_back(num);
  }
  res = s.plusOne(digits);

  std::cout << "Incremented Value is :: ";
  for (int i = 0;i < res.size();i++){
    std::cout << res[i] << ' ';
  }
  return 0;
}