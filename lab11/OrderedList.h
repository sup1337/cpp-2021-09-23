//
// Created by Laszlo Hunor on 16.12.2021.
//

#ifndef LAB11_ORDEREDLIST_H
#define LAB11_ORDEREDLIST_H
#include <iostream>
using namespace std;

template <class T, class LessComp = less<T>, class Equal = equal_to<T>>
class OrderedList {
private:
    struct Node{
        T value;
        Node* next;
        Node(T value, Node *next) : value(value), next(next) {}
    };
    Node* first;
    int numElements;
public:
    OrderedList(){first = nullptr; numElements = 0;}
    ~OrderedList(){}
    void insert(T);
    void remove(T);
    int size(){}
    bool find(T)
    void listItems(ostream& os);

    template<class T, class LessComp, class Equal>
    void OrderedList<T, LessComp, Equal>::insert(T a) {
        if(first == nullptr){
            first =new Node(a, nullptr);
            numElements++;
            return;
        }
        else{
            Node* temp = first;
            Node* prev= first;
            if(!LessComp()(temp->value, a)){
                Node* uj = new Node(a, nullptr);
                temp = first;
                first = uj;
                uj->next = temp;
                numElements++;
                return;
            }
            while(LessComp()(temp->value, a) && temp->next != nullptr){
                prev = temp;
                temp = temp->next;
            }
            Node* uj = new Node(a, nullptr);
            if(temp->next == nullptr){
                temp->next = uj;
                numElements++;
                return;
            }
            uj->next = temp;
            prev->next = uj;
            numElements++;
            return;
        }
    }
};



};


#endif //LAB11_ORDEREDLIST_H
