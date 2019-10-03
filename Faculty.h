//
// Created by Benjamin Raiford on 10/3/19.
//
#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H
#include <string>
using namespace std;

class Faculty{
public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;

    Faculty(){
        name = "null";
        id = "null";
        address = "null";
        DoB = "null";
        degree = "null";

        salary = -1;
        SSN = -1;
    }

    Faculty(string n, string inputID, string add, string dob, string deg, double inputSalary, double inputSSN) {
        name = n;
        id = move(inputID);
        address = move(add);
        DoB = move(dob);
        degree = move(deg);
        salary = inputSalary;
        SSN = inputSSN;
    }

    //name
    string getName() {return name;}
    void setName(string inputName);

    //id
    string getID() {return id;}
    void setID(string inputID);

    //address
    string getAddress() {return address;}
    void setAddress(string inputAddress);

    //birth date
    string getDoB() {return DoB;}
    void setDoB(string inputDoB);

    //degree
    string getDegree() {return degree;}
    void setDegree(string inputDegree);

    //salary
    double getSalary() {return salary;}
    void setSalary(double s);

    //ssn
    double getSSN() {return SSN;}
    void setSSN(double inputSSN);

private:
    double salary;
    double SSN;
};

#endif //CLASSEXCERCISE_FACULTY_H
