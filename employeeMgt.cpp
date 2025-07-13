#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>
#include<iterator>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp)
{ // using this syntax reference is passed just use it 
    cout<< "ID: "<< emp.id<<" , Name: "<<emp.name<<" , Salary: $"<< emp.salary<<endl;
}
int main()
{
    vector<Employee> employees = {
        {101,"Alice",100000},
        {102,"Bob",200000},
        {103,"Carry",120000},
        {104,"Mohit",140000},
        {105,"Kui",200000},
        {106,"chey",500000},
    };
    sort(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2 ){
        return e1.salary > e2.salary;
    }); // Lambda functions

    cout<< "Employees sorted by salaries --> /n";
    // for(const auto emp : employees){
    //     cout<< emp.name <<" "<<emp.salary<<endl;
    // }

    for_each(employees.begin(),employees.end(),displayEmployee); // For each loop

    //Vector of employees whose salaries are greater than 120000
    vector<Employee> highEarners;
    copy_if(employees.begin(),employees.end(),back_inserter(highEarners),[](const Employee& e){
        return e.salary > 120000;
    });
    //High Earners are here
    cout<< "High Earners in the organization"<<endl;
    for_each(highEarners.begin(),highEarners.end(),displayEmployee);

    double totalSalary = accumulate(employees.begin(),employees.end(),0.0,[](double sum,const Employee & e){
        return sum + e.salary;
    });
    cout<< "Average salary is : "<< totalSalary/ employees.size();

    // auto highestPaid= max_element(employees.begin(),employees.end(),[](const Employee&e1 , const Employee& e2){
    //     return e1.salary < e2.salary;
    // });
    // cout<<"highest paid employee is :"<<highestPaidEmployee;

    
    // cout<< highestPaid;
    return 0;
}