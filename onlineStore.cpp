#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate; // this data structure is from ctime
};

int main(){
    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"Smart Watch","Electronics"},
        {103,"Coffe Maker","Kitchen"},
        {104,"Desk Lamp","Home"}
    };

    deque<string> recentCustomers = {"C001","C002","C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,2,"C002",time(0)});
    orderHistory.push_back({3,105,2,"C003",time(0)});

    set<string> categories;

    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int,int> prductStock = {
        {101,10},
        {105,18},
        {102,13},
        {111,20},
    };

    multimap<string,Order> customerOrders;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerId,order});
    }

    unordered_map<string,string> customerData = {
        {"C001","Alice"},
        {"C003","Carry"},
        {"C002","Bob"},
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto&product : products){
        uniqueProductIDs.insert(product.productId);
    }
    return 0;
}