#include "functions.h"

void DataCreate() {
	ofstream _buffer("InfAboutPassangers.txt", ofstream :: app);
	if (!_buffer) {
		cout << "Ошибка создания файла!" << endl;
	}
	_buffer.close();
}

void DataReading(string file){
    ifstream reading(file);
    ofstream record("newReading_InfAboutPassangers.txt", ofstream::out);
    ifstream _reading("InfAboutPassangers.txt");

    if (reading) {
        if (record) {
            string _surname; string _name; string _patronymic;
            int _pasport; int flight; string seat; int baggage;
            string _departureDate;

            int n; int b;
            reading >> n; _reading >> b;
            record << b + n << endl;

            for (int i = 0; i < b; i++) {
                _reading >> _surname;
                record << _surname << endl;

                _reading >> _name;
                record << _name << endl;

                _reading >> _patronymic;
                record << _patronymic << endl;

                _reading >> _pasport;
                record << _pasport << endl;

                _reading >> flight;
                record << flight << endl;

                _reading >> seat;
                record << seat << endl;

                _reading >> baggage;
                record << baggage << endl;

                _reading >> _departureDate;
                record << _departureDate << endl;
            }

            for (int i = 0; i < n; i++) {
                reading >> _surname;
                record << _surname << endl;

                reading >> _name;
                record << _name << endl;

                reading >> _patronymic;
                record << _patronymic << endl;

                reading >> _pasport;
                record << _pasport << endl;

                reading >> flight;
                record << flight << endl;

                reading >> seat;
                record << seat << endl;

                reading >> baggage;
                record << baggage << endl;

                reading >> _departureDate;
                record << _departureDate << endl;
            }

            ifstream _reading1("newReading_InfAboutPassangers.txt");
            ofstream _record("InfAboutPassangers.txt", ofstream::out);

            if (_reading1) {
                int x;
                _reading1 >> x;
                _record << x << endl;

                for (int i = 0; i < x; i++) {
                    _reading1 >> _surname;
                    _record << _surname << endl;

                    _reading1 >> _name;
                    _record << _name << endl;

                    _reading1 >> _patronymic;
                    _record << _patronymic << endl;

                    _reading1 >> _pasport;
                    _record << _pasport << endl;

                    _reading1 >> flight;
                    _record << flight << endl;

                    _reading1 >> seat;
                    _record << seat << endl;

                    _reading1 >> baggage;
                    _record << baggage << endl;

                    _reading1 >> _departureDate;
                    _record << _departureDate << endl;
                }

            }
            
            _reading1.close(); _record.close();
            
            cout << "Данные успешно считаны!" << endl;
        }
        else {
            cout << "Ошибка записи!" << endl;
        }
    }
    else {
        cout << "Ошибка чтения файла!" << endl;
    }

    reading.close(); _reading.close();
    record.close(); 
    remove("newReading_InfAboutPassangers.txt");
}

void DataInput() {
    ifstream reading("InfAboutPassangers.txt");
    ofstream record("newInput_InfAboutPassangers.txt", ofstream :: out);
    
    
    if (record and reading) {
        string _surname; string _name; string _patronymic;
        int _pasport; int flight; string seat; int baggage;
        string _departureDate;

        int n; int b;
        cout << "Введите количество авиапассажиров, данные которых хотите внести: ";
        cin >> n;
        reading >> b;
        record << b + n << endl;

        for (int j = 0; j < b; j++) {
            reading >> _surname;
            record << _surname << endl;

            reading >> _name;
            record << _name << endl;

            reading >> _patronymic;
            record << _patronymic << endl;

            reading >> _pasport;
            record << _pasport << endl;

            reading >> flight;
            record << flight << endl;

            reading >> seat;
            record << seat << endl;

            reading >> baggage;
            record << baggage << endl;

            reading >> _departureDate;
            record << _departureDate << endl;
        }

        for (int i = 0; i < n; i++) {
            cout << "Введите фамилию: ";
            cin >> _surname;
            record << _surname << endl;

            cout << "Введите имя: ";
            cin >> _name;
            record << _name << endl;

            cout << "Введите отчество: ";
            cin >> _patronymic;
            record << _patronymic << endl;

            cout << "Введите номер и серию паспорта: ";
            cin >> _pasport;
            record << _pasport << endl;

            cout << "Введите номер рейса: ";
            cin >> flight;
            record << flight << endl;

            cout << "Введите номер места в самолете(буква А..Е и номер 1..30): ";
            cin >> seat;
            record << seat << endl;

            cout << "Введите вес багажа(0, если багажа нет): ";
            cin >> baggage;
            record << baggage << endl;

            cout << "Дату вылета(в формате день.месяц.год): ";
            cin >> _departureDate;
            record << _departureDate << endl;
            
            cout << "______________________________________________________" << endl;
        }

        
    }
    else {
        cout << "Ошибка записи в файл!" << endl;
    }

    ifstream _reading("newInput_InfAboutPassangers.txt");
    ofstream _record("InfAboutPassangers.txt", ofstream::out);

    if (_record and _reading) {
        string _surname; string _name; string _patronymic;
        int _pasport; int flight; string seat; int baggage;
        string _departureDate;

        int n;
        _reading >> n;
        _record << n << endl;

        for (int j = 0; j < n; j++) {
            _reading >> _surname;
            _record << _surname << endl;

            _reading >> _name;
            _record << _name << endl;

            _reading >> _patronymic;
            _record << _patronymic << endl;

            _reading >> _pasport;
            _record << _pasport << endl;

            _reading >> flight;
            _record << flight << endl;

            _reading >> seat;
            _record << seat << endl;

            _reading >> baggage;
            _record << baggage << endl;

            _reading >> _departureDate;
            _record << _departureDate << endl;
        }
    }
    else {
        cout << "Ошибка открытия файла!" << endl;
    }

    record.close(); reading.close();
    _record.close(); _reading.close();
    remove("newInput_InfAboutPassangers.txt");
}

