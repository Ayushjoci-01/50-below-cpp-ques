 //operator precedence
 #include<iostream>
 using namespace std;
 int main()
 {
    int a=17;
    int b=17;
    int c=((a*6)-9);
    cout<<c;
    return 0;
 }
 /*
 In C++, operator precedence determines the order in which operators are evaluated in an expression. It specifies which operators have higher priority over others when multiple operators are present in the same expression. Here is a list of operator precedence in descending order (operators at the top have higher precedence):

1. Postfix increment and decrement operators: `++` and `--`
2. Function call operator: `()`
3. Subscript operator: `[]`
4. Member selection operators: `.` and `->`
5. Prefix increment and decrement operators: `++` and `--`
6. Unary operators: `+`, `-`, `!`, `~`, `*`, `&`, `sizeof`, and type cast
7. Multiplicative operators: `*`, `/`, and `%`
8. Additive operators: `+` and `-`
9. Shift operators: `<<` and `>>`
10. Relational operators: `<`, `>`, `<=`, and `>=`
11. Equality operators: `==` and `!=`
12. Bitwise AND operator: `&`
13. Bitwise XOR operator: `^`
14. Bitwise OR operator: `|`
15. Logical AND operator: `&&`
16. Logical OR operator: `||`
17. Conditional operator: `?:`
18. Assignment operators: `=`, `+=`, `-=`, `*=`, `/=`, and so on
19. Comma operator: `,`

It's important to note that parentheses `( )` can be used to explicitly specify the evaluation order of expressions. When parentheses are used, the sub-expression enclosed within the parentheses is evaluated first.

It's always a good practice to use parentheses to clarify the intent and avoid any confusion related to operator precedence.*/