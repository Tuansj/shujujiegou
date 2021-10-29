#pragma once
#include "stdafx.h"
class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        //先排序再遍历一遍。
        //排序算法

        vector<int>::iterator p = arr.begin(), q = arr.begin();
        int size=arr.size();
        for (int i=size-1; i>0; i--)
        {
            for (int j=0; j<i; j++)

            {
                if (p[j] > p[j+1])
                {
                    int x = p[j];
                    p[j] = p[j+1];
                    p[j+1] = x;
                }
            }
        }

        //遍历一遍
        for(p=arr.begin();p!=arr.end()-2;p++){
            if((*(p+2)-*(p+1))!=(*(p+1)-*p))
            return false;
        }
        return true;


    }
};

//怎么减少iterator定义的字母
//arr.end()-1是不是才是字母？ 答案是是的。这里所以要用arr.end()-2;

//断点小题目：
//https://leetcode-cn.com/problems/count-submatrices-with-all-ones/comments/