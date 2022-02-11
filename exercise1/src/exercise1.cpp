#include "exercise1.hpp"

//Print "Hello World" to the default system output
void task1() {    
    //TODO: Implement task1
    cout << "Hello World" << "\n";
}
//Ask the user to enter their first name and print "Hello USERNAME"
void task2() {
    //TODO: Implement task2
    cout << "Enter your first name\n";
    string name;
    cin >> name;
    cout << "Hello " << name << "\n";
}
//Ask a user to enter their full name and print the initials (ie. John Doe should yield JD)
void task3() {
    //TODO: Implement task3
    cout << "Enter your full name" << endl;
    string fname, lname;
    cin >> fname >> lname;
    cout << "Your initials are " << fname[0] << lname[0] << endl;
}
//Ask a user to enter their age and print "Minor" (if age is less than 21) or "Major" (if age is 21+)
void task4() {
    //TODO: Implement task4
    cout << "Enter your age\n";
    int age;
    cin >> age;
    if (age < 21)
        cout << "Minor\n";
    else
        cout << "Major\n";
}
//Generate a random number, print it, and print whether it's odd or even
void task5() {
    //TODO: Implement task5
    int rn = rand();
    if (rn % 2 == 0)
        cout << rn << " is even\n";
    else
        cout << rn << " is odd\n";
}
//Print all numbers between 1 and 20 (inclusive).
void task6() {
    //TODO: Implement task6
    int n = 1;
    while (n <= 20)
    {
        cout << n << " ";
        n++;
    }
    cout << endl;
}
//Calculate and print sum of all numbers between 1 and 100 (inclusive).
void task7() {
    //TODO: Implement task7
    int sum = 0;
    for (int n = 1; n <= 100; n++) 
    {
        sum += n;
    }
    cout << "Sum of all numbers between 1 and 100 is " << sum << endl;
}
//Calculate and print sum of all multiples of 253 between 1 and 2018 (inclusive).
void task8() {
    //TODO: Implement task8
    int sum = 0;
    int i = 253;
    int n = 1;
    for (int mul = 253; mul <= 2018; mul = n * i) 
    {
        sum += mul;
        n++;
    }
    cout << "Sum of all multiples of 253 between 1 and 2018 is " << sum << endl;
}
//Calculate and print product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task9() {
    //TODO: Implement task9
    long int prod = 1;
    for (int n = 1; n <= 20; n++) 
    {
        prod *= n;
    }
    cout << "Product of all numbers between 1 and 20 is " << prod << endl;
}
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "fuzz", multiples of 5 with "buzz", multiples of 3 and 5 with "zzz".
void task10() {
    //TODO: Implement task10
    for (int n = 1; n <= 100; n++)
    {
        if (n % 3 == 0 && n % 5 == 0)
            cout << setw(5) << "zzz";
        else if (n % 5 == 0)
            cout << setw(5) << "buzz";
        else if (n % 3 == 0)
            cout << setw(5) << "fuzz";
        else if (n % 3 != 0 && n % 5 != 0)
            cout << setw(5) << n;
        if (n % 10 == 0)
            cout << endl;
    }
}
