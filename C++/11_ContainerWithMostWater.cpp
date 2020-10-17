/* Container With Most Water 

Problem : Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Approach : Take 2 pointers one at begin other at end. While pointer1 < pointer2 calculate the area currently. If pointer1 has less height pole than pointer2 then increase pointer1 else decrease pointer2. What this does that it greedly stays at line of high height and thus if that line would be having some area with some other line then that will be considered.

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ptr1 = 0, ptr2 = height.size() - 1, maxi = 0; // take ptr1 and ptr2
        while(ptr1 < ptr2) {
            maxi = max(maxi, min(height[ptr1], height[ptr2]) * (ptr2 - ptr1)); // calculate the present area
            if(height[ptr1] < height[ptr2]) ptr1++; // move ptr accordingly
            else ptr2--;
        }
        return maxi; // return result
    }
};
