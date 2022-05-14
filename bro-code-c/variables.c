#include <stdio.h>

int main(){
    //variable = allocated space in memory to store a value.

    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization

    int age = 21; //integer
    float gpa = 2.05; //floating plant number;
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s.\n", name);
    printf("You are %d years old.\n", age);
    printf("Your average grade is %c .\n", grade);
    printf("Your gpa is %f.\n", gpa);

    return 0;
}