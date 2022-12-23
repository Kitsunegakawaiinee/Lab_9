#include <iostream>

using namespace std;

int main()
{
    string character;
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100)
        {
            character = "Chopper";
        }
        else
        {
            if(height < 180)
            {
                character = "Usopp";
            }
            else 
            {
                cout << "Enter your bounty: ";
                cin >> bounty;

                character = (bounty > 1100000000)? "Zoro": "Sanji";
            }
        }
    }
    else
    {
        if(age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;

            character = (bounty > 500000000)? "Jinbe": "Franky";
        }
        else
        {
            character = "Brook";
        }
    }

    cout << "Your character = " << character;
}
/*


"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
