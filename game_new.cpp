#include <iostream>
#include"game_new.h"
using namespace std;

void move(int, int, int, int);
void show();

bool graphic;
tower x[3];

int main()
{
    int num_of_disks = -1;
    cout << "Enter the number of disks: ";
    while (num_of_disks <= 0) {
        cin >> num_of_disks;
        if (num_of_disks <= 0)
        {
            cout << "Please Enter Number Greater Than Zero: ";

        }
    }

    char response;
    char fill[] = " ABCDEFGHIJKLMNOP";

    cout << "Graphic? : ";
    cin >> response;
    graphic = (response == 'Y' || response == 'y');

    for (int i = num_of_disks; i > 0; i--)
        x[0].push(fill[i]);

    cout << "Initial state " << endl;
    show();

    move(num_of_disks, 1, 3, 2);

    cout << endl << "Final State " << endl;
    show();

    cout << "Movement: " << pow(2, num_of_disks) - 1 << endl;
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void move(int count, int from, int to, int temp)
{
    if (count == 0) return;
    move(count - 1, from, temp, to);
    cout << "Move from " << from << " to " << to << endl;
    x[to - 1].push(x[from - 1].pop());
    if (graphic) show();
    move(count - 1, temp, to, from);
}

void show()
{
    for (int i = 0; i < 3; i++)
        x[i].display(i);

    cout << "---------------------------------------" << endl;
    cout << " \n"<< endl;
}
