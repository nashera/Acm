#include <iostream>
#include <iomanip>
#include "Eg1.1.5.cpp"
Employee::Employee(){
    name = EMPTY_STRING;
    grossPay = 0.00;

} // default constructor

void Employee::readInfo(){
    const string NAME_AND_PAY_PROMPT = "please enter a name and gross pay, to quit, enter";
    cout << NAME_AND_PAY_PROMPT << NAME_SENTINEL << " " << GROSS_PAY_SENTINEL;
    cin >> name >> grossPay;
} // readlnto;

bool Employee::isSentinel() const{
    if (name == NAME_SENTINEL && grossPay == GROSS_PAY_SENTINEL)
    {
        return true;
    }
    return false;
} // isSentinel

void Employee::printOut() const{
    std::cout << "$" << setiosflags(ios::fixed) << setprecision(2) << grossPay << std::endl;
} // printOut

void Employee::getCopyOf (const Employee &otherEmployee){
    name = otherEmployee.name;
    grossPay = otherEmployee.grossPay;
} // getCopyOf

bool Employee::makesMoreThan(const Employee &otherEmployee) const {
    return grossPay > otherEmployee.grossPay;
}// makeMoreThan
ostream &operator <<(ostream &outstream, const Employee &otherEmployee){
    cout << "name " << otherEmployee.name << endl;
    cout << "grossPay " << otherEmployee.grossPay << endl;
    return outstream;
}
const string Employee::EMPTY_STRING = "";
const string Employee::NAME_SENTINEL = "";
const double Employee::GROSS_PAY_SENTINEL = -1.0;

int main(int argc, char const *argv[])
{

    Employee employee("Anderson", 18);
    std::cout << employee << std::endl;
    return 0;
}
