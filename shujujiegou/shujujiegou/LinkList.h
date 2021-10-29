#pragma once
using namespace std;
#include"iostream"
#define ElemType int
#define OK 1

class LinkList {
public: 
	ElemType i;
	//类中类似结构体一样可以进行类名的指针自身的定义。解释器解释是先有名字再然后拨开里面的东西。说明其实已经建立好。可能只是一个表头空间最后再去做分配。
	LinkList* ptr;
	
};