//2. Find sum/difference/product/division of two/three numbers 
#include<iostream>
using namespace std;
int main()

{
    int choice, num1, num2, num3;
    
    cout << "Choose operation From the given menu:\n";
    cout << "1. Sum\n";
    cout << "2. Difference\n";
    cout << "3. Product\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) 
	{
        cout << "Invalid choice!";
        return 1;
    }

    if (choice == 1 || choice == 2) 
	{
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    } else 
	{
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    switch (choice) 
	{
        case 1:
            cout << "Sum: " << num1 + num2 + num3 << endl;
            break;
        case 2:
            cout << "Difference: " << num1 - num2 - num3 << endl;
            break;
        case 3:
            cout << "Product: " << num1 * num2 * num3 << endl;
            break;
        case 4:
            if (num2 == 0 || num3 == 0) 
			{
                cout << "Division by zero error!\n";
            } else 
			{
                cout << "Division: " << num1 / num2 / num3 << endl;
            }
            break;
    }

    return 0;
}

	

