#pragma once // ������ �� �������� ����������� �����(��� ��������� ������)

#include <iostream> // ���������� �����-������
#include <fstream> // ���������� ��� ������ � �������
#include <Windows.h> // ���������� ��� ������������ � �������
#include <cstdio>

using namespace std;

void DataCreate(); // �������, ��������� ��������� ����, ��� ����� �������� ������
void DataReading(string file); // �������, ���������������� ������ � �����
void DataInput(); // �������, �������������� ���� ������ � ����������
void DataOutput(); // �������, �������������� ����� ������
void DataChange(); // �������, ���������� ��������� ������
void DataDelete(); // �������, ��������� ��������� ������
void DataSave(); // �������, ����������� ���������� ������
