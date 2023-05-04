#pragma once

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//�������
class Patient
{
private:
    string FIO; //���
public:
    Patient(string s) { FIO = s; };
    void PrintName() { cout << "Patient " << FIO; };

};

// ��� ������������ ����� �������������� ������� 
class FahrenheitSensor
{
public:
    // �������� ��������� ����������� � �������� ����������
    float getFahrenheitTemp() 
    {
        float t = 98.2;
        return t;
    }
};

// ����������� �����
class Sensor
{
public:
    virtual ~Sensor() {}
    virtual float getTemperature() = 0;
};

class Adapter : public Sensor
{
public:
    Adapter(FahrenheitSensor* p) : p_fsensor(p) {}
    ~Adapter() 
    {
        delete p_fsensor;
    }
    float getTemperature() 
    {
        return (p_fsensor->getFahrenheitTemp() - 32.0) * 5.0 / 9.0;
    }
private:
    FahrenheitSensor* p_fsensor;
};


