#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct Covek {
  int redbroj;
  std::string Ime;
  float poeni;
   //metod na sortiranje
  bool operator<(const Covek& c) const {
    return poeni > c.poeni;
  }
};

int main() {
    //se kreira struktura Covek
  std::vector<Covek> luge = {
     {1, "David", 48.4},
     {2, "Blagojce", 50.0},
     {3, "Manuela", 26.8},
     {4, "Teodora", 20.0},
     {5, "Elena", 49.8},
     {6, "Stefan", 10.6},
     {7, "Filip", 13.3}
  };
   // se pecati pocetnata sostojba na vektorot
  std::cout << "Pochetna sostojba:\n";
  for (const Covek& c : luge) {
    std::cout << c.redbroj << " " << c.Ime << " " << c.poeni << "\n";
  }
   // se sortira vektorot po poeni
  std::sort(luge.begin(), luge.end());

  // se pechati sortiraniot vektor
  std::cout << "\nSortirana sostojba (po poeni):\n";
  for (const Covek& c : luge) {
    std::cout << c.redbroj << " " << c.Ime << " " << c.poeni << "\n";
  }
 // se zachuvuva vektorot vo file
 std::ofstream out("INKI956.Simona");
    if (out.is_open()) {
        for (Covek c : luge) {
            out << c.redbroj << "," << c.Ime << "," << c.poeni << "\n";
        }
        out.close();
        std::cout <<  "----- Vektort e zacuvan vo fajlot -----" <<"\n";
        }
        else
        {
            std::cout <<  "----- Greshka pri otvoranje na fajlot -----" <<"\n";
    }
  return 0;
}
