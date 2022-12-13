#include <iostream> 
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
    while (true)
    {

        if (_kbhit()) // слушатель нажатия
        {

            switch (_getch()) // ждёт нажатия
            {
            case 72: //вверх
                cout << "up" << endl;
                break;
            case 80: //вниз
                cout << "Down" << endl;
                break;
            case 75: //влево 
                cout << "left" << endl;
                break;
            case 77: //вправо
                cout << "Right" << endl;
                break;
            }
        }
    }
}