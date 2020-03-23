//
//  MyVector.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/23.
//  Copyright © 2020 chentong. All rights reserved.
//

#include "MyVector.hpp"

//c++ 模板
template <typename T>
class MyVector{
private:
    T *data;
    int capacity;
    int size;
    
    //O(n)
    void resize(int newCapacity){
        assert(newCapacity >= size);
        T *newData = new T[newCapacity];
        for (int i=0; i<size; i++) {
            newData[i] = data[i];
        }
        delete [] data;
        data = newData;
        capacity = newCapacity;
    }
    
public:
    MyVector(){
        data = new T[10];
        capacity = 10; //数组中最大容纳元素个数
        size = 0;
    }
    
    ~MyVector(){
        delete[]  data;
    }
    
    //O(1)
    void push(T e){
        if (size == capacity) {
            resize(2*capacity);
        }
        assert(size<capacity);
        data[size++] = e;
    }
    
    //复杂度震荡 添加元素、删除元素，在临界值 会导致动荡
    //可以将元素个数为1/4时，为添加元素或删除元素留出预留空间
    T pop(){
        assert(size > 0);
        T ret = data[--size];
        if (size == capacity/4) {
            resize(capacity/2);
        }
        return ret;
    }
    
};
