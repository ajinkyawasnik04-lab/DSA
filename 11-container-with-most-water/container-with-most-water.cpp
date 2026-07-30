class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int current = w * ht;
            
            maxwater = max(maxwater, current);

            // Move the pointer that points to the shorter line
            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }

        return maxwater;
    }
};