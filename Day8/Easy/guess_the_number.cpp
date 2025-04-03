// The guess API is already defined for you.
// int guess(int num); // Returns -1 if num is too high, 1 if too low, 0 if correct.

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; // Avoid overflow
            int res = guess(mid);

            if (res == 0) return mid;  // Correct guess
            else if (res == -1) right = mid - 1; // Too high
            else left = mid + 1; // Too low
        }
        
        return -1; // Should never reach here
    }
};