void DataOutput() {
    ifstream reading("InfAboutPassangers.txt");

    if (reading) {
        string _surname; string _name; string _patronymic;
        int _pasport; int flight; string seat; int baggage;
        string _departureDate;

        int n; int x;
        reading >> x;

        cout << "Введите количество авиапассажиров, о которых хотите узнать информацию(всего пассажиров " << x << "): ";
        cin >> n;
        cout << endl;

        for (int i = 0; i < n and i < x; i++) {
            cout << "Данные об авиапассажире №" << i + 1 << endl;
            reading >> _surname;
            cout << "Фамилия: " << _surname << endl;

            reading >> _name;
            cout << "Имя: " << _name << endl;

            reading >> _patronymic;
            cout << "Отчество: " << _patronymic << endl;

            reading >> _pasport;
            cout << "Серия и номер паспорта: " << _pasport << endl;

            reading >> flight;
            cout << "Номер рейса: " << flight << endl;

            reading >> seat;
            cout << "Номер места в самолете: " << seat << endl;

            reading >> baggage;
            if (baggage == 0) cout << "Багаж отсутствует." << endl;
            else cout << "Вес багажа(в кг): " << baggage << endl;
            
            reading >> _departureDate;
            cout << "Дата вылета: " << _departureDate << endl;

            cout << "______________________________________________________" << endl;
        }

        if (n > x) {
            cout << endl << "Всего пользователей " << x << ", не балуйтесь вводя бОльшее количество!";
        }
        
    }
    else {
        cout << "Ошибка чтения данных!" << endl;
    }

    reading.close();
}

void DataChange() {
    ifstream reading("InfAboutPassangers.txt");
    ofstream record("newChange_InfAboutPassangers.txt", ofstream::out);

    if (reading) {
        string _surname; string _name; string _patronymic;
        int _pasport; int flight; string seat; int baggage; 
        string _departureDate;

        int n; int _n;
        reading >> n;
        record << n << endl;
        cout << "Выберите авиапассажира, данные которого хотите изменить(от 1 до " << n << "): ";
        cin >> _n;

        if (_n > 0 and _n <= n) {
            for (int i = 0; i < n; i++) {
                if (i != _n - 1) {
                    reading >> _surname;
                    record << _surname << endl;

                    reading >> _name;
                    record << _name << endl;

                    reading >> _patronymic;
                    record << _patronymic << endl;

                    reading >> _pasport;
                    record << _pasport << endl;

                    reading >> flight;
                    record << flight << endl;

                    reading >> seat;
                    record << seat << endl;

                    reading >> baggage;
                    record << baggage << endl;

                    reading >> _departureDate;
                    record << _departureDate << endl;
                }
                else {
                    reading >> _surname;
                    cout << "Введите фамилию: ";
                    cin >> _surname;
                    record << _surname << endl;

                    reading >> _name;
                    cout << "Введите имя: ";
                    cin >> _name;
                    record << _name << endl;

                    reading >> _patronymic;
                    cout << "Введите отчество: ";
                    cin >> _patronymic;
                    record << _patronymic << endl;

                    reading >> _pasport;
                    cout << "Введите номер и серию паспорта: ";
                    cin >> _pasport;
                    record << _pasport << endl;

                    reading >> flight;
                    cout << "Введите номер рейса: ";
                    cin >> flight;
                    record << flight << endl;

                    reading >> seat;
                    cout << "Введите номер места в самолете(буква А..Е и номер 1..30): ";
                    cin >> seat;
                    record << seat << endl;

                    reading >> baggage;
                    cout << "Введите вес багажа(0, если багажа нет): ";
                    cin >> baggage;
                    record << baggage << endl;

                    reading >> _departureDate;
                    cout << "Введите дату вылета(в формате день.месяц.год): ";
                    cin >> _departureDate;
                    record << _departureDate << endl;
                }
            }

            ifstream _reading("newChange_InfAboutPassangers.txt");
            ofstream _record("InfAboutPassangers.txt", ofstream::out);

            if (_reading and _record) {
                string _surname; string _name; string _patronymic;
                int _pasport; int flight; string seat; int baggage;
                string _departureDate;

                int n;
                _reading >> n;
                _record << n << endl;
                for (int i = 0; i < n; i++) {
                    _reading >> _surname;
                    _record << _surname << endl;

                    _reading >> _name;
                    _record << _name << endl;

                    _reading >> _patronymic;
                    _record << _patronymic << endl;

                    _reading >> _pasport;
                    _record << _pasport << endl;

                    _reading >> flight;
                    _record << flight << endl;

                    _reading >> seat;
                    _record << seat << endl;

                    _reading >> baggage;
                    _record << baggage << endl;

                    _reading >> _departureDate;
                    _record << _departureDate << endl;
                }

            }
            else {
                cout << "Ошибка перезаписи в файл!" << endl;
            }
            _reading.close(); _record.close();
            cout << "Данные успешно изменены!" << endl;
        }
        else {
            cout << "Ошибка! Пользователя с таким номером не существует!" << endl;
        }
    }
    else {
        cout << "Ошибка чтения начального файла!" << endl;
    }
    
    reading.close(); record.close();
    remove("newChange_InfAboutPassangers.txt");
}

