//============================================================================
/*
	Name: Asad Tariq
	Roll No: 19i-0659
	Section: E
	Department: CS
*/
//============================================================================

#include <iostream>
using namespace std;
#ifndef STRING_H_
#define STRING_H_

class String
{
private:
	char *M_STR;
	int STR_size;

public:// provide definitions of following functions...

String();// default constructor
String(char*str);// initializes the string with constant cstring
String(const String &);// copy constructor to initialize the string from existing string
String(int x);// initializes a string of pre-defined size

char& operator[](int i);// returns the character at index [x]
char& operator[](int i) const;// returns the character at index [x]

String operator + (const String &str);// append a String at the end of string
String operator + (const char&str);// append a char at the end of string
String operator + (char* str);

String& operator - (const String&);
String& operator - (const string&);

bool operator!();// returns true if string is empty..

String& operator=(const String&);// Copy one string to another ...
String& operator=(char*);// Copy one string to another ...
String& operator=(const string&);

bool operator==(const String&) const;//returns true if two strings are equal
bool operator==(char*) const;//returns true if two strings are equal
bool operator==(string&) const;

int operator()(char);	// Its a function call operator, returns the index of character being searched.
int operator()(const string);
int operator()(const String);
int operator()(char*);

String operator * (int m);

int length();// returns the length of string

friend ostream& operator << (ostream&, const String&);
friend istream& operator >> (istream&, String&);


~String();// destructor...};

};


#endif /* STRING_H_ */
