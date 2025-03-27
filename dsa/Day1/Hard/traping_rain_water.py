class Solution:
    def trap(self, height: List[int]) -> int:
        left,right=0,len(height)-1

        left_max=height[left]
        right_max=height[right]
        water_trapped=0
        
        while(left<right):
            if height[left]<height[right]:
                left+=1
                left_max=max(left_max,height[left])
                water_trapped+=left_max-height[left]
            else:
                right-=1
                right_max=max(right_max,height[right])
                water_trapped+=right_max-height[right]
        return water_trapped