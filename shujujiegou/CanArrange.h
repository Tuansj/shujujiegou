#pragma once
#include<vector>
using namespace std;
class  CanArrange {
public:
    bool canArrange(vector<int>& arr, int k) {
        //vector能复制吗，可以指定地方替换或者插入操作，删吗？
        //遍历，比较，拿掉
        //vector指针操作
        vector<int>::iterator p=arr.begin(),q=arr.begin();//遍历的时候a的值改变了吗。比如a++，再拿数组遍历呢？
        for(;q!=arr.end();){
        //一层遍历，先写最基本的遍历，第一个找到了，才有后面的事情。
        for (p=q+1; p < arr.end(); p++) {
            if ((*q + *p) % k == 0) {
                p=arr.erase(p);
                q=arr.erase(q);
                break;
            }
            else if (p == arr.end() - 1) {
                return false;
            }
        }}
        return true;
    }
};