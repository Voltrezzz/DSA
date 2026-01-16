#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        std::string ref = strs[0];
        int match = ref.length();
        for (int i = 1;i < strs.size();i++){
            std::string& s = strs[i];
            int j = 0;

            while (j < match && j < s.length() && s[j] == ref[j])
                j++;
            match = j;
            if (match == 0) return "";
        }
        return ref.substr(0,match);
    }
};

int main(){
  Solution s;
  std::vector <std::string> vec;
  int n;
  std::cout << "Longest Common Prefix\n*********************\nEnter the number of strings :: ";
  if (!(std::cin >> n)){
    std::cerr << "Error : invalid integer input\n";
    return 1;
  }
  vec.resize(n);
  for (int i = 0;i < n;i++){
    std::cout << "Enter the element " << i + 1 << " :: ";
    std::cin >> vec[i];
  }
  std::string result = s.longestCommonPrefix(vec);
  if (result.empty()){
    std::cout << "No Prefix Exists\n";
    return 0;
  }
  else{
  std::cout << "Prefix :: " << result;
  return 0;
  }
}

// Time complexity :: O(n * m)
// Space Complexity :: O(1)
