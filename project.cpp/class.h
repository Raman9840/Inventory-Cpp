#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class item{
    public:
        string itemName;
        int itemCode;
        void inputVal(){
            cout << "Enter Item Name: ";
            cin >> itemName;
            cout << "Enter Item Code: ";
            cin >> itemCode;
        }
};
class packedGroceries:public item{
    public:
    int quantity;
    int quantityPurchased;
    float price;
    void inputVal(){
        item::inputVal();
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Quantity Purchased: ";
        cin >> quantityPurchased;
        cout << "Enter Price: ";
        cin >> price;
    }
};
class freshGroceries: public item{
    public:
    int quantity;
    int quantityPurchased;
    float price;
    void inputVal(){
        item::inputVal();
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Quantity Purchased: ";
        cin >> quantityPurchased;
        cout << "Enter Price: ";
        cin >> price;
    }
};
