#include <iostream> 
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
    while (true)
    {

        if (_kbhit()) // ��������� �������
        {

            switch (_getch()) // ��� �������
            {
            case 72: //�����
                cout << "up" << endl;
                break;
            case 80: //����
                cout << "Down" << endl;
                break;
            case 75: //����� 
                cout << "left" << endl;
                break;
            case 77: //������
                cout << "Right" << endl;
                break;
            }
        }
    }
}