#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//this is a simple food ordering system which uses switch cases

int main()
{
	int price, price2;
    int menu;
    int order;
    int change;
    int quantity, quantity2;
    int flavor;
    int another;



    asd:

    cout << "Welcome to ... snack" << endl;
    cout << "" << endl;
    cout << "Options" << endl;
    cout << "1 - Ice cream" << endl;
    cout << "2 - Juice" << endl;
    cin >> menu;

    switch (menu) {
    case 1:
        price = 8;
        cout << "You ordered an Ice cream" << endl;
        cout << "What flavor would you like?" << endl;
        cout << "1 - Chocolate" << endl;
        cout << "2 - Vanilla" << endl;
        cin >> flavor;
        if (flavor == 1) {
            cout << "You ordered Chocolate Icecream" << endl;
        } else if (flavor == 2) {
            cout << "You ordered Vanilla Icecream" << endl;
        } else {
            cout << "option does not exist" << endl;
        goto asd;
        }
        cout << "It costs  " << price << endl;
        cout << "How many would you like?" << endl;
        cin >> quantity;
        cout << "Do you want to order another?" << endl;
        cout << "0 - no" << endl;
        cout << "1 - yes" << endl;
        cin >> another;
        if (another == 0) {
                cout << "enter amount to pay" << endl;
                cin >> order;
                change = order - quantity * price;
                cout << "change is  " << change << endl;

        } else if (another == 1){
            goto asd;
        }

        break;
    case 2:
        price2 = 15;
        cout << "You ordered a juice" << endl;
        cout << "What flavor would you like?" << endl;
        cout << "1 - Orange" << endl;
        cout << "2 - Apple" << endl;
        cin >> flavor;
        if (flavor == 1) {
            cout << "You ordered Orange Juice" << endl;
        } else if (flavor == 2) {
            cout << "You ordered Apple Juice" << endl;
        } else {
            cout << "option does not exist"  << endl;
        goto asd;
        }
        cout << "It costs P " << price2 << endl;
        cout << "How many  would you like? " << endl;
        cin >> quantity2;
        cout << "enter amount to pay" << endl;
        cin >> order;

                cout << "Do you want to order another?" << endl;
        cout << "0 - no" << endl;
        cout << "1 - yes" << endl;
        cin >> another;
        if (another == 0) {
                cout << "enter amount to pay" << endl;
                cin >> order;
                change = order - quantity * price;
                cout << "change is  " << change << endl;
            break;
        } else if (another == 1){
            goto asd;
        }

        change = order - price2 * quantity2;

        cout << "change is  " << change << endl;

        break;


        break;
    default:
        cout << "option does not exist" << endl;
        goto asd;
        break;

    }
      return 0;
  }