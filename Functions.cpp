#include <iostream>
#include "Header.h"
using namespace std;

// Implementare pentru operator ++ (Prefix)
Date& operator++(Date &date) {
    date.ziua++;
    date.adjustDate();
    return date;
}

// Implementare pentru operator ++ (Postfix)
Date operator++(Date &date, int) {
    Date temp = date;
    ++date;
    return temp;
}

// Implementare pentru operator -- (Prefix)
Date& operator--(Date &date) {
    date.ziua--;
    date.adjustDate();
    return date;
}

// Implementare pentru operator -- (Postfix)
Date operator--(Date &date, int) {
    Date temp = date;
    --date;
    return temp;
}