void DataDelete() {
    ifstream reading("InfAboutPassangers.txt");
    ofstream record("newDelete_InfAboutPassangers.txt", ofstream::out);

    if (record and reading) {
        string _surname; string _name; string _patronymic;
        string _pasport; string flight; string seat; string baggage;
        string _departureDate;

        int n; int _n;
        reading >> n;
        cout << "Выберите пассажира, данные которого хотите удалить(от 1 до " << n << "): ";
        cin >> _n;

        if (_n > 0 and _n <= n) {
            record << n - 1 << endl;
            for (int i = 0; i < n; i++) {
                if (i != _n - 1) {
                    reading >> _surname;
                    record << _surname << endl;

                    reading >> _name;
                    record << _name << endl;

                    reading >> _patronymic;
                    record << _patronymic << endl;

                    reading >> _pasport;
                    record << _pasport << endl;

                    reading >> flight;
                    record << flight << endl;

                    reading >> seat;
                    record << seat << endl;

                    reading >> baggage;
                    record << baggage << endl;

                    reading >> _departureDate;
                    record << _departureDate << endl;
                }
                else {
                    reading >> _surname;
                    _surname = "";
                    record << _surname << endl;

                    reading >> _name;
                    _name = "";
                    record << _name << endl;

                    reading >> _patronymic;
                    _patronymic = "";
                    record << _patronymic << endl;

                    reading >> _pasport;
                    _pasport = "";
                    record << _pasport << endl;

                    reading >> flight;
                    flight = "";
                    record << flight << endl;

                    reading >> seat;
                    seat = "";
                    record << seat << endl;

                    reading >> baggage;
                    baggage = "";
                    record << baggage << endl;

                    reading >> _departureDate;
                    _departureDate = "";
                    record << _departureDate << endl;
                }
            }

            ifstream _reading("newDelete_InfAboutPassangers.txt");
            ofstream _record("InfAboutPassangers.txt", ofstream::out);

            if (_reading and _record) {
                string _surname; string _name; string _patronymic;
                int _pasport; int flight; string seat; int baggage;
                string _departureDate;

                int n;
                _reading >> n;
                _record << n << endl;
                for (int i = 0; i < n; i++) {
                    _reading >> _surname;
                    _record << _surname << endl;

                    _reading >> _name;
                    _record << _name << endl;

                    _reading >> _patronymic;
                    _record << _patronymic << endl;

                    _reading >> _pasport;
                    _record << _pasport << endl;

                    _reading >> flight;
                    _record << flight << endl;

                    _reading >> seat;
                    _record << seat << endl;

                    _reading >> baggage;
                    _record << baggage << endl;

                    _reading >> _departureDate;
                    _record << _departureDate << endl;
                }

            }
            else {
                cout << "Ошибка перезаписи в файл!" << endl;
            }

            _record.close(); _reading.close();
            cout << "Данные успешно очищены!" << endl;
        }
        else {
            cout << "Ошибка удаления данных! Пользователя с таким номером не существует!"; 
        }
    }
    else {
        cout << "Ошибка чтения или записи файла!" << endl;
    }

    record.close(); reading.close();
    remove("newDelete_InfAboutPassangers.txt");
}

void DataSave() {
    ifstream reading("InfAboutPassangers.txt");
    ofstream record("save_InfAboutPassangers.txt");

    if (reading) {
        string _surname; string _name; string _patronymic;
        int _pasport; int flight; string seat; int baggage;
        string _departureDate;

        int n;
        reading >> n;
        record << n << endl;

        for (int i = 0; i < n; i++) {
            reading >> _surname;
            record << _surname << endl;

            reading >> _name;
            record << _name << endl;

            reading >> _patronymic;
            record << _patronymic << endl;

            reading >> _pasport;
            record << _pasport << endl;

            reading >> flight;
            record << flight << endl;

            reading >> seat;
            record << seat << endl;

            reading >> baggage;
            record << baggage << endl;

            reading >> _departureDate;
            record << _departureDate << endl;
        }
        cout << "Данные сохранены успешно!" << endl;
    }
    else {
        cout << "Ошибка чтения начального файла!" << endl;
    }

    reading.close(); record.close();
}
