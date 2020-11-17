#include "Header.hpp"

int main() {
    setlocale(LC_ALL, "Russian");
    int mode;
    cout << "Введите 1, если хотите перевести с Русского на Английский" << endl
    << "Введите 2, если хотите перевести с Английского на Русский: ";
    cin >> mode;
    if (mode == 1){
        RusEng();
    }
    else EngRus();
}
