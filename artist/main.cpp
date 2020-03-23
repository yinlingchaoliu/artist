//
//  main.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/23.
//  Copyright © 2020 chentong. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include "MyVector.cpp"

int main(int argc, const char * argv[]) {
    
    for (int i =10; i<=26; i++) {
        int n = pow(2,i);
        clock_t startTime = clock();
        MyVector<int> vec = MyVector<int>();//存放在堆上
        
        for (int i=0; i<n; i++) {
            vec.push(i);
        }
        
        for (int i=0; i<n; i++) {
            vec.pop();
        }
        
        clock_t endTime= clock();
        std::cout << 2*n << "\t opertions: \t ";
        std::cout << double(endTime - startTime)/CLOCKS_PER_SEC << " s\n" ;
    }

    return 0;
}
