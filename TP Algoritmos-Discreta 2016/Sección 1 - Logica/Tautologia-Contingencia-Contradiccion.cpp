//============================================================================
// Name        : Tautologia-Contingencia-Contradiccion.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================


#include <string>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <assert.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

    bool operand2Val[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string expr;
    bool Eval(char op, bool val1, bool val2)
    {
       bool val;
       switch(op) {
       case '-': {
           val = !val1;
           break;
       }
       case '>': {
           val = !(val1 & (!val2));
           break;
       }
       case '|': {
           val = (val1 | val2);
           break;
       }
       case '&': {
           val = (val1 & val2);
           break;
       }
       case '=': {
           val = (val1 == val2);
           break;
       }
       default:
           assert(0);
       }
       return val;
    }

    bool EvalExpr()
    {
       bool result;
       vector<bool> stack;
       string::reverse_iterator iter = expr.rbegin();
       for (; iter != expr.rend(); ++iter) {
           char nextCh = *iter;
           if ((nextCh >= 'a') && (nextCh <= 'z')) {
               bool v = operand2Val[nextCh - 'a'];
               stack.push_back(v);
           } else {
               char op = *iter;
               bool x = stack.back();
               stack.pop_back();
               bool y;
               if (op != 'N') {
                   y = stack.back();
                   stack.pop_back();
               }
               bool val = Eval(op, x, y);
               stack.push_back(val);

           }
       }
       result = stack.back();
       stack.pop_back();
       return result;

    }

    bool Recur(vector<char>& operand, int nOperand,int& cd)
    {

       if (nOperand < 0){
           bool val = EvalExpr();

           if(!val){
        	   cd++;
           }else{
        	   cd--;
           }
           return val;
       }
       char oper = operand[nOperand];
       operand2Val[oper - 'a'] = true;
       bool val = Recur(operand, nOperand-1,cd);

       if (!val) return val;

       operand2Val[oper - 'a'] = false;
       val = Recur(operand, nOperand-1,cd);
       return val;
    }

int main(){

do{
	cout << "Ingrese expresion compuesta. F para finalizar" << endl;
	cin >> expr;

	if(expr!="F"){
	set<char> oper;
	for (unsigned i = 0; i < expr.size(); ++i) {
		char nextCh = expr[i];
		if ((nextCh >= 'a') && (nextCh <= 'z')) {
			oper.insert(nextCh);
		}
	}

	int cd=0;
	vector<char> operand(oper.begin(), oper.end());
	int nOperand = operand.size();
	bool isTaut = Recur(operand, nOperand-1,cd);


	if(!isTaut){
		if(cd==1){
			cout<<"Contradiccion" << endl<< endl;
			cd=0;
		}else{
			if (cd!=1){
				cout << "Contingencia" << endl<< endl;
				cd=0;
			}
		}
	}else{
		cout << "Tautologia" << endl<< endl;
		cd=0;
	}

	}

}while(expr!="F");

system("pause");
return 0;

}
