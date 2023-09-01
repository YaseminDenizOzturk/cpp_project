#include <iostream>
using namespace std;

struct Categories
{
    string name;
    int productQuantity_x;
};

struct Departments
{
    string name;
    bool open_for_service;
    int productQuantity;
    Categories categoryProperties;
};

void reduceStock(Departments *department, int salesQuantity)
{
    department->categoryProperties.productQuantity_x -= salesQuantity;
    department->productQuantity -= salesQuantity;
}

int main()
{
    Departments d1 = {"Cleaning Aisle", true, 2500, {"glass cleaner", 125}};
    cout << d1.name << " " << d1.open_for_service << " " << d1.productQuantity << " " << d1.categoryProperties.name << " " << d1.categoryProperties.productQuantity_x << endl;
    reduceStock(&d1, 45);
    cout << d1.name << " " << d1.open_for_service << " " << d1.productQuantity << " " << d1.categoryProperties.name << " " << d1.categoryProperties.productQuantity_x << endl;

    return 0;
}
