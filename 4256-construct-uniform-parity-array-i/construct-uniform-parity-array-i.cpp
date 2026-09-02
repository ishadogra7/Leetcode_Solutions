class Solution {
public:
bool uniformArray(vector<int>& nums1) {
int n = nums1.size();
vector<int> nums2(n);


    bool hasOdd = false;
    bool hasEven = false;
    int oddIndex = -1;

    for (int i = 0; i < n; i++) {
        if (nums1[i] % 2 == 0) {
            hasEven = true;
        } else {
            hasOdd = true;
            oddIndex = i;
        }
    }

    if (hasOdd && hasEven) {
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 != 0) {
                nums2[i] = nums1[i];
            } else {
                nums2[i] = nums1[i] - nums1[oddIndex];
            }
        }
    } else {
        nums2 = nums1;
    }

    for (int i = 1; i < n; i++) {
        if ((nums2[i] % 2 + 2) % 2 != (nums2[0] % 2 + 2) % 2) {
            return false;
        }
    }

    return true;
}


};
