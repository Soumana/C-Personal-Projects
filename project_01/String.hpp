//
// Created by Soumana Sylla on 1/13/19.
//

#ifndef PROJECT_01_STRING_HPP
#define PROJECT_01_STRING_HPP

#include "iostream"

const int MAXLEN = 128;

class String {
public:

    String(const char * s = "");
    String(const String & s);

    int size(String s);
    String reverse(); // does not modify this String
    int indexOf(const char c);
    int indexOf(const String pattern);

    bool operator == (const String s);
    bool operator != (const String s);
    bool operator > (const String s);
    bool operator < (const String s);
    bool operator <= (const String s);
    bool operator >= (const String s);
    String operator + (const String s); // concatenates this and s to return result
    String operator += (const String s); //concatenates s onto end of this
    char & operator [] (int index);
    String operator = (const String & s);

    void print(std::ostream & out);
    void read(std::istream & in);

    bool inBounds(int i) {
        return i >= 0 && i < strlen(buf);
    } // HINT: some C string primitives you should define and use

    ~String();

private:

    static int strlen(const char *s);
    static char * strcpy(char *dest, const char *src);
    static char * strcat(char *dest, const char *src);
    static int strcmp(const char *left, const char *right);
    static int strncmp(const char *left, const char *right, int n);
    static char * strchr(const char *str, int c);
    static char * strstr(const char *haystack, const char *needle);


    char buf[MAXLEN]; // array for the characters in this string
                        // DO NOT store the ‘logical’ length of this string
                            // use the null ‘\0’ terminator to mark the end
};


std::ostream & operator << (std::ostream & out, String str);
std::istream & operator >> (std::istream & in, String & str);


#endif //PROJECT_01_STRING_HPP











