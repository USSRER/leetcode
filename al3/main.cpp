#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int leng = s.length();
        char *p = new char[leng];
        for (int l = 0; l <leng ; ++l) {
            p[l]=s[l];
        }
        int *a = new int[leng];
        int lastone = 0;
        int max=0;
        a[0] = 1;
        for (int i = 1; i < leng; ++i) {
            for (int j = i - 1; j >= lastone; --j) {
                if (p[i] == p[j]) {
                    a[i] = i - j;
                    lastone = j + 1;
                    break;
                } else if (j == lastone) {
                    a[i] = a[i - 1] + 1;
                }
            }
        }for (int k = 0; k <leng; ++k) {
            if(a[k]>max) max=a[k];
        }
        return max;

    }
};