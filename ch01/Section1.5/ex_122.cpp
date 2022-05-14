#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(){
    Sales_item total;
    if (cin >> total)
    {
        Sales_item item;
        while (cin >> item)
        {
            if (total.isbn() == item.isbn())
            {
                total += item;
            }
            else
            {
                cout << total << endl;
                total = item;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
}