#include <vector>
using  namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> longone(nums1);
        vector<int> shortone(nums2);
        int longsize=nums1.size();
        int shortsize=nums2.size();
        if(longsize<shortsize){
            longone=nums2;
            shortone=nums1;
            longsize=nums2.size();
            shortsize=nums1.size();

        }
        int

    }

};