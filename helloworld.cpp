#include <iostream>

using namespace std;

int main (){
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(12);
    arr.push_back(1);

    for(int i : arr){
        cout<<i<<endl;
    }
    cout<<"Hello world "<<endl;

    return 0;
}