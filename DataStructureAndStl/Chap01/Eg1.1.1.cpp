#include <iostream>
using namespace std;
class Date
{
private:
    int mouth;
    int day;
    int year;
public:
    Date(int mouth, int day, int year): mouth(mouth), day(day), year(year){};
    ~Date(){ };
    bool isValid(){
        if (mouth <= 12 && mouth >= 1 && year >= 1800 && year <= 2200 && day >= 1 && day <= 31){
            return true;
        }else {
            return false;
        }
    }

};

int main(int argc, char const *argv[])
{
    Date data(11,3, 2016);
    cout << data.isValid() << endl;
    return 0;
}