#include <iostream>
#include "functions.h"

int main() {
    for (int i = 0; i < 127; ++i) {
        std::cout << countBits(i)<<std::endl;
    }
    for (int i = 0; i < 35; ++i) {
        int number = 0;
        if (setBits(number,i)){
            std::cout<<i<<"--->"<<number<<std::endl;
        } else{
            std::cout<<"Impossible Operation"<<std::endl;
        }
    }
    int numElement=5;
    double array[5]={1.4,2,5,100,6};
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i]<< " ";
    }
    std::cout<<std::endl;
    std::cout<<"average is:"<<mean(array,numElement)<<std::endl;
    std::cout<<"standard devitation:"<<stddev(array,numElement)<<std::endl;
    std::cout<<"maxFirst:"<<max2(array,numElement).first<<std::endl;
    std::cout<<"maxSecond:"<<max2(array,numElement).second<<std::endl;

    return 0;
}
