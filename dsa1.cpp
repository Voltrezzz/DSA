  // DSA 1 : Two Sum
  // Aim : To obtain the indices of the element whose sum is target in a vector.

  #include <bits/stdc++.h> // G++ compiler based library 

  class DSA1{
  public:
    std::vector<int> twoSum(int target, std::vector<int> &nums){  
      std::unordered_map<int,int> indexHash;
      for (int i = 0;i < nums.size(); ++i){
        int complement = target - nums[i];
        if (indexHash.count(complement)){  // Checks if complement exists
          return {indexHash[complement], i}; // Returns the of current element and its complement
        }
        indexHash[nums[i]] = i; // Hashing the element as key and the index as value
      }
      return {}; // Fallback
    }
  };
  int main(){
    int target,elem,temp;
    std::vector <int> nums,result;

    DSA1 obj;  // OOP

    std::cout << "\nEnter the target value :: ";
    if (!(std::cin >> target)){
      std::cerr << "\nError : Invalid target value."; // std::cerr has no buffer hence used for error handling
      return 69; 
    }

    std::cout << "\nEnter the number of elements to insert in the vector :: ";
    if (!(std::cin >> elem) || elem <= 0){
      std::cerr << "\nError : Invalid element value.";
      return 69;
    }

    for (int i = 0; i < elem; ++i){
      std::cout << "\nEnter the #" << i + 1 << " element :: ";
      std::cin >> temp;
      nums.push_back(temp);
    }

    result = obj.twoSum(target, nums);  // Assigning the indices to a vector
    
    if (!result.empty()){
      std::cout << "\nThe indices of the element whose sum is target are :: ";
      for (auto i : result){
        std::cout << i << ' ';
      }
      std::cout << "\nThe elements are :: ";
      for (auto var : result){
        std::cout << nums[var] << ' ';
      }
      std::cout << std::endl;
    }
    else{
      std::cout << "\nNo elements found whose sum match the target.";
      return 0;
    }
       
    return 0;
  }

  // Time complexity  ==> O(n)
  // Space complexity ==> O(n)

  // Example
  // Key - Value
  // 2 - 0 (element, index)
  // 7 - 1 (element, index)
  /*
  Example:
    Input:
    Target: 9
    Elements: 2 7 11 15

  Output:
    Indices: 0 1
    Elements: 2 7
*/
