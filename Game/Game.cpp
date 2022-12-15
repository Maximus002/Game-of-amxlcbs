#include <iostream>
#include <cstdlib> // для exit()
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
//переменные 
int x;
int y;



using namespace std;

// Вывести меню
int prompt_menu_item()
{
    setlocale(LC_ALL, "Russian"); //русские символы))
    // Чё то выбираем
    int variant;
    cout << "Выберите что нибудь\n" << endl;
    cout << "1. Тест обработки нажатий\n"
        << "2. Тест мува\n"
        << "3. Тест рандомайзера\n" << endl;
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

    case 2:
        int move(); {
            while (true) {
                if (_kbhit()) {
                    switch (_getch()) {
                    case 72: //вверх
                        y = y+1;
                        cout << y << " " << "<--- По оси y" << " " << x << " " << "<--- По оси x" << endl;
                        break;
                    case 80: //вниз
                        y = y-1;
                        cout << y << " " << "<--- По оси y" << " " << x << " " << "<--- По оси x" << endl;
                        break;
                    case 75: //влево 
                        x = x-1;
                        cout << y << " " << "<--- По оси y" << " " << x << " " << "<--- По оси x" << endl;
                        break;
                    case 77: //вправо
                        x = x+1;
                        cout << y << " " << "<--- По оси y" << " " << x << " " << "<--- По оси x" << endl;
                        break;
                    
                    }
                }
            }

        }
    case 3:
        int randomaizer(int argc, char* argv[]);
        {
            
            cout << "RAND_MAX = " << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
            cout << "Ваше случайное число = " << rand() % 100 << endl;
            cout << "Ваше случайное число = " << rand() % 20 << endl;
            cout << "Ваше случайное число = " << rand() % 12 << endl;
            cout << "Ваше случайное число = " << rand() % 8 << endl;
            cout << "Ваше случайное число = " << rand() % 6 << endl;// запуск генератора случайных чисел
            system("pause");
            return 0;
        }



    case 4:
        cout << "..." << endl;
        exit(EXIT_SUCCESS);
        break;
    default:
        cerr << "Something went wrong~!" << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}
