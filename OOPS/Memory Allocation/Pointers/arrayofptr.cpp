#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of the item is " << id << endl;
        cout << "The price of the item is " << price << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the number of products: ";
    cin >> size;

    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    int p;
    float q;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item " << i + 1 << ": ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    cout << "\nDisplaying Item Details:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Item no: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    delete[] ptr;
    return 0;
}
