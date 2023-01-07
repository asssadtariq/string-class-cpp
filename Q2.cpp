//============================================================================
/*
	Name: Asad Tariq
	Roll No: 19i-0659
	Section: E
	Department: CS
*/
//============================================================================

#include "String.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout<<"!!!:::::::::: This Program will work with cin\n\ncin.get(..) and getline(..) is not used ::::::::::!!!\nYou Must Not Use Space !!!"<<endl<<endl;

	char* t1="!!!Hello!!!"; int index; char T;
	/* cin >>   cout << operators */
	/* Constructors */

	String s1;
	String s2(t1);
	String s3(s2);
	String s4(50);
	cout<<"String 1 : "<<endl<<s1<<endl<<"String 2 : "<<endl<<s2<<endl;
	cout<<"String 3 : "<<endl<<s3<<endl<<"String 4 : "<<endl<<s4<<endl;
	cout<<endl<<endl;
	cout<<"Enter String 1 : "; 	cin>>s1;
	cout<<"Enter String 4 : "; cin>>s4;
	cout<<endl<<endl;
	cout<<"String 1 : "<<endl<<s1<<endl<<"String 2 : "<<endl<<s2<<endl;
	cout<<"String 3 : "<<endl<<s3<<endl<<"String 4 : "<<endl<<s4<<endl;
	cout<<endl<<endl;

	/* Subscript Operators Code */
	cout<<"Enter INDEX Number for String 1 :_ ";
	cin>>index;
	cout<<"Character at Index "<<index<<" of String 1 :- "<<s1[index];
	cout<<endl<<endl;
	cout<<"Enter a character to set a any index of String 4 :_ "<<endl;
	cin>>T;
	cout<<"Enter INDEX Number for String 4 :_ ";
	cin>>index;
	s4[index]=T;
	cout<<"After Changing :::: String 4 :- "<<s4<<endl;
	cout<<endl<<endl;
	/* Appending Functions */

	cout<<"::::::::: STRING APPENDING :::::::"<<endl<<endl;
	String s5, s6, s7; char* t2=" WhatAreYouDoing?????"; char T2;
	cout<<"Enter string 1 :_ "; cin>>s5;
	cout<<"Enter string 2 :_ "; cin>>s6;
	s7=s5+s6;
	cout<<"APPENDED String 1 : "<<endl<<s7<<endl;
	cout<<"Enter a String : "; cin>>s5;
	cout<<"Enter a character : "; cin>>T2;
	s7=s5+T2;
	cout<<"APPENDED String 2 :: "<<endl<<s7<<endl;
	cout<<"char* t2= "<<t2<<endl;
	cout<<"Enter a String : "; cin>>s6;
	s7=s6+t2;
	cout<<"APPENDED String 3 ::: "<<endl<<s7<<endl;
	cout<<endl<<endl;
	/* Empty String ! operator */
	cout<<"::::: !!!! EMPTY STRING CHECKING !!!! :::::"<<endl<<endl;
	String s8; bool c1;
	cout<<"String 8 : "<<endl<<s8<<endl;
	c1=!s8;
	cout<<"String S8 Empty Status = "<<c1<<endl;
	cout<<"Enter String 8 : "; 	cin>>s8;
	c1=!s8;
	cout<<"String 8 : "<<endl<<s8<<endl;
	cout<<"String  Empty Status = "<<c1<<endl;
	cout<<endl<<endl;
	/* Assignment Operator */
	cout<<"||||| ASSIGNMENT OPERATOR |||||"<<endl<<endl;
	String s9, s10; char* t3="Assignment4 !!!!"; string S1;
	cout<<"Enter String 9 : "; cin>>s9;
	s10=s9;
	cout<<endl;
	cout<<"String 9 : "<<s9;
	cout<<"String 10 : "<<s10;
	cout<<endl<<endl;
	cout<<"char* = "<<t3<<endl;
	s10=t3;
	cout<<"String 10 : "<<s10<<endl;
	cout<<endl<<endl;
	cout<<"Enter a cstring : ";	cin>>S1;
	s10=S1;
	cout<<endl;
	cout<<"csting : "<<S1<<endl;
	cout<<"String 10 : "<<s10;
	cout<<endl<<endl;
	/* Equality Operator == */
	cout<<"----------- EQUALITY OPERATOR -----------"<<endl<<endl;
	String s11, s12; bool c2; char* t4="HELLO"; string S2;
	cout<<"Enter String 11 : "; cin>>s11;
	cout<<"Enter String 12 : "; cin>>s12;
	c2= s11==s12;
	cout<<"Equality = "<<c2<<endl<<endl;
	cout<<"char* t4= "<<t4<<endl;
	cout<<"Enter String 11 : "; cin>>s11;
	c2= s11==t4;
	cout<<"Equality = "<<c2<<endl<<endl;
	cout<<"Enter String 12 : "; cin>>s12;
	cout<<"Enter cstring : "; cin.ignore (); cin>>S2;
	c2= s12==S2;
	cout<<"Equality = "<<c2<<endl;
	cout<<endl<<endl;
	/* Function Calling Operator */
	/* Function will return the Index of Character being Searched */

	cout<<"\tFunction Calling Operator () "<<endl<<endl;
	String s13, s14; bool c3; char* t5="HELLO"; string S3; int indexNumber; char T3;
	cout<<"Enter String 13 : "; cin>>s13;
	cout<<"Enter String 14 : "; cin>>s14;
	indexNumber=s13(s14);
	if (indexNumber == -1)
		cout<<"String NOT FOUND !!!!"<<endl;
	else
		cout<<"IndexNumber of Searched String = "<<indexNumber<<endl;
	cout<<endl;
	cout<<"Enter String 13 : "; cin>>s13;
	cout<<"Enter a Character : "; cin>>T3;
	indexNumber=s13(T3);
	if (indexNumber == -1)
		cout<<"String NOT FOUND !!!!"<<endl;
	else
		cout<<"IndexNumber of Searched String = "<<indexNumber<<endl;
	cout<<endl;
	cout<<"char* = HELLO"<<endl;
	cout<<"Enter String 13 : "; cin>>s13;
	indexNumber=s13(t5);
	if (indexNumber == -1)
		cout<<"String NOT FOUND !!!!"<<endl;
	else
		cout<<"IndexNumber of Searched String = "<<indexNumber<<endl;
	cout<<endl;
	cout<<"Enter String 13 : "; cin>>s13;
	cout<<"Enter a cstring : "; cin>>S3;
	indexNumber=s13(S3);
	if (indexNumber == -1)
		cout<<"String NOT FOUND !!!!"<<endl;
	else
		cout<<"IndexNumber of Searched String = "<<indexNumber<<endl;

	cout<<endl<<endl;

	/* Multiplication * operator */
	cout<<" ******** ::::: MULIPLICATION OPERATOR ::::: ********"<<endl<<endl;
	String s15, s16; int num;
	cout<<"Enter String 15 : "; cin>>s15;
	cout<<"Enter Number : "; cin>>num;
	s16=s15*num;
	cout<<"String After Multiplication by Number "<<num<<endl;
	cout<<s16;
	cout<<endl<<endl;


	/* String Length  */
	cout<<"::::::::::::::::::: LENGTH :::::::::::::::::::"<<endl<<endl;
	String s17; int length;
	cout<<"Enter String : "; cin>>s17;
	length=s17.length();
	cout<<"Length of String = "<<length<<endl;

	cout<<endl<<endl;

	char T5; cin.ignore();
	cout<<"Press Any Key ... ";
	T5=getchar();
	cout<<"Good bye TC !!!!"<<endl<<endl;

	return 0;
}
