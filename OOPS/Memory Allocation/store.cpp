#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setprice(int a);
    void displayprice(void);
    int client(int n);
};

void Shop::setprice(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the item Id of your item no " << counter + 1 << ": ";
        cin >> itemId[counter];
        if (itemId[counter] == 0)
            break;
        cout << "Enter the item Price: ";
        cin >> itemPrice[counter];
        counter++;
    }
}

void Shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Product No " << i + 1
             << ": The price of item with Id "
             << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int Shop::client(int n)
{
    if (n > 0 && n <= counter)
    {
        return itemPrice[n - 1];
    }
    cout << "Item not found" << endl;
    return -1;
}

int main()
{
    int x;
    cout << "Enter the no of products: ";
    cin >> x;

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setprice(x);
    dukaan.displayprice();

    int itemsToBuy;
    cout << "How many different products do you want to buy? ";
    cin >> itemsToBuy;

    int total = 0;
    for (int i = 0; i < itemsToBuy; i++)
    {
        int productNo, qty;
        cout << "Enter product number: ";
        cin >> productNo;
        cout << "Enter quantity: ";
        cin >> qty;

        int price = dukaan.client(productNo);
        if (price != -1)
        {
            total += price * qty;
        }
    }

    cout << "Total amount: " << total << endl;
    return 0;
}
