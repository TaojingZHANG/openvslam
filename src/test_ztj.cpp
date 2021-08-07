//
// Created by ztj on 2021/6/6.
//

#include <map>
#include <vector>
#include <unordered_map>
#include <iostream>


using namespace std;



vector<int> inorderTraversal(){
    vector<int> ret;
    vector<int> ret2;
    ret.insert(ret.end(),ret2.begin(),ret2.end());

    return vector<int>();

};

int main(int argc, char** argv) {

    inorderTraversal();


    vector<int> nums(10, 0);
    nums.push_back(2);
    cout << nums.size() << endl;


    unordered_map<int,int> um1;
    um1[5];

    cout<<um1.size()<<endl;


    map<int,int> m1;
    m1[5];
    cout<<m1.size()<<endl;


    return 0;
}