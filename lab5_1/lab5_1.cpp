#include "Header.h"

int main()
{
    Sensor* p = new Adapter(new FahrenheitSensor);
    Patient* pt = new Patient("Ivanov Ivan Ivanovich");
    cout << "Patient measures temperature" << endl;
    pt->PrintName();
    cout << "Tempurature patient = " << p->getTemperature() << endl;
    delete p;
}

