#include <iostream>
#include "String.hpp"





int main() {
    String testing("abcrabbitabc");


    String example;

    example = "program";

    example = "tod";

    std::cout << "Expected tod, Got " << example << std::endl;


    String practice;
    practice = "yesterday";


    String a;
    a = "rabbit";

    String testing2;
    testing2 = "abcrabbitabc";

    String testing3;
    testing3 = "program";

    String testing4;
    testing4 = "elephant";

    String testing5;
    testing5 = "basketball";

    String testing6;
    testing6 = "a";

    String testing7;
    testing7 = "abcrabb";




    if(testing == testing2) {
        std::cout << "The two strings are equal" << std::endl;
    }
    else {
        std::cout << "The two strings are not equal" << std::endl;
    }



    if(testing != testing3) {
        std::cout << "The two strings are not equal" << std::endl;
    }
    else {
        std::cout << "The two strings are equal" << std::endl;
    }


    if(testing > testing4) {
        std::cout << "The first string is greater than the second" << std::endl;
    }
    else {
        std::cout << "The second string is greater than the first" << std::endl;
    }


    if(testing < testing5) {
        std::cout << "The first string is less than the second" << std::endl;
    }
    else {
        std::cout << "The second string is greater than the first" << std::endl;
    }


    if(testing <= testing6) {
        std::cout << "The first string is less than or equal to the second" << std::endl;
    }
    else {
        std::cout << "The first string is greater than the second" << std::endl;
    }


    if(testing >= testing7) {
        std::cout << "The first string is greater than or equal to the second" << std::endl;
    }
    else {
        std::cout << "The first string is not greater than or equal to the second" << std::endl;
    }


    std::cout << "Index of first occurance of pattern is " << testing.indexOf(a) << std::endl;

    String result = testing += example;
    std::cout << "Cacatenating two strings with += " << result << std::endl;
    std::cout << "Expected abcrabbitabctod, Got " << testing << std::endl;
    std::cout << "Expected tod, Got " << example << std::endl;






    std::cout << "Adding two strings with + " << testing + practice << std::endl;




    std::cout << "Char at index 0 is " << testing[0] << std::endl;


    std::cout << "Size of string 1 is " << testing.size(testing) << std::endl;



    std::cout << "String 1 reversed is " << testing.reverse() << std::endl;

    std::cout << "String 1 index of char i is at " << testing.indexOf('i') << std::endl;




    std::cout << "Number of allocations is: " << testing.getAllocations() << std::endl;










    return 0;
}