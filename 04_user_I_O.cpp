#include<iostream>
using namespace std;

int main(){
    int num1 , num2;
    cout<< "Enter the value of num1:\n";   /* '<<' This is Insertion Operator */
    cin>> num1 ;   /* '>>' This is Extraction Operator */

    cout<< "Enter the value of num2:\n";
    cin>> num2 ;
    
    cout<< "the sum is "<<num1+num2 ;
    return 0;
}