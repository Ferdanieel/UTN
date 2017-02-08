//============================================================================
// Name        : Analizador Sintactico.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================

#include <string>
#include <iostream>
#include <stdlib.h>
#include <list>
#include <sstream>
using namespace std;

string removeSpaces(const string& str)
{
    string s(str);
    int j = 0;
    int N = s.size();

    for (int i = 0; i < N; ++i) {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
    }

    s.resize(j);
    return s;
}

void tokenize(const string& str, list<string>& tokens)
{
    string num;
    int N = str.size();

    for (int i = 0; i < N; ++i) {
        char c = str[i];
        if (isdigit(c)) {
            num += c;
        } else {
            if (!num.empty()) {
                tokens.push_back(num);
                num.clear();
            }
            string token;
            token += c;
            tokens.push_back(token);
        }
    }

    if (!num.empty()) {
        tokens.push_back(num);
        num.clear();
    }
}

// Reglas
// exp    : term
//        | exp + term
//        | exp - term
//        ;
// term   : factor
//        | factor * term
//        | factor / term
//        ;
// factor : number
//        | ( exp )
//        ;

class Calculator {
public:
    Calculator(const string& expression);

    void next();
    int exp();
    int term();
    int factor();
    int toInt(const string& s);

private:
    list<string> mTokens;
    string mCurrent;
};

Calculator::Calculator(const string& expression)
{
    string s = removeSpaces(expression);
    // cout << s << std::endl;

    tokenize(s, mTokens);

    // list<string>::iterator it, itEnd;
    // for (it = mTokens.begin(); it != mTokens.end(); ++it) {
    //     cout << *it << " ";
    // }
    // cout << std::endl;

    mCurrent = mTokens.front();
}

void Calculator::next()
{
    mTokens.pop_front();

    if (!mTokens.empty()) {
        mCurrent = mTokens.front();
    } else {
        mCurrent = string();
    }
}

int Calculator::exp()
{
    int result = term();
    while (mCurrent == "+" || mCurrent == "-") {
        if (mCurrent == "+") {
            next();
            result += term();
        }
        if (mCurrent == "-") {
            next();
            result -= term();
        }
    }
    return result;
}

int Calculator::term()
{
    int result = factor();
    while (mCurrent == "*" || mCurrent == "/") {
        if (mCurrent == "*") {
            next();
            result *= factor();
        }
        if (mCurrent == "/") {
            next();
            //
            // Could simply be:
            // result /= term();
            //
            // But we need to deal with divide by 0
            //
            int denominator = factor();
            if (denominator != 0) {
                result /= denominator;
            } else {
                result = 0;
            }
        }
    }
    return result;
}

int Calculator::factor()
{
    int result;

    if (mCurrent == "(") {
        next();
        result = exp();
        next();
    } else {
        result = toInt(mCurrent);
        next();
    }

    return result;
}

int Calculator::toInt(const string& s)
{
    stringstream ss;
    ss << s;
    int x;
    ss >> x;
    return x;
}

int calculate(string s)
{
    Calculator calculator(s);
    return calculator.exp();
}

int main()
{
    string expresion;

    // "3+2*2" = 7
    // " 3/2 " = 1
    // " 3+5 / 2 " = 5
    cout << "Ingrese una expresion para calcular. Presione F para finalizar " << endl;
    cin >> expresion;

    while(expresion !="F"){
    	cout << expresion << " -> " << calculate(expresion) << endl;

        cout << "Ingrese una expresion para calcular. Presione F para finalizar " << endl;
        cin >> expresion;
    }

    system("pause");

    return 0;
}
