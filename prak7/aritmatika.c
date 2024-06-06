#include "aritmatika.h"

boolean isOperator(char input){
    return ((input == '+') || (input == '-') || (input == '*') || (input == '/'));
}

int hitung(int angka1, int angka2, char op){
    if(op == '+'){
        return (angka1+angka2);
    }
    else if(op == '-'){
        return (angka1-angka2);
    }
    else if(op == '*'){
        return (angka1*angka2);
    }
    else{
        return (angka1/angka2);
    }
}

int eval(char *input, int length){
    int firstToken;
    Stack s;
    CreateEmpty(&s);
    
    int angka1, angka2, temp;
    for(int i = 0; i < length; i++){
        if(isOperator(input[i])){
            Pop(&s, &angka2);
            Pop(&s, &angka1);
            temp = hitung(angka1, angka2, input[i]);
            Push(&s, temp);
        }
        else{
            Push(&s, input[i] - '0');
        }
    }

    Pop(&s, &firstToken);
    return firstToken;
}