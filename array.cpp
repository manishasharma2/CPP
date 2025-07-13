#include<iostream>
using namespace std;
int main(){
    // Array __ continiour memeory allocation
    int nums[] = {1,2,3,4,5};
    for( int num : nums){
        cout<< num << "  ";
    }
    int values[7] = { 20,25,21,65,78,98,90};
    
    return 0;
}