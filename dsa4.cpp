#include <iostream>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        
        if (s.length() != t.length())
            return false;
        
        int freq[26] = {0};

        for (char ch : s) freq[ch - 'a']++;
        for (char ch : t) freq[ch - 'a']--;

        for (int x : freq){
            if (x != 0) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    std::string str1,str2;
    std::cout << "Anagram Checker\n";
    std::cout << "===============\n";
    std::cout << "Enter a two words to check if its an Anagram . . .\n";
    std::cout << "Enter Word 1 :: ";
    if (!(std::cin >> str1)){
        std::cerr << "Error : Invalid Word 1 Input\n";
        return 67;
    }
    std::cout << "Enter Word 2 :: ";
    if (!(std::cin >> str2)){
        std::cerr << "Error : Invalid Word 2 Input\n";
        return 67;
    }
    
    if (s.isAnagram(str1,str2))
        std::cout << "The Words " << str1 << " and " << str2 << " are Anagrams\n";
    else
        std::cout << "The Words " << str1 << " and " << str2 << " are NOT Anagrams\n";

    return 0;
}

// Time Complexity :: O(n)
// Space Complexity :: O(1)
