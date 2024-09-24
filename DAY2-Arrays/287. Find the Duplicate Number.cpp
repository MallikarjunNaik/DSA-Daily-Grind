class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();  // Use the correct input vector `nums`
        sort(nums.begin(), nums.end());  // Sort the vector

        // Iterate through the sorted array and find the duplicate
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return nums[i];  // Return the duplicate element
            }
        }
        
        return -1;  // Although problem guarantees a duplicate, return something if needed
    }
};

