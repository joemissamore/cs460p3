// Autogenerated Scheme to C++ Code
// File: test7.cpp
#include <iostream>
#include "Object.h"
using namespace std;

Object iftest (Object a  , Object b  , Object c )
{
	if ((Object (a) == Object (b)) && (Object (b) == Object (c))){
	return Object ("all_the_same");
	} else {
	if (!((Object (a) > Object (b)) || (Object (b) > Object (c)))){
	return Object ("in_ascending_order");
	} else {
	if (!(Object (a) < Object (c))){
	return Object ("in_decscending_order");
	} else {
	return Object ("three_values_passed");
}
;
}
;
}
;
	return Object();
}
int main()
{
	cout << (iftest(Object (10) , Object (15) , Object (20)));
	cout << endl;
	cout << (iftest(Object (10) , Object (10) , Object (10)));
	cout << endl;
	cout << (iftest(Object (20) , Object (15) , Object (10)));
	cout << endl;
	cout << (iftest(Object (15) , Object (10) , Object (20)));
	cout << endl;
	return 0;
}