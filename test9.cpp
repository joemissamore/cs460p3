// Autogenerated Scheme to C++ Code
// File: test9.cpp
#include <iostream>
#include "Object.h"
using namespace std;

Object cond_ex_1 (Object choice  , Object value )
{
(Object (choice) == Object (1))	return Object (value);
(Object (choice) == Object (2))	return Object (value) * Object (value);
(Object (choice) == Object (3))	if (Object (value) == Object (0)){
	return Object ("Division by 0 not defined");
	} else {
	return Object (1) / Object (value);
}
;
	return Object (0);
;
	return Object();
}
Object square (Object n )
{
	if (numberp(Object (n))){
	return Object (n) * Object (n);
	} else {
	return Object ("invalid_parameter");
}
;
	return Object();
}
Object reciprocal (Object n )
{
	if ((numberp(Object (n))) && (!(Object (n) == Object (0)))){
	return Object (1) / Object (n);
	} else {
	return Object ("invalid_parameter");
}
;
	return Object();
}
Object cond_ex_2 (Object choice  , Object value )
{
(Object (choice) == Object (1))	return Object (value);
(Object (choice) == Object (2))	return square(Object (value));
(Object (choice) == Object (3))	return reciprocal(Object (value));
	return Object (0);
;
	return Object();
}
int main()
{
	cout << (cond_ex_1(Object (1) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_1(Object (1) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_1(Object (2) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_1(Object (2) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_1(Object (3) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_1(Object (3) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_1(Object (3) ,  Object (0)));
	cout << endl;
	cout << (cond_ex_1(Object (-1) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_2(Object (1) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_2(Object (1) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_2(Object (2) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_2(Object (2) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_2(Object (3) ,  Object (5.0)));
	cout << endl;
	cout << (cond_ex_2(Object (3) ,  Object (-7.0)));
	cout << endl;
	cout << (cond_ex_2(Object (3) ,  Object (0)));
	cout << endl;
	cout << (cond_ex_2(Object (-1) ,  Object (5.0)));
	cout << endl;
	return 0;
}