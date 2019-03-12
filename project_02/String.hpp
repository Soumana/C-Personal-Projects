//
// Created by Soumana Sylla on 2/2/19.
//

#ifndef PROJECT_2_STRING_HPP
#define PROJECT_2_STRING_HPP

#include "iostream"




class String {
public:

    // Both constructors should construct
    // this String from the parameter s
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

    static int getAllocations() {return allocations;}

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
    static char * strdup(const char *src); // notice this new function - add any other auxiliary static methods neded
    static int allocations;
    static char *new_char_array(int n_bytes);
    static void delete_char_array(char *p);
    char *buf; // base of array for the characters in this string
    // DO NOT add a length data member!! Use the null terminator



};


std::ostream & operator << (std::ostream & out, String str);
std::istream & operator >> (std::istream & in, String & str);






#endif //PROJECT_2_STRING_HPP
