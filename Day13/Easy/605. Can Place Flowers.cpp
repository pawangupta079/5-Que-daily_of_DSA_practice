class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        i = 0
        length = len(flowerbed)
        
        while i < length:
            if flowerbed[i] == 0:
                # Check if this position can be used to plant a flower
                if (i == 0 or flowerbed[i - 1] == 0) and (i == length - 1 or flowerbed[i + 1] == 0):
                    # Plant the flower
                    flowerbed[i] = 1
                    count += 1
            i += 1
        
        return count >= n