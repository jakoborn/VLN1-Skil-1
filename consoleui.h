#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include "servicelayer.h"

class ConsoleUI
{
private:
    ServiceLayer serve;
    void addData();
    void addPersonManually();
    void addPeopleFromFile();
    void deleteData();
    void showData();
    void sortData();
    void searchData();
    void printLine();
    bool validYear(const string& s, int& year);
    bool birthChecks(int birthYear, int deathYear);
    bool check();
    bool genderCheck(char &gender);
    void OnlyTakeOneInput();


public:
    ConsoleUI();

    void run();
};

#endif // CONSOLEUI_H
