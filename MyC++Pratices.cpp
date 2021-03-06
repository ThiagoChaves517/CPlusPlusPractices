#include <iostream>
#include <Windows.h>
using std::cout; using std::cin; using std::endl; using std::string;

void tellTheTruth();

void introYourSelf(string salutation, string name, string knownAs);

void primeNumDetector();

void alligatorBanksATM();

template<typename T>
void LiteralSwap(T& a, T& b);

class Human {
private:
    string KnownAs;
    string Race;
    int Age;
    string Country;

protected:
    string Name;
public:
    Human(string name, string knownAs, int age) {
        Name = name;
        KnownAs = knownAs;
        Age = age;
    }
    
    void introYourSelf(string salutation = "Hello") {
        cout << salutation << "! " << endl;
        cout << "My name is " << Name << ", " << KnownAs << "." << endl;
    }
};

class Fisher : public Human {
public:    
    Fisher(string name, string knownAs, int age):Human(name, knownAs, age) {

    }

    void fish() {
        cout << Name << " threw a rod!\n";
        Sleep(1000);
        cout << '.' << endl;
        Sleep(1000);
        cout << '.' << endl;
        Sleep(1000);
        cout << '.' << endl << endl;
        Sleep(1000);

        cout << "But nothing landed." << endl;

    }
};




int main()
{
    Human human_1("Esdras", "The Voice of The Wild", 15);
    human_1.introYourSelf("Wassup");

    cout << endl;

    Fisher fisher_1("Jvnq", "The Fishing Master", 25);
    fisher_1.introYourSelf("Hey");
    fisher_1.fish();


    return 0;
}








void tellTheTruth() {
    if (1 + 1 == 2) {
        cout << "I?m gonna be a code master!\n";
    };
}

void introYourSelf(string salutation = "Hello", string name = "???", string knownAs = "???") {
    cout << salutation << "! " << endl;
    cout << "My name is " << name << ", " << knownAs << "." << endl;

    // Ex: "Hello! My name is Thiago, also know as the Master of Code."
    // salutation = "Hello"/ name = "Thiago"/ knownAs = "also known as the Code Master".
};

void primeNumDetector() {
    int num;

    cout << "Digit a number: ";
    cin >> num;

    bool isPrimeNum = true;


    for (int i = 2; i < num; i++) {
        if (num % i == 0)
        {
            isPrimeNum = false;
            break;
        }
        else
        {
            true;
        }
    }

    if (num == 1 || num == 0)
    {
        isPrimeNum = false;
    }

    if (isPrimeNum == true)
        cout << "This is a prime number!";
    else
        cout << "Sorry, but it is not a prime number.";


}

void alligatorBanksATM() {
    //I have created an ATM app that checks balance, deposits and withdraws money. It will also have a menu.

    double balance = 0;
    double deposit;
    double withdraw;
    int answer1;
    char answer2;
    bool Ans2 = false;

    do
    {
        cout << "Very welcome to Alligator Bank?s System!\n";
        cout << "- Please, choose one of the referred options:" << endl << endl;
        cout << "     | Deposit (1) | Withdraw (2) | See balance (3) | ";
        cin >> answer1;
        cout << endl;

        switch (answer1)
        {
        case 1:
            cout << "How much do you want to deposit? ";
            cin >> deposit;
            balance = deposit;
            cout << endl;

            break;

        case 2:
            cout << "How much do you want to withdraw? ";
            cin >> withdraw;
            if (withdraw > balance)
                cout << "Not enough money to withdraw." << endl;
            else
                balance = balance - withdraw;
            cout << endl;

            break;

        case 3:
            cout << "Your current balance is: $" << balance << '.' << endl;
            cout << endl;

            break;

        default:
            cout << "Invalid answer." << endl;
            cout << endl;

            break;
        }

        cout << "Want to go back to menu? Y/N ";
        cin >> answer2;
        cout << endl;
        
        switch (answer2)
        {
        case 'Y':
            Ans2 = true;

            break;

        case 'y':
            Ans2 = true;

            break;

        case 'N':

            break;

        case 'n':

            break;

        default:
            cout << "Invalid answer." << endl;
            cout << endl;
            Ans2 = true;

            cout << "Want to go back to menu? Y/N ";
            cin >> answer2;
            cout << endl;

            break;
        }

    } while (Ans2 == true);
}

template<typename T>
void LiteralSwap(T& a, T& b) {
    //The function will only make this out if the varibles of the parameters are declared as references(ex: int& a).
    int temp = a;
    a = b;
    b = temp;
}