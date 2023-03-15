#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

    const int DECK_SIZE = 54;
    const int SUIT_SIZE = 13;
    const int JOKER_SIZE = 2;

    string suits[4] = {"Srce", "Baklava", "Detelina", "List"};
    string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Dzandar", "Kralica", "Kral"};
    string jokers[JOKER_SIZE] = {"Oboen Joker", "Crno/Bel Joker"};

    void shuffleDeck(string deck[], int size) {
        for (int i = 0; i < size; i++) {
            int j = rand() % size;
            string temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }
    }

int main() {
    string deck[DECK_SIZE];
    int index = 0;
    int k=0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
                }
            }
            deck[index] = jokers[k];
            index++,k++;
            deck[index]=jokers[k];

    cout << "Po red:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    srand(time(NULL)); 
    //kartite kje se ispechatat po red

    cout<< "\nIzmeshano:"<<endl;
    shuffleDeck(deck, DECK_SIZE);
    //kartite kje se ispechatat izmeshano
    for (int i = 0; i < DECK_SIZE; i++) {
    cout << deck[i] << endl;
    }

    return 0;
}

