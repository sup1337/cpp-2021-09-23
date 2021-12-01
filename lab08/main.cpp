//
// Created by Sup1 on 12/1/2021.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;


bool is_even(int n) {
    return (n % 2 == 0);
}
int main(){
    string find = "berry";
    vector<string> fruits {
            "melon", "strawberry", "raspberry","apple", "banana", "walnut", "lemon"
    };
    auto result1 = find_if(fruits.begin(), fruits.end(),
                           [&find](const string &e) {
                               return e.find(find) != string::npos;
                           });
    cout << ((result1 != fruits.end() ? *result1 : "no")) << endl;

    vector<int>numbers{
        2,4,6,8,10
    };

        auto result2 = all_of(numbers.begin(), numbers.end(), is_even );{
        if (result2 == true)
            cout << "all even numbers." << endl;
        else{cout<<"not all even";}
    }

   auto result3 = for_each(numbers.begin(), numbers.end(),[](int i) { cout<<i*2<<endl; });{
       cout<<result3;
   }

    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };









    return 0;
}