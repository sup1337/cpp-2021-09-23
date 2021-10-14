//
// Created by Laszlo Hunor on 13.10.2021.
//

#include "Stack.h"

void Stack::push(int e) {
    elements.insertFirst(e);
}
int Stack::pop() {

}
bool Stack::isEmpty() const {
    return elements.empty();
}