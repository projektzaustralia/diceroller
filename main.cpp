#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int diceroller(void);

int main()
{
	char ans=0;
	int ret=0;
	while(1)
	{
		ret = diceroller();
		cout << "Would you like to go again ? (Y/N): \n";
		cin >> ans;
        cout << ans << endl;
        if (ans == 'Y' || ans== 'y')
            continue;
        else
            break;
    }

	return ret;
}
int diceroller(void)
{
	cout << "Welcome to David\'s Dice Roller!\n\n";
    cout << "Which die would you like to roll?\n";
    cout << "1 - D4\n";
    cout << "2 - D6\n";
    cout << "3 - D8\n";
    cout << "4 - D10\n";
    cout << "5 - D12\n";
    cout << "6 - D20\n";


    int a = 0;

    while (a == 0)
    {
        int die = 0;
        cout << "Select your die: ";
        cin >> die;
        switch(die)
        {

        case 1:
            cout << "You have picked a D4\n";
            a = 4;
            break;
        case 2:
            cout << "You have picked a D6\n";
            a = 6;
            break;
        case 3:
            cout << "You have picked a D8\n";
            a = 8;
            break;
        case 4:
            cout << "You have picked a D10\n";
            a = 10;
            break;
        case 5:
            cout << "You have picked a D12\n";
            a = 12;
            break;
        case 6:
            cout << "You have picked a D20\n";
            a = 20;
            break;
        default:
            cout << "ERROR\n";
        }
    }
    int roll = 0;
    char ans = 0;
    while(roll == 0)
    {
        cout << "Would you like to roll the die? (Y/N) \n";
        cin >> ans;
        if (ans == 'Y' || ans== 'y')
            roll = 1;
        else if (ans == 'N' || ans == 'n')
            roll = 2;
        else
            cout << "Invalid answer, must be Y or N.\n";
    }

    if(roll == 1)
    {
        srand(time(NULL));
		int n = ((int)rand() % a) + 1;
		cout << "You rolled a " << n << endl;
	}
	else
	{
		return 0;
	}
	return 0;
}
