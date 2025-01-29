#include<iostream>
#include<vector> // C++ STL standard Library

using namespace std;

//user defined data  types

class Chai {
    public:
        //data members (attributes)--> variables in the class
        string teaName; // name of tea
        int servings; // number of servings
        vector<string> ingrediants; // list of ingredians

        //Member functions -- function inside a class
        
        void displayChaiDetails(){
            cout<< "Tea Name : " << teaName<<endl;
            cout<< "Servings : " << servings<<endl;
            cout<< " Ingredians : ";
            for(string ingrediant : ingrediants){
                cout<< ingrediant <<" ";
            }
            cout<<endl;
        }
};
int main(){
    Chai chai1;

    chai1.teaName = "lemon tea"; 
    chai1.servings = 5;
    chai1.ingrediants = { "water","lemon","ginger"};
    chai1.displayChaiDetails();
    return 0;
}