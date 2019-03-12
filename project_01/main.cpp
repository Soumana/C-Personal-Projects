#include <iostream>

#include "String.hpp"






int main() {


    String testing("abcrabbitabc");


    if(testing == ("abcrabbitabc")) {
        std::cout << "The two strings are equal" << std::endl;
    }
    else {
        std::cout << "The two strings are not equal" << std::endl;
    }


    if(testing != ("program")) {
        std::cout << "The two strings are not equal" << std::endl;
    }
    else {
        std::cout << "The two strings are equal" << std::endl;
    }


    if(testing > ("elephant")) {
        std::cout << "The first string is greater than the second" << std::endl;
    }
    else {
        std::cout << "The second string is greater than the first" << std::endl;
    }


    if(testing < ("basketball")) {
        std::cout << "The first string is less than the second" << std::endl;
    }
    else {
        std::cout << "The second string is greater than the first" << std::endl;
    }


    if(testing <= ("a")) {
        std::cout << "The first string is less than or equal to the second" << std::endl;
    }
    else {
        std::cout << "The first string is greater than the second" << std::endl;
    }


    if(testing >= ("abcrabb")) {
        std::cout << "The first string is greater than or equal to the second" << std::endl;
    }
    else {
        std::cout << "The first string is not greater than or equal to the second" << std::endl;
    }



    std::cout << "Cacatenating two strings with += " << testing.operator += ("Z") << std::endl;


    std::cout << "Adding two strings with + " << testing + ("tomorrow") << std::endl;


    std::cout << "Char at index 0 is " << testing[0] << std::endl;



    std::cout << "Size of string 1 is " << testing.size(testing) << std::endl;

    std::cout << "String 1 reversed is " << testing.reverse() << std::endl;

    std::cout << "String 1 index of char i is at " << testing.indexOf('i') << std::endl;

    std::cout << "Index of first occurance of pattern is " << testing.indexOf("rabbit") << std::endl;

























    //    std::cout << testing.indexOf("rabbit");
//    testing.reverse();







//    if(a.operator > ("aaa")) {
//        std::cout << "true";
//    }
//    else
//        std::cout << "false";






    return 0;
}