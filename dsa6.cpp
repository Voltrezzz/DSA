#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int l = 0,r = numbers.size() - 1;
        while (l < r){
            int sum = numbers[l] + numbers[r];
            if (sum == target) return {l + 1,r + 1};
            else if (sum < target) l++;
            else r--;
        }
        return {};
    }
};

int main(){
    Solution s;
    int n,target,x;
    std::vector <int> v,result;
    std::cout << "Two sum 2\n=========\n";
    std::cout << "Enter the number of element in the array SORTED :: ";
    if (!(std::cin >> n)){
        std::cerr << "Error : Invalid Input of N\n";
        return 1;
    }
    for (int i = 0;i < n;i++){
        std::cout << "Enter element " << i + 1 << " :: ";
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "Enter the target :: ";
    if (!(std::cin >> target)){
        std::cerr << "Error : Invalid Input of target";
        return 1;
    }
    result = s.twoSum(v,target);
    if (result.empty()){
        std::cout << "There are no indices which combine to form the target\n";
    }
    std::cout << "The indices are :: " ;
    for (int i : result){
        std::cout << i << ' ';
    }
    return 0;
}

// Time complexity :: O(n)
// Space complexityr :: O(1)
