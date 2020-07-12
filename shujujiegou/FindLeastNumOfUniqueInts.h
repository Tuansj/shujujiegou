#pragma once
#include<vector>
using namespace std;
class  FindLeastNumOfUniqueInts {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        //分类相同的数进行统计。

        vector<int> nums;

        nums.push_back(0);

        vector<int>::iterator n = nums.begin();
        for (vector<int>::iterator p = arr.begin(); p != arr.end(); p++) {
            nums.push_back(0);
            if (p == arr.end())
                break;
            for (vector<int>::iterator q = p; q != arr.end(); q++) {
                if (*p == *q)
                {
                    arr.erase(q);
                    //++(*n);
                }
            }
            // n++;
        }
        //进行数值的统计，数组和数值
        int result = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            if (sum > k) {
                result = nums.size() - i;
            }
        }
        return result;
    }
};