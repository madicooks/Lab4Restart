// Lab4Restart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform: " << endl;
    cout << "\t1. Factorial" << endl; 
    cout << "\t2. Arithmetic Series" << endl; 
    cout << "\t3. Geometric Series" << endl; 
    cout << "\t4. Exit" << endl; 
    cout << "Your Selection: "; 
}
void factorial() {
    // write factorial code here
}

void arithmetic() {
    // write arithmetic series code here
}

void geometric() {
    //write geometric series here
}



int main() {
    int choice; 
    char again; 

    do {
        printMenu();
        cin >> choice;

        // quit if user chooses to exit (or any invalid choice) 
        if (choice > 3 || choice < 1) {
            return 0;
        }

        else if (choice == 1) {
            factorial();
            int n; 
            long factorial = 1.0; 

            std::cout << "Factorial:";

            cout << "\nEnter a number: "; 
            cin >> n; 

            if (n < 0)
                cout << "Nice try, please enter a POSITIVE number...:"; 

            else {
                for (int i = 1; i <= n; ++i) {
                    factorial *= i;
                }
                {
                    if (n!= factorial)
                        cout << n << "*"; //number with * 
                    else
                        cout << n << "=" << factorial << endl; //change to show the math
                }
            } 

        }

        else if (choice == 2) {
            arithmetic();
            int n1, df, n2, i, ln; 
            int s1 = 0; 

            std::cout << "Arithmetic Series:";

            cout << "\nEnter a number to start at: "; 
            cin >> n1; //read first number

            cout << "Enter a number to add each time: "; 
            cin >> df; // read the difference

            cout << "Enter the number of elements in the series: "; 
            cin >> n2; //read the number of elements

            if (n2 < 1)
                cout << "Nice try, enter a POSITIVE number:"; // FIGURE OUT HOW TO LOOP



            //calculate
            s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2; 

            //calculate last number
            ln = n1 + (n2 - 1) * df; 

            //show each term
            for (i = n1; i <= ln; i = i + df)
            {
                if (i != ln)
                    cout << i << "+"; //display the terms with '+' 
                else
                    cout << i << "=" << s1 << endl; // display last term with '=' and the answer
            }


        }

        else if (choice == 3) {
            geometric();

            float g1, cr, i, n, j; 
            int ntrm, gpn; 
            float sum = 0; 

            std::cout << "Geometric Series:"; 

            cout << "\nEnter a number to start at:"; 
            cin >> g1; //read starting number

            cout << "Enter a number to multiply by each time:"; 
            cin >> cr; //read number to multiply by each time

            cout << "Enter the number of elements in the series:";
            cin >> ntrm; //read number of elements in the series

            if (ntrm < 1)
                cout << "Nice try, please enter a POSITIVE number: "; //FIGURE OUT HOW TO LOOP


            if (ntrm > 1) 
            //give the numbers in the series
             cout << g1 << "+"; //show starting number
             sum = g1; // set sum to the starting number 

            //show the series of numbers
             for (j = 1; j < ntrm; j++) {
                 gpn = g1 * pow(cr, j); //calculate each term 
                 sum = sum + gpn; //add
                 cout << gpn << "+";
             }

             if (ntrm > 1) 
            cout << "=" << sum << endl; // show answer
        }

        cout << "\nGo Again? [Y/N]";
        cin >> again;

    } while (again == 'y' || again == 'Y'); 


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
