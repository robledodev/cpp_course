/*#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int sourcePrefix;
    int sourceMobile;
    int destinationPrefix;
    int destinationMobile;
    float time;
    string clientType;

    ifstream mobileFile;
    mobileFile.open("resources/telefonia.txt");

    ofstream discountsFile("resources/discounts.txt");

    if(mobileFile.fail()) {
        cout << "No se puede abrir el fichero de telefonia" << endl;
        exit(EXIT_FAILURE);
    }

    if(!discountsFile) {
        cout << "No se puede crear el fichero de discounts" << endl;
        exit(EXIT_FAILURE);
    }

    float totalCost = 0;
    int clientsWithDiscount = 0;

    while (!mobileFile.eof()) {
        mobileFile >> sourcePrefix >> sourceMobile >> destinationPrefix >> destinationMobile >> time >> clientType;

        bool isNational = sourcePrefix == destinationPrefix;
        bool isLongCall = time > 180;

        float priceSecond = isNational ? 0.02f : 0.04f;
        float priceLongCall = isNational ? 0.015f : 0.035f;

        float callCost = isLongCall
                ? priceSecond * 180 + priceLongCall * (time - 180)
                : priceSecond * time;

        cout << "Coste de la llamada: " << callCost << "€" << endl;

        bool isPrime = clientType == "P";
        if (isPrime) {
            bool hasDiscount = sourceMobile % 3 == 0 && sourceMobile % 4 != 0;

            if(hasDiscount) {
                float discount = (float) (sourceMobile % 100) / 100;
                callCost -= (callCost * discount);
                clientsWithDiscount++;

                discountsFile << sourceMobile << " " << discount * 100 << "% " << callCost << "€" << endl;
            }
        }

        totalCost += callCost;
    }

    cout << "El importe total facturado es de " << totalCost << "€" << endl;
    cout << "El numero de clientes con descuento son " << clientsWithDiscount << endl;

    mobileFile.close();
    discountsFile.close();
    return 0;
}*/