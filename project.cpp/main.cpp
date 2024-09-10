#include <iostream>
#include <fstream>
#include "class.h"
#include "error.h"
using namespace std;
int main()
{
    packedGroceries pg; // object of packedGroceries
    freshGroceries fg;  // object of freshGroceries
    int userChoice;
    cout << "Main Menu" << endl;
    cout << "1. List all Products" << endl;
    cout << "2. Add Packed Groceries" << endl;
    cout << "3. Add Fresh Groceries" << endl;
    cout << "Your Choice" << endl;
    cin >> userChoice;
    switch (userChoice)
    {
    case 1:
    {
        ifstream packedFile("packedGroceries.txt");
        if (packedFile.is_open())
        {
            cout << "Packed Groceries:" << endl;
            string line;
            while (getline(packedFile, line))
            {
                cout << line << endl;
            }
            packedFile.close();
        }
        else
        {
            cout << "Unable to open packed groceries file" << endl;
        }

        ifstream freshFile("freshGroceries.txt");
        if (freshFile.is_open())
        {
            cout << "Fresh Groceries:" << endl;
            string line;
            while (getline(freshFile, line))
            {
                cout << line << endl;
            }
            freshFile.close();
        }
        else
        {
            cout << "Unable to open fresh groceries file" << endl;
        }
        break;
    }
    case 2:
    {
        pg.inputVal(); // calls the inputVal function of packedGroceries
        ofstream outFile("inputval.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << "input to file"<< endl; 
            outFile.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
        break;
    }
    case 3:
    {
        fg.inputVal(); // calls the inputVal function of freshGroceries
        ofstream outFile("inputval.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << "Fresh Groceries input value" << endl; // Replace with actual value
            outFile.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
        break;
    }
    default:
        cout << "Invalid Choice" << endl;
    }
    return 0;
}
