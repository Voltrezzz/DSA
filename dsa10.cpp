#include <iostream>
#include <vector>

class Solution{
public:
  std::vector<int> merge(std::vector<int>& a,std::vector<int>& b){
    std::vector <int> result;
    int m = a.size(), n = b.size(),i = 0,j = 0;
    while(i < m && j < n){
      if (a[i] < b[j]){
        result.push_back(a[i]);
        i++;
      }
      else{
        result.push_back(b[j]);
        j++;
      }
    }
    while(i < m){
      result.push_back(a[i]);
      i++;
    }
    while(j < n){
      result.push_back(b[j]);
      j++;
    }
    if (result.empty()){
      result = {0};
    }
    return result;
  }
  double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2){
    std::vector<int> result = merge(nums1, nums2);
    size_t size = result.size();
    if (size % 2 == 0){
      return (double)(result[size / 2] +result[(size / 2) - 1]) / 2;
    }
    else{
      return (double)result[size / 2];
    }
  }
};

int main(){
  Solution s;
  int m,n,value;
  std::vector <int> arr1,arr2;
  std::cout << "Enter Number of elements in 1st array :: ";
  if (!(std::cin >> n) || n < 1){
    std::cerr << "Error : invalid number input\n";
    return 1;
  }
  std::cout << "Enter Elements in SORTED Manner ... \n";
  for (int i = 0;i < n;i++){
    std::cout << "Enter Element #" << i + 1 << " :: ";
    std::cin >> value;
    arr1.push_back(value);
  }
  std::cout << "Enter Number of elements in 2nd array :: ";
  if (!(std::cin >> m) || m < 1){
    std::cerr << "Error : invalid number input\n";
    return 1;
  }
  std::cout << "Enter Elements in SORTED Manner ... \n";
  for (int i = 0;i < m;i++){
    std::cout << "Enter Element #" << i + 1 << " :: ";
    std::cin >> value;
    arr2.push_back(value);
  }
  std::cout << "The Median is :: " << s.findMedianSortedArrays(arr1,arr2) <<'\n';
  return 0;
}