#include <iostream>

using namespace std;

int main()
{
    string customer_Name;
	int customerId;
	int quantity;
	int item;
	float vat;
	int phone_price=700;
	int table_price=200;
	int printer_price=1200;
	float total_amount;
	float payment;
    float balance;
    float insufficient;

    cout << ".........Welcome To Khemic Shop...........\n";

	//products available
	cout << "Products Available " <<endl;
	cout << "Printer = 1200 cedis\n";
	cout << "Table = 200 cedis\n";
	cout << "Phone =  700 cedis\n";
	cout << "" <<endl;

	//client details
	cout << "Client details\n";
	cout << "What is your name please?\n";
	cin >> customer_Name;
	cout << "" << endl;
	cout << "Please key in your unique Id\n";
	cin >> customerId;
	cout << "" << endl;
	cout << "How many do you want to purchase\n";
	cin >> quantity;
	cout << "How much is your money\n";
	cin >> payment;
	cout << "What do you want to buy please?\n";
	cin >> item;
	cout << "" << endl;
	cout << "" << endl;

	//processes
    if (item==phone_price){
        vat=0.12 * (quantity * phone_price);
        total_amount=(phone_price * quantity) + vat;
        cout << "Your total amount is" << total_amount << endl;
        }

    else if (item==printer_price){
        vat=0.12 * (quantity * printer_price);
        total_amount=(printer_price * quantity) + vat;
        cout << "Your total amount is" << total_amount << endl;
    }

    else {
        vat=0.12 * (quantity * table_price);
        total_amount=(table_price * quantity) + vat;
        cout << "Your total amount is " << total_amount << endl;

    }


    if (payment==total_amount){
        cout << "Thank You" << endl;
    }

    else if (payment>total_amount){
    balance = (payment - total_amount);
        cout << "Your balance is " << balance << endl;
    }

    else {
        insufficient = (total_amount - payment);
        cout << "Sorry! Your balance is insufficient." << endl;
        cout << "Your payment is -" << insufficient << endl;
        cout << "" << endl;
    }

    cout << "NAME: " << customer_Name;
     cout << "" << endl;
    cout << "CUSTOMER ID: " << customerId;
     cout << "" << endl;
    cout << "ITEM: " << item;
     cout << "" << endl;
    cout << "QUANTITY: " << quantity;
     cout << "" << endl;
    cout << "VAT: " << vat;
     cout << "" << endl;
    cout << "TOTAL_AMOUNT: " << total_amount;
     cout << "" << endl;
    cout << "PAYMENT_MADE: " << payment;
     cout << "" << endl;
    cout << "BALANCE: " << balance;
     cout << "" << endl;
    cout << insufficient << insufficient;
     cout << "" << endl;

    cout << "THANK YOU FOR TRANSACTING WITH US" << endl;




    return 0;
}
