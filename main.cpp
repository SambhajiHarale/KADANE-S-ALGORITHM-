#include <iostream>
#include <vector>
#include <climits>

int kadane(const std::vector<int>& nums) {
    int maxCurrent = nums[0];
    int maxGlobal = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        maxCurrent = std::max(nums[i], maxCurrent + nums[i]);
        maxGlobal = std::max(maxGlobal, maxCurrent);
    }

    return maxGlobal;
}

int main() {
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = kadane(arr);
    std::cout << "Maximum subarray sum is: " << maxSum << std::endl;
    return 0;
}