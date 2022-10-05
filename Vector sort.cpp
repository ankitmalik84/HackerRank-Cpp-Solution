#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int vectorsize;
    cin>>vectorsize;
    //Here we initialize the vector...
    vector<int>v;
    //Here we put the value in the vector that comes from user..
    for(int i=0;i<vectorsize;i++){
        int t{};
        cin>>t;
        v.push_back(t);
    }
    //Now we use STL template for sorting vector
    sort(v.begin(),v.end());
    for(int i=0;i<vectorsize;i++){
        cout<<v[i]<<" ";
    }
    
    //Code Infinity
     
    return 0;
}
