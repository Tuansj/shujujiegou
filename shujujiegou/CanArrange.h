#pragma once
#include<vector>
using namespace std;
class  CanArrange {
public:
    bool canArrange(vector<int>& arr, int k) {
        //vector�ܸ����𣬿���ָ���ط��滻���߲��������ɾ��
        //�������Ƚϣ��õ�
        //vectorָ�����
        vector<int>::iterator p=arr.begin(),q=arr.begin();//������ʱ��a��ֵ�ı����𡣱���a++��������������أ�
        for(;q!=arr.end();){
        //һ���������д������ı�������һ���ҵ��ˣ����к�������顣
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