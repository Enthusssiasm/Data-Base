#include "functions.h"

int _stateM;
void Menu() {
    cout << "Вас приветствует авиакомпания 'SevenAirlines'!" << endl;
    cout << "Выберите действие:" << endl;
    cout << "(0) Выход из программы" << endl;
    cout << "(1) Ввод данных новых авиапассажиров" << endl;
    cout << "(2) Вывод данных авиапассажиров" << endl;
    cout << "(3) Изменение данных авиапассажиров" << endl;
    cout << "(4) Удаление данных" << endl;
    cout << "(5) Сохранение данных" << endl;
    cout << endl;
    cout << "Ваш выбор: ";
    cin >> _stateM;
}

void Menu1() {
    cout << "Выберите действие:" << endl;
    cout << "(0) Выход из программы" << endl;
    cout << "(1) Ввод данных новых авиапассажиров" << endl;
    cout << "(2) Вывод данных авиапассажиров" << endl;
    cout << "(3) Изменение данных авиапассажиров" << endl;
    cout << "(4) Удаление данных" << endl;
    cout << "(5) Сохранение данных" << endl;
    cout << endl;
    cout << "Ваш выбор: ";
    cin >> _stateM;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    parol:
    int parol;
    cout << "Введите пароль для доступа к БД: ";
    cin >> parol;

    if (parol == 1234){
        system("cls");

        DataCreate();
        Menu();

        again:
        while (_stateM != 100) {
            if (_stateM == 0) {
                cout << "Спасибо за выбор нашей авиакомпании!" << endl << endl;
                exit(0);
            }

            if (_stateM == 1) {
                int _choice;
                cout << "Ввод данных вручную(1) или с файла(2)?: ";
                cin >> _choice;
                if (_choice == 1) {
                    DataInput();
                }
                else {
                    string file;
                    cout << "При считывании данных с файла важно, чтобы в первой строке было указано" << endl
                        << "количество авиапассажиров, данные которых Вы хотите внести." << endl;
                    cout << "Введите полный путь файла: ";
                    cin >> file;
                    DataReading(file);
                }
                break;
            }

            if (_stateM == 2) {
                DataOutput();
                break;
            }

            if (_stateM == 3) {
                DataChange();
                break;
            }

            if (_stateM == 4) {
                DataDelete();
                break;
            }

            if (_stateM == 5) {
                DataSave();
                break;
            }
        }
        
        int menu1;
        cout << endl << endl << "Хотите продолжить?(1 - да, 0 - нет): ";
        cin >> menu1;

        if (menu1 == 1) {
            system("cls");
            Menu1();
            goto again; // возвращает в начало цикла            
        }
        system("cls");

        cout << "Спасибо за выбор нашей авиакомпании!" << endl << endl;
    }

    else {
        cout << "Ошибка! Пароль введен неверно!" << endl << endl;
        goto parol; // возвращает в начало цикла, чтобы повторить ввести пароль
    }
    
}
