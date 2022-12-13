#include <iostream>
#include <cstdlib> // для exit()
#include <windows.h>
#include <conio.h>


using namespace std;

// Вывести меню
int prompt_menu_item()
{
    setlocale(LC_ALL, "Russian"); //русские символы))
    // Чё то выбираем
    int variant;
    cout << "Выберите что нибудь\n" << endl;
    cout << "1. Тест обработки нажатий\n"
        << "2. Звук\n"
        << "3. Выход\n" << endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}

int main(int argc, char* argv[])
{
    int variant = prompt_menu_item();

    switch (variant) {
    case 1:
        int main();
        {
            while (true)
            {

                if (_kbhit()) // слушатель нажатия
                {

                    switch (_getch()) // ждёт нажатия
                    {
                    case 72: //вверх
                        cout << "Вверх" << endl;
                        break;
                    case 80: //вниз
                        cout << "Вниз" << endl;
                        break;
                    case 75: //влево 
                        cout << "Влево" << endl;
                        break;
                    case 77: //вправо
                        cout << "Вправо" << endl;
                        break;
                    }
                }
            }
        }
        break;

    

    case 3:
        cout << "..." << endl;
        exit(EXIT_SUCCESS);
        break;
    default:
        cerr << "Something went wrong~!" << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}
