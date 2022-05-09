// Operator is a symbol used to perform operation given in programming language.
// Arithmetic Operator - Addition, Subtraction, Multiplication, Division, Modulus
// Relational Operator - "==", "!=", "<", ">", "<=", ">=" returns 0 and 1
// Logical Operator - "&&", "||", "!"
// Bit wise operator - "&", "|", "^". How Bit wise works ? Suppose you are taking 2 & 3 it will convert 2 into binary means 10 and 3 also means 11 then perform binary & operation with them first (0 & 1)-> Gives 0 and  (1 & 1)-> Gives 1 means the out put will be 10 means 2 in decimal .
// here & for and and | for or and ^ is XOR means both true or both false then it will return false other wise it will return True or 1
// There are other Bit wise operator as ~ for one's complement << left shift >> for right shift
// Assignment Operator "=", "+=", "-=", "*=", "/=" are some assignemt operator in C
// Some Others operators can be "&" for getting address of a  variable,  * pointer to a variable, ?: conditional expression.
// Operator Precedence in C : As in Maths we have to follow some rules to solve a equation of simple maths same in C also we have to do that and we have to follow C precedence chat don't need to remind it if you want to see just search in internet. For example () -> */% -> +- this is the small
// Associativity :  In programming languages the associativity of an operator is a property that determines how operators in Same precedence are grouped in absence of parenthesis
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, e;
    float d;
    a = 34;
    b = 95;
    e = 0;
    // Arithmetic
    printf("Add is \n %d", a + b); // same for other arithmetic operators
    printf("Sub is \n %d", a - b); // same for other arithmetic operators
    printf("Mul is \n %d", a * b); // same for other arithmetic operators
    printf("Div is \n %d", b / a); // same for other arithmetic operators
    // One thing the result type will be defined by data type of printf means if it is %d though result is in float it will be printed as int and vice versa
    c = 45;
    d = 45.5;
    printf("addition is %d \n", c + d);
    printf("addition is %f \n", c + d); // will get more knowledge while doing programme.
    // Relational Operator
    printf("%d", a == b);
    printf("%d", a != b);
    printf("%d", a >= b);
    printf("%d", a <= b); // Means false 1 means true
    // Logical -  any integer value will be true and 0 is false
    printf("%d", a && e); // it means and means both should be True
    printf("%d", a || e); // it is or means any of them should be true
    // Binary Operator.
    printf("%d", 2 & 3);
    printf("%d", 2 | 3);
    printf("%d", 2 ^ 3); // you can do by your self to check.
    // Assignment Operator
    printf("%d", a += 1); // it means a = a + 1
    printf("%d", a -= 1); // it means a = a - 1
    printf("%d", a *= 1); // it means a = a * 1
    printf("%d", a /= 1); // it means a = a / 1

    return 0;
}
