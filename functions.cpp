#include "functions.h"

void DataCreate() {
	ofstream _buffer("InfAboutPassangers.txt", ofstream :: app);
	if (!_buffer) {
		cout << "������ �������� �����!" << endl;
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
            
            cout << "������ ������� �������!" << endl;
        }
        else {
            cout << "������ ������!" << endl;
        }
    }
    else {
        cout << "������ ������ �����!" << endl;
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
        cout << "������� ���������� ��������������, ������ ������� ������ ������: ";
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
            cout << "������� �������: ";
            cin >> _surname;
            record << _surname << endl;

            cout << "������� ���: ";
            cin >> _name;
            record << _name << endl;

            cout << "������� ��������: ";
            cin >> _patronymic;
            record << _patronymic << endl;

            cout << "������� ����� � ����� ��������: ";
            cin >> _pasport;
            record << _pasport << endl;

            cout << "������� ����� �����: ";
            cin >> flight;
            record << flight << endl;

            cout << "������� ����� ����� � ��������(����� �..� � ����� 1..30): ";
            cin >> seat;
            record << seat << endl;

            cout << "������� ��� ������(0, ���� ������ ���): ";
            cin >> baggage;
            record << baggage << endl;

            cout << "���� ������(� ������� ����.�����.���): ";
            cin >> _departureDate;
            record << _departureDate << endl;
            
            cout << "______________________________________________________" << endl;
        }

        
    }
    else {
        cout << "������ ������ � ����!" << endl;
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
        cout << "������ �������� �����!" << endl;
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

        cout << "������� ���������� ��������������, � ������� ������ ������ ����������(����� ���������� " << x << "): ";
        cin >> n;
        cout << endl;

        for (int i = 0; i < n and i < x; i++) {
            cout << "������ �� ������������� �" << i + 1 << endl;
            reading >> _surname;
            cout << "�������: " << _surname << endl;

            reading >> _name;
            cout << "���: " << _name << endl;

            reading >> _patronymic;
            cout << "��������: " << _patronymic << endl;

            reading >> _pasport;
            cout << "����� � ����� ��������: " << _pasport << endl;

            reading >> flight;
            cout << "����� �����: " << flight << endl;

            reading >> seat;
            cout << "����� ����� � ��������: " << seat << endl;

            reading >> baggage;
            if (baggage == 0) cout << "����� �����������." << endl;
            else cout << "��� ������(� ��): " << baggage << endl;
            
            reading >> _departureDate;
            cout << "���� ������: " << _departureDate << endl;

            cout << "______________________________________________________" << endl;
        }

        if (n > x) {
            cout << endl << "����� ������������� " << x << ", �� ��������� ����� ������� ����������!";
        }
        
    }
    else {
        cout << "������ ������ ������!" << endl;
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
        cout << "�������� �������������, ������ �������� ������ ��������(�� 1 �� " << n << "): ";
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
                    cout << "������� �������: ";
                    cin >> _surname;
                    record << _surname << endl;

                    reading >> _name;
                    cout << "������� ���: ";
                    cin >> _name;
                    record << _name << endl;

                    reading >> _patronymic;
                    cout << "������� ��������: ";
                    cin >> _patronymic;
                    record << _patronymic << endl;

                    reading >> _pasport;
                    cout << "������� ����� � ����� ��������: ";
                    cin >> _pasport;
                    record << _pasport << endl;

                    reading >> flight;
                    cout << "������� ����� �����: ";
                    cin >> flight;
                    record << flight << endl;

                    reading >> seat;
                    cout << "������� ����� ����� � ��������(����� �..� � ����� 1..30): ";
                    cin >> seat;
                    record << seat << endl;

                    reading >> baggage;
                    cout << "������� ��� ������(0, ���� ������ ���): ";
                    cin >> baggage;
                    record << baggage << endl;

                    reading >> _departureDate;
                    cout << "������� ���� ������(� ������� ����.�����.���): ";
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
                cout << "������ ���������� � ����!" << endl;
            }
            _reading.close(); _record.close();
            cout << "������ ������� ��������!" << endl;
        }
        else {
            cout << "������! ������������ � ����� ������� �� ����������!" << endl;
        }
    }
    else {
        cout << "������ ������ ���������� �����!" << endl;
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
        cout << "�������� ���������, ������ �������� ������ �������(�� 1 �� " << n << "): ";
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
                cout << "������ ���������� � ����!" << endl;
            }

            _record.close(); _reading.close();
            cout << "������ ������� �������!" << endl;
        }
        else {
            cout << "������ �������� ������! ������������ � ����� ������� �� ����������!"; 
        }
    }
    else {
        cout << "������ ������ ��� ������ �����!" << endl;
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
        cout << "������ ��������� �������!" << endl;
    }
    else {
        cout << "������ ������ ���������� �����!" << endl;
    }

    reading.close(); record.close();
}
