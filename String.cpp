//============================================================================
/*
	Name: Asad Tariq
	Roll No: 19i-0659
	Section: E
	Department: CS
*/
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

#include "String.h"


String::String() {
	STR_size=100;
	M_STR=new char[STR_size];
	M_STR="";
}

String::String(char*str)// initializes the string with constant cstring
{
	STR_size=strlen(str);
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++){
		M_STR[i]=str[i];
	}
}

String::String(const String & S1)// copy constructor to initialize the string fromexisting string
{
	STR_size=S1.STR_size;
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++){
		M_STR[i]=S1.M_STR[i];
	}
}

String::String(int x)// initializes a string of pre-defined STR_size
{
	STR_size=x;
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++)
		M_STR[i]='\0';
}

char& String::operator[](int i)// returns the character at index [x]
{
	if (i>=0 && i<STR_size){
		return M_STR[i];
	}
	else {
		cout<<endl;
		cout<<"Index is not in STR_size !!! "<<endl<<endl;
	}
}

char& String::operator[](int i) const// returns the character at index [x]
{
	if (i>=0 && i<STR_size){
		return M_STR[i];
	}
	else {
		cout<<endl;
		cout<<"Index is not in STR_size !!! "<<endl<<endl;
	}
}


String String::operator+(const String &str)// append a String at the end of string
{
	String temp; int count=0;
	temp.STR_size=strlen(M_STR)+strlen(str.M_STR);
	temp.M_STR=new char[temp.STR_size];

	for (int i=0 ; M_STR[i]!='\0'; i++){
		temp.M_STR[i]=M_STR[i];
		count++;
	}

	for (int j=0, k=count; k<temp.STR_size; k++){
		temp.M_STR[k]=str.M_STR[j];
		j++;
	}
	return temp;
}
String String::operator+(const char& str)// append a char at the end of string
{
	String temp; int count=0;
	temp.STR_size=strlen(M_STR)+1;
	temp.M_STR=new char[temp.STR_size];

	for (int i=0 ; M_STR[i]!='\0'; i++){
		temp.M_STR[i]=M_STR[i];
		count++;
	}

	for (int j=0, k=count; k<temp.STR_size; k++){
		temp.M_STR[k]=str;
		j++;
	}

	return temp;

}

String String::operator + (char* str){
	String temp;
	temp.STR_size=strlen (str)+length();
	temp.M_STR=new char [temp.STR_size];
	int count=0;

	for (int i=0; M_STR[i]!='\0' ; i++){
		temp.M_STR[i]=M_STR[i];
		count++;
	}

	for (int j=count, k=0; str[k]!='\0'; j++, k++){
		temp.M_STR[j]=str[k];
	}

	return temp;
}

String& String::operator - (const String& sub_str){
}
String& String::operator - (const string& sub_str){

}


bool String::operator!()// returns true if string is empty..
{
	int count= 0;
	for (int i=0; M_STR[i]!='\0'; i++){
		count++;
	}

	if (count != 0){
		return 0;
	}
	else
		return 1;
}

String& String::operator=(const String& S1)// Copy one string to another ...
{
	STR_size=S1.STR_size;
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++){
		M_STR[i]=S1.M_STR[i];
	}
	return *this;
}

String& String::operator=(char* str)// Copy one string to another ...
{
	STR_size=strlen(str);
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++)
		M_STR[i]=str[i];
	return *this;
}

String& String::operator=(const string& StR){
	STR_size=StR.length();
	M_STR=new char[STR_size];
	for (int i=0; i<STR_size; i++)
		M_STR[i]=StR[i];
	return *this;
}

bool String::operator==(const String& S1)const//returns true if two strings are equal
{
	if (STR_size!=S1.STR_size)
		return 0;
	else {
		for (int i=0; i<STR_size; i++){
			if (M_STR[i]!=S1.M_STR[i])
				return 0;
		}
	}
	return 1;
}

bool String::operator==(char* str)	const//returns true if two strings are equal
{
	if (strlen(M_STR)!=strlen(str))
		return 0;

	else {
		for (int i=0; M_STR[i]!='\0'; i++){
			if (M_STR[i]!=str[i])
				return 0;
		}
	}
	return 1;
}

bool String::operator==(string& StR) const{
	if (strlen(M_STR) != StR.length()){
		return 0;
	}
	else {
		for (int i=0; M_STR[i]!='\0'; i++){
			if (M_STR[i]!=StR[i])
				return 0;
		}
	}
	return 1;
}


int String::operator()(char searched)// returns the index of character being searched.
{	int count=-1;
	for (int i=0; M_STR[i]!='\0'; i++){
		if (M_STR[i]==searched){
			count=i;
			break;
		}
	}
	return count;
}

int String::operator()(const string StR){
	int count=-1; int flag1=0;
	for (int i=0; M_STR[i]!='\0'; i++){
		if (M_STR[i]==StR[0]){
			flag1=0;
			for (int j=i,k=0; StR[k]!='\0' && flag1==0; j++,k++){
				if (M_STR[j]!=StR[k]){
					flag1=1;
				}
			}

			if (flag1==0){
			count=i;
			return count;
		}
		}
	}
	return count;
}

int String::operator()(const String str){
	int count=-1; int flag1=0;
	for (int i=0; M_STR[i]!='\0'; i++){
		if (M_STR[i]==str.M_STR[0]){
			flag1=0;
			for (int j=i,k=0; str.M_STR[k]!='\0' && flag1==0; j++,k++){
				if (M_STR[j]!=str.M_STR[k]){
					flag1=1;
				}
			}

			if (flag1==0){
			count=i;
			return count;
		}
		}
	}
	return count;
}

int String::operator()(char* sstr){
	int count=-1; int flag1=0;
	for (int i=0; M_STR[i]!='\0'; i++){
		if (M_STR[i]==sstr[0]){
			flag1=0;
			for (int j=i,k=0; sstr[k]!='\0' && flag1==0; j++,k++){
				if (M_STR[j]!=sstr[k]){
					flag1=1;
				}
			}

			if (flag1==0){
			count=i;
			return count;
		}
		}
	}
	return count;
}


int String::length()	// returns the length of string
{
	int count=0;
	for (int i=0; M_STR[i]!='\0'; i++){
		count++;
	}
	return count;
}

String String::operator * (int m){
	String temp;
	temp.STR_size=strlen(M_STR)*m;
	temp.M_STR=new char [temp.STR_size];
	for (int i=0, j=0; i<temp.STR_size; ){
		if (j==strlen(M_STR)){
			j=0;
		}
		else{
			temp.M_STR[i]=M_STR[j];
			i++;
			j++;
		}
	}
	return temp;
}

String::~String() {
}

ostream& operator << (ostream& out, const String& str){
	for (int i=0; i<str.STR_size; i++)
	out<<str.M_STR[i];
	out<<endl;
	return out;
}

istream& operator >> (istream& in, String& str){
	cout<<endl;
	str.STR_size=1000;
	str.M_STR=new char[str.STR_size];
	//cin.get(str.M_STR,str.STR_size);
	cin>>str.M_STR;
	return in;
}
