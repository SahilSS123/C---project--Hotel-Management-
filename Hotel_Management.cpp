#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    int choice;
    int quantity;
    // Quantity of item
    int Qroom = 0, Qpasta = 0, Qnoodle = -0, Qburger = 0, Qchicken_roll = 0, Qhotdog = 0, Qsandwich = 0;
    // Sales of {item}
    int Sroom = 0, Spasta = 0, Snoodle = 0, Sburger = 0, Schicken_roll = 0, Shotdog = 0, Ssandwich = 0;
    // Total price of Item
    int Total_room = 0, Total_pasta = 0, Total_noodle = 0, Total_burger = 0, Total_chickenroll = 0, Total_hotdog = 0, Total_sandwitch = 0;

    cout << "\n\t\t\t"
         << "***Hotel RoyelOne***";

    cout << "\n\n\t"
         << "Quantity of the Items";
    cout << "\n Enter the Rooms Quantity";
    cin >> Qroom;
    cout << "\n Enter The Pastas Quantity";
    cin >> Qpasta;
    cout << "\n Enter the Noodles Quantity";
    cin >> Qnoodle;
    cout << "\nEnter the Burgers Quantity";
    cin >> Qburger;
    cout << "\n Enter the Chicken_ROlls Quantity";
    cin >> Qchicken_roll;
    cout << "\n Enter the HotDogs Quantity";
    cin >> Qhotdog;
    cout << "\n Enter the Sandwitchs Quantity";
    cin >> Qsandwich;

m:

    cout << "\n\n\t\t"
         << "--------Main Menu----------";
    cout << "\n\n"
         << "1.Rooms\n2.Pasta\n3.Noodles\n 4.Burger \n 5.Chicken Roll \n 6.Hot Dog \n 7.Sandwitch \n 8.Information regarding Todays Sales \n9.Total Amount of Your Order \n10.Exit from the Menu";
    cout << "\n\n Enter Your choice You Want...: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nEnter How Many Rooms You Want";
        cin >> quantity;
        if (Qroom - Sroom >= quantity)
        {
            Sroom = Sroom + quantity;
            Total_room = Total_room + quantity * 1500;
            cout << "\nYou Reserved the rooms :" << quantity;
            cout << "\n Total Amount of " << quantity << " Room is :" << Total_room;
        }
        else
            cout << "\n Rooms in the hotel are available is" << Qroom - Sroom;
        break;

    case 2:
        cout << "\n\n Enter the How Many Pasta You Want";
        cin >> quantity;
        if (Qpasta - Spasta >= quantity)
        {
            Spasta = Spasta + quantity;
            Total_pasta = Total_pasta + quantity * 110;
            cout << "\n Your Order is noted";
        }
        else
        {
            cout << "\nPasta Available are :" << Qpasta - Spasta;
        }
        break;

    case 3:
        cout << "\n Enter the How many Noodles You Want";
        cin >> quantity;

        if (Qnoodle - Snoodle >= quantity)
        {
            Snoodle = Snoodle + quantity;
            Total_noodle = Total_noodle + quantity * 80;

            cout << "\n Your Order is noted";
        }
        else
            cout << "\n Only " << Qnoodle - Snoodle << "Are Available";

        break;

    case 4:
        cout << "\n Enter the How many Burger You Want";
        cin >> quantity;

        if (Qburger - Sburger >= quantity)
        {
            Sburger = Sburger + quantity;
            Total_burger = Total_burger + quantity * 210;
            cout << "\n Your Order is noted";
        }
        else
            cout << "\n Only " << Qburger - Sburger << "Are Available";

        break;

    case 5:
        cout << "\n Enter the How many Chicken Roll You Want";
        cin >> quantity;

        if (Qchicken_roll - Schicken_roll >= quantity)
        {
            Schicken_roll = Schicken_roll + quantity;
            Total_chickenroll = Total_chickenroll + quantity * 110;
            cout << "\n Your Order is noted";
        }
        else
            cout << "\n Only " << Qchicken_roll - Schicken_roll << "Are Available";

        break;

    case 6:
        cout << "\n Enter the How many Hot Dog You Want";
        cin >> quantity;

        if (Qhotdog - Shotdog >= quantity)
        {
            Shotdog = Shotdog + quantity;
            Total_hotdog = Total_hotdog + quantity * 70;
            cout << "\n Your Order is noted";
        }
        else
            cout << "\n Only " << Qhotdog - Shotdog << "Are Available";

        break;

    case 7:
        cout << "\n Enter the How many Sandwitch You Want";
        cin >> quantity;

        if (Qsandwich - Ssandwich >= quantity)
        {
            Ssandwich = Ssandwich + quantity;
            Total_sandwitch = Total_sandwitch + quantity * 90;
            cout << "\n Your Order is noted";
        }
        else
            cout << "\n Only " << Qsandwich - Ssandwich << "Are Available";

        break;

    case 8:
        cout << "\n\n\t Details of Sales And Collection";
        cout << "\n\n Number of rooms we had :" << Qroom;
        cout << "\n Numbers of rooms we  give for Rent :" << Sroom;
        cout << "\n Remaining Room /Available Rooms :" << Qroom - Sroom;

        cout << "\n\n Total Quantity of Pasta :" << Qpasta;
        cout << "\n Number of pasta are sale :" << Spasta;
        cout << "\n Remaining pasta avaiable :" << Qpasta - Spasta;

        cout << "\n\n Total Quantity of Noodles :" << Qnoodle;
        cout << "\n Number of Noodles are sale :" << Snoodle;
        cout << "\n Remaining Noodles avaiable :" << Qnoodle - Snoodle;

        cout << "\n\n Total Quantity of Burger :" << Qburger;
        cout << "\n Number of Burger are sale :" << Sburger;
        cout << "\n Remaining Burger avaiable :" << Qburger - Sburger;

        cout << "\n\n Total Quantity of Chicken ROll :" << Qchicken_roll;
        cout << "\n Number of Chicken Roll are sale :" << Schicken_roll;
        cout << "\n Remaining Chicken Roll avaiable :" << Qchicken_roll - Schicken_roll;

        cout << "\n\n Total Quantity of HOT Dog :" << Qhotdog;
        cout << "\n Number of Hotdog are sale :" << Shotdog;
        cout << "\n Remaining Hotdog avaiable :" << Qhotdog - Shotdog;

        cout << "\n\n Total Quantity of Sandwitch :" << Qsandwich;
        cout << "\n Number of Sandwitch are sale :" << Ssandwich;
        cout << "\n Remaining Sandwitch avaiable :" << Qsandwich - Ssandwich;

        cout << "\n\n\t\t"
             << "Total Income of the day is :" << Total_room + Total_pasta + Total_burger + Total_chickenroll + Total_hotdog + Total_noodle + Total_sandwitch;

        break;

    case 9:
        cout << "\n \nTotal Amount of Your Order is : "
             << "\n1.Rooms :\t" << Total_room << "\n2.Pasta :\t" << Total_pasta << "\n3.Noodles :\t" << Total_noodle << "\n4.Burger :\t" << Total_burger << "\n5.Chicken Roll:\t" << Total_chickenroll << "\n6.HotDog:\t" << Total_hotdog << "\n7.Sandwitch :\t" << Total_sandwitch << "\n\n\t"
             << "Total=" << Total_room + Total_pasta + Total_noodle + Total_burger + Total_chickenroll + Total_hotdog + Total_sandwitch;
        break;

    case 10:
        exit(0);
        break;

    default:
        cout << "\n\n Enter choice frome the below....";
    }
    goto m;
    return 0;
}