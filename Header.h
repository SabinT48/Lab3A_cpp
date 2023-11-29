#include <iostream>
using namespace std;

class Date{
    int an, luna, ziua;
public:
    Date(){
        an = 2023;
        luna = 11;
        ziua = 14;
    }; // constructor implicit
    
    //afisarea
    void afisare(){
        cout << "\n" << ziua << "/" << luna << "/" << an << endl << endl;
    }
    
    // Operator +
    Date operator+(const int days){
        Date result = *this;
        result.ziua += days;
        result.adjustDate();
        return result;
    }
    
    //Operator -
    Date operator-(const int days){
        Date result = *this;
        result.ziua -= days;
        result.adjustDate();
        return result;
    }
    
    // Operator ++ (Prefix)
    friend Date& operator++(Date &date);

    // Operator ++ (Postfix)
    friend Date operator++(Date &date, int);

    // Operator -- (Prefix)
    friend Date& operator--(Date &date);

    // Operator -- (Postfix)
    friend Date operator--(Date &date, int);
    
    
    // Funcție pentru ajustarea datei în cazul depășirii limitelor lunii sau anului
    void adjustDate() {
        if (ziua <= 0) {
            luna--;
            if (luna == 0) {
                luna = 12;
                an--;
            }
            ziua += daysInMonth(luna, an);
        } else if (ziua > daysInMonth(luna, an)) {
            ziua -= daysInMonth(luna, an);
            luna++;
            if (luna > 12) {
                luna = 1;
                an++;
            }
        }
    }

    // Funcție pentru a determina numărul de zile într-o lună
    int daysInMonth(int m, int y) const {
        switch (m) {
            case 2: // februarie
                return (isLeapYear(y) ? 29 : 28);
            case 4: case 6: case 9: case 11: // aprilie, iunie, septembrie, noiembrie
                return 30;
            default: // celelalte luni
                return 31;
        }
    }

    // Funcție pentru a verifica dacă un an este bisect
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
};
