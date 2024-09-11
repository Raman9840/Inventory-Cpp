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
        cout << "Enter Price: ";
        cin >> price;
    }

    void writeVal(){
        ofstream outFile("packedGroceries.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << "Item Name: " << itemName << endl;
            outFile << "Item Code: " << itemCode << endl;
            outFile << "Quantity: " << quantity << endl;
            outFile << "Price: " << price << endl;
            outFile << "--------------------------" << endl;
            outFile.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
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
        cout << "Enter Price: ";
        cin >> price;
    }
    void writeVal(){
        ofstream outFile("freshGroceries.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << "Item Name: " << itemName << endl;
            outFile << "Item Code: " << itemCode << endl;
            outFile << "Quantity: " << quantity << endl;
            outFile << "Price: " << price << endl;
            outFile << "--------------------------" << endl;
            outFile.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
    }
};
