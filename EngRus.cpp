//
// Created by SovesT on 17/11/2020.
//

#include "Header.hpp"

void EngRus(){
    string str1, str2, input, output;
    int n;
    str2 = "qwertyuiop[]asdfghjkl;'zxcvbnm,.";
    str1 = "йцукенгшщзхъфывапролджэячсмитьбю";
    cout << "Введите строку для перевода: " << endl;
    cin.ignore();
    getline(cin, input);
    while (!input.empty()){
        n = str2.find(input.substr(0, 1));
        output += str1.substr(n, 1);
        input.erase(0, 1);
    }
    cout << output;
}