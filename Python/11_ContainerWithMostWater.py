/* Container With Most Water 

Problem : Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Approach : Start with pointer left=0 and pointer right=length-1
		   The max water is limited by the pointer with smaller height
		   When moving a pointer, the width of the area decrease
  		   If we move the pointer with higher height, we will never get a
		   greater area, the max height will be at most the one of the pointer with smaller height.
   		   So we need to move the pointer with smaller height to have a chance to get higher height at the next step

*/

class Solution:
    def maxArea(self, height: List[int]) -> int:
        l,r = 0, len(height) - 1
        ans = 0
        while l < r:
          ans = max(ans, min(height[l], height[r]) * (r - l))
          
          if(height[l] < height[r]):
            l += 1
          else:
            r -= 1
        return ans
