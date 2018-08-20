#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> twoSun(vector<int>& nums,int target ){
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if(nums[i]+nums[j]==target){
                   vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
};
int main(){
    Solution s;
    vector<int> number;
    number.push_back(2);
    number.push_back(7);
    number.push_back(11);
    number.push_back(15);
    vector<int> result;
    result=s.twoSun(number,9);
    for (int i = 0; i <2 ; ++i) {
        cout << result[i] << endl;
    }
}