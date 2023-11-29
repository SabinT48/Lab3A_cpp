#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int op, temp;
    Date date;
    
    while(1){
        cout << "---------------------\n";
        cout << "|0.  Iesire         |\n";
        cout << "|1.  Afisare        |\n";
        cout << "|2.  Adauga zile    |\n";
        cout << "|3.  Scade zile     |\n";
        cout << "|4.  Operatorul ++  |\n";
        cout << "|5.  Operatorul --  |\n";
        cout << "---------------------\n-->";
        cin >> op;
        
        switch(op){
            case 0:{
                cout << "\nSfarsit de program\n\n";
                exit (0);
            }
                break;
            case 1:{
                date.afisare();
            }
                break;
            case 2:{
                cout << "Cate zile doriti sa adaugati - ";
                cin >> temp;
                date = date + temp;
            }
                break;
            case 3:{
                cout << "Cate zile doriti sa scadeti - ";
                cin >> temp;
                date = date - temp;
            }
                break;
            case 4:{
                int l;
                cout << "\n\n--------------\n";
                cout << "|1.  Prefix  |\n";
                cout << "|2.  Postfix |\n";
                cout << "--------------\n->";
                cin >> l;
                if(l == 1)
                    ++date;
                else if(l == 2)
                    date++;
                else
                    cout << "Nu exista asa optiune\n\n";
            }
                break;
            case 5:{
                int l;
                cout << "\n\n--------------\n";
                cout << "|1.  Prefix  |\n";
                cout << "|2.  Postfix |\n";
                cout << "--------------\n->";
                cin >> l;
                if(l == 1)
                    --date;
                else if(l == 2)
                    date--;
                else
                    cout << "Nu exista asa optiune\n\n";
            }
                break;
            default:{
                cout << "Nu exista asa optiune " << op << endl << endl;
            }
                break;
        }
    }
}
