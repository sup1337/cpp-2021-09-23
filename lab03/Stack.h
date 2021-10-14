//
// Created by Laszlo Hunor on 13.10.2021.
//

#ifndef CPP_2021_STACK_H
#define CPP_2021_STACK_H
#include "List.h"


class Stack {
        List elements;

        public:
        void push(int e);
        int pop();
        bool isEmpty() const;
};



#endif //CPP_2021_STACK_H
