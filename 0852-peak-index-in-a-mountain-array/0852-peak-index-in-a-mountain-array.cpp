class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 0, end = A.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;
            if (A[mid] < A[mid + 1]) {
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }
        
        return st;
    }
};