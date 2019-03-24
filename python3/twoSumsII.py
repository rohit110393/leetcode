class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """
        https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
        The solution will be based on two pointers
        """
        
        left = 0
        right = len(nums) -1
        while right > left:
            if nums[left] + nums[right] == target:
                return [left +1, right+1]
            elif nums[left] + nums[right] > target:
                right-=1
            else:
                left +=1
                
        if(right<=left):
            return []
        else:
            return [left+1, right+1]
                
            
        
