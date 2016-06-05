#include <iostream>
using namespace std;
class Date {
private:
    int mouth;
    int day;
    int year;

public:
    Date(){};
    Date(int mouth, int day, int year): mouth(mouth), day(day), year(year){
        std::cout << "constructor called" << std::endl;
    };
    ~Date(){
        std::cout << day << std::endl;
        cout << "deconstructor called!" << endl;
    };
    Date &next(){
        Date *mydate = new Date();
        mydate->mouth = mouth;
        mydate->day = day + 1;
        mydate->year = year;
        return *mydate;
    }
    friend ostream& operator<<(ostream &instream, const Date &date);
};
   ostream& operator<<(ostream &outstream, const Date &date){
    cout << date.mouth << "," << date.day << "," << date.year;
    return outstream;
    }

int main(int argc, char const *argv[])
{
    Date mydate(12, 1, 2012);
    std::cout << "oneline" << std::endl;
    Date  mydate2 = mydate.next();
    //delete mydate2;
    std::cout << mydate2 << std::endl;
    return 0;
}