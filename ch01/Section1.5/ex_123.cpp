#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Sales_item currItem, valItem;
    if (cin >> currItem)
    {
        int num = 1;
        while (cin >> valItem)
        {
            if (currItem.isbn() == valItem.isbn())
            {
                num += 1;
            }
            else
            {
                cout << currItem.isbn() << " occurs " << num << " times." << endl;
                currItem = valItem;
                num = 1;
            }
        }
        cout << currItem.isbn() << " occurs " << num << " times." << endl;
        return 0;
    }
    else
    {
        cout << "Errors in data." << endl;
        return -1;
    }
}