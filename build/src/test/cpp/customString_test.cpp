/*#include <cassert>
#include <sstream>

#include "../../main/headers/customStirng.hpp"

using namespace std;

void TestCSInit()
{
	cout<<"[test] custom string def init..."<<flush;
	String obj;
	cout<<" pass"<<endl;
	
	cout<<"[test] custom string init with const char*..."<<flush;
	String obj1("lkjlm;l");
	cout<<" pass"<<endl;
	
	cout<<"[test] custom string copy constractor..."<<flush;
	String obj2(obj1);
	cout<<" pass"<<endl;
}

void TestCSOperatorEq()
{
	String obj1,obj2("jkin kml");
	cout<<"[test] custom string operator=..."<<flush;
	obj1 = obj2;
	assert(obj1.toString() == obj2.toString());
	cout<<" pass"<<endl;
}

void TestCSOperatorPlus()
{
	String obj1("fa"),obj2("fo"),obj3;
	cout<<"[test] custom string operator+ for custom string..."<<endl;
	obj3 = obj1 + obj2;
	assert( obj3.toString() == (obj1.toString() + obj2.toString() ) );
	cout<<" pass"<<endl;
}

void TestCSOperatorPlusEq()
{
	String obj1("fa"),obj2("fo");
	cout<<"[test] custom string operator+=..."<<flush;
       	obj1 +=obj2;
	string t("fafo");
	assert(	obj1.toString() == t );
	cout<<" pass"<<endl;
}


void TestCSOperatorCmp()
{
	String obj1("cmp"),obj2("cmp"),obj3("cmpcmp");
	cout<<"[test] custom string operator==..."<<flush;
	assert(obj1 == obj2);
	assert( !(obj1 == obj3) );
	cout<<" pass"<<endl;

	cout<<"[test] custom strirg operator>=..."<<flush;
       	assert( obj3 >= obj1);
	assert( obj1 >= obj2);
	assert( !( obj1 >= obj3) );
	cout<<" pass"<<endl;	

	cout<<"[test] custom string operator<=..."<<flush;
	assert( obj1 <= obj3);
	assert( obj1 <= obj2);
	assert( !( obj3 <= obj1 ) ) ;
	cout<<" pass"<<endl;

	cout<<"[test] custom string operator>..."<<flush;
	assert( obj3 > obj1);
	assert( !(obj1 > obj3) );
	cout<<" pass"<<endl;

	cout<<"[test] custom string operator<..."<<flush;
	assert( obj1 < obj3 );
	assert( !( obj3 < obj1 ) );
	cout<<" pass"<<endl;

	cout<<"[test] custom string operator!=..."<<flush;
	assert( obj1 != obj3 );
	assert( !( obj1 != obj2 ) );
	cout<<" pass"<<endl;

}

void TestCSIsEmpty()
{
	String obj1,obj2("lkjl");
	cout<<"[test] custom string isEmpty..."<<endl;
	assert( !(obj2.isEmpty()) );
	assert( obj1.isEmpty() );
	cout<<" pass"<<endl;
}

void TestCSToString()
{
	String obj1("kjf");
	string obj2("kjf");
	cout<<"[test] custom string toString..."<<flush;
	assert( obj1.toString() == obj2);
	cout<<" pass"<<endl;
}

void TestCSOperatorToDefType()
{
	String Int("123") , Float("12.3"), trash("jkhm");
	int a = 123;
	float b = 12.3;
	double c = 12.3;
	cout<<"[test] custom string  operator(int)..."<<flush;
	assert( ((int)Int) == a);
	assert( !((int)trash) );
	cout<<" pass"<<endl;

	cout<<"[test] custom string operator(float)..."<<flush;
	assert( ( (float)Float) == b);
	assert( !( (float)trash) );
	cout<<" pass"<<endl;

	cout<<"[test] custom string operator(double)..."<<flush;
	assert( ( (double)Float ) == c );
	assert( !( (double)trash) );
	cout<<" pass"<<endl;
}

void TestCSOperatorToStream()
{
	stringstream ss1,ss2;
	String obj1("asd");
	cout<<"[test] custom string operator<<..."<<flush;
	ss1<<obj1;
	ss2<<"asd";
	assert(ss1.str() == ss2.str() );
	cout<<" pass"<<endl;
}


int main(int argv,char** argc)
{
	TestCSInit();
	TestCSOperatorEq();
	TestCSOperatorPlus();
	TestCSOperatorPlusEq();
	TestCSOperatorCmp();
	TestCSIsEmpty();
	TestCSToString();
	TestCSOperatorToDefType();
	TestCSOperatorToStream();
	return 0;
}*/
