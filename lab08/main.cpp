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
bool comparepairs(const pair<string, int > &pair1,const pair<string, int > &pair2 ){
    return (pair1.second < pair2.second);
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
    cout << endl;
    int index=0;
    auto result4 = for_each(months.begin(),months.end(),
                            [&index](const string &i)
                            {if(i.size()==5)
                            {index++;}});
        cout<<"index: "<<index;
        vector<double>rNumbers{1,3.4,5.6,10};

    cout << endl;

    sort(rNumbers.begin(), rNumbers.end(), greater<double>());
    for (double index:rNumbers)
        cout << index << ' ';
        cout << endl;

    vector<pair<string, double>> pairs {
            {"January", 2}, {"February", 2}, {"March", 10}, {"April", 15}, {"May", 15}, {"June", 20},
            {"July", 20}, {"August",20}, {"September", 15}, {"October",10}, {"November", 5}, {"December", 3}
    };
    sort(pairs.begin(), pairs.end(), comparepairs);

    cout<<endl;

    for (int i=0; i<12; i++){
        cout << pairs[i].first << " "
             << pairs[i].second << endl;
    }

    vector<double>arNumbers{4,1,3.4,-5.6,10};
    sort(arNumbers.begin(), arNumbers.end(), [](double i, double j) { return abs(i) < abs(j); });
    for(double index:arNumbers)
        cout << index << ' ';
    cout << endl;

    unsigned seed = 0;
    vector<char> abc= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    shuffle(abc.begin(),abc.end(),default_random_engine(seed));
    cout << "furcsa abc: ";
    for (char index:abc)
        cout << " " << index;
    cout<< endl;

    auto result5=for_each(months.begin(), months.end(),
              [](string &c){ c[0]=tolower(c[0]); });
    for (string index:months)
        cout<<" "<<index;
    cout << endl;
    sort(months.begin(),months.end(),default_random_engine(seed));
    for(string index:months)
        cout<<" "<<index;
    cout << endl;





    return 0;
}


