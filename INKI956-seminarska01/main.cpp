#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Covek {
    int redenBroj;
    string ime;
    float poeni;

    // metod za sortiranje
    bool operator < (const Covek& c) const {
        return poeni > c.poeni;
    }
};

int main() {
    // se kreira struktura Covek
    vector<Covek> luge = {
        {1, "David", 48.4},
        {2, "Blagojce", 50.0},
        {3, "Manuela", 26.8},
        {4, "Teodora", 20.0},
        {5, "Elena", 49.8},
        {6, "Stefan", 10.6},
        {7, "Filip", 13.3}
    };

    // se pecati pocetnata sostojba na vektorot
    cout << "**** Pochetna sostojba ****" << endl;
    for (Covek c : luge) {
        cout << c.redenBroj << ". " << c.ime << " - " << c.poeni << endl;
    }

    // se sortira vektorot po poeni
    sort(luge.begin(), luge.end());

    // se pechati sortiraniot vektor
    cout << endl << "**** Sortirana sostojba ****" << endl;
    for (Covek c : luge) {
        cout << c.redenBroj << ". " << c.ime << " - " << c.poeni << endl;
    }

    // se zachuvuva vektorot vo file
    ofstream out("INKI956.Simona");
    if (out.is_open()) {
        for (Covek c : luge) {
            out << c.redenBroj << "," << c.ime << "," << c.poeni << endl;
        }
        out.close();
        cout << endl << "----- Vektort e zacuvan vo fajlot -----" << endl;
    } else {
        cout << endl << "----- Greshka pri otvoranje na fajlot -----" << endl;
    }

    return 0;
}
