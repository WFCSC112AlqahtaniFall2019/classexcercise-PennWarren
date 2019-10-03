//
// Created by Benjamin Raiford on 10/3/19.
//
#include "Faculty.h"
void Faculty::setSalary(double s){
    salary=s;
}
void Faculty::setSSN(double inputSSN) {
    SSN=inputSSN;
}
void Faculty::setName(string inputName) {
    name=move(inputName);
}
void Faculty::setID(string inputID) {
    id=move(inputID);
}
void Faculty::setAddress(string inputAddress) {
    address=move(inputAddress);
}
void Faculty::setDoB(string inputDoB) {
    DoB=move(inputDoB);
}
void Faculty::setDegree(string inputDegree) {
    degree=move(inputDegree);
}
