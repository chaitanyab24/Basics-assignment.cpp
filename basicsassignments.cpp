//Q1. How can you output “Physics” and “Wallah” in two different lines in C++?
#include<iostream>
using namespace std;
int main(){
    cout<<"Physics"<<endl<<"Wallah";
    return 0;
}


//Q2. Write a program to print 10 using 2 positive numbers less than 6 in C++ as output.
#include<iostream>
using namespace std;
int main(){
    int a=5,b=5;
    int c = a+b;
    cout<<"Sum is "<<c;
    return 0;
}


/*Q3. How much space does the following data types take?
i) int => 4 bytes
ii) bool => 1 byte
iii) float => 4 bytes */


//Q4. What is the output of this program?
#include<iostream>
using namespace std;
int main() {
    int a = 4;
    int b = 5;
    a++, b--;
    cout << ++a << " " << b--;
}
//output will be "6 4"


//Q5. Write a program to find the circumference of a circle with radius 10 in C++.
#include<iostream>
using namespace std;
int main(){
    int r = 10; // r is radius
    float pi = 3.14;
    float c = 2*pi*r;  // c is circumfurence
    cout<<c;
    return 0;
}


/*
Q6. How many of these can be a variable name ?
1) 01Pwskills  => No, because cannot start with an integer
2) _FLOAT  => Yes
3) int  => No because its a keyword
4) FLOAT  => Yes
5) You will succeed  => No, because gaps are not allowed
*/