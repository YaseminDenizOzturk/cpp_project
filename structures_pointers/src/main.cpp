#include <iostream>
using namespace std;

struct Customer
{
    int phoneNmbr;
    string name;
};

void changeName(Customer *person_to_update, string newName)
{
    person_to_update->name = newName;
}

void createCustomer(Customer *newCustomer, int phoneNmbr, string name)
{
    newCustomer->phoneNmbr = phoneNmbr;
    newCustomer->name = name;
}

void printCustomerInformation(Customer customer)
{
    cout << "Customer Information: \nPhone Number: " << customer.phoneNmbr << " Customer Name: " << customer.name << endl;
}
void deleteCustomer(Customer *customer)
{
    customer->name = "-";
    customer->phoneNmbr = 0;
}

int main()
{

    Customer customer1;

    createCustomer(&customer1, 5551525, "Sally");
    printCustomerInformation(customer1);
    deleteCustomer(&customer1);
    printCustomerInformation(customer1);

    return 0;
}
