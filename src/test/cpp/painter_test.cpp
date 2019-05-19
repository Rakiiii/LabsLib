/*
#include <cassert>


#include "../../main/headers/painter.hpp"


using namespace std;

void TestPInit()
{
	string ptr[2] = {string("ptr1") , string("ptr2")};
	char const* ptr2[2] = {"ptr1","ptr2"};
	cout<<"[test] default Painter constractor..."<<flush;
	Painter obj1;
	cout<<" pass"<<endl;
	cout<<"[test] std::string Painter constractor..."<<flush;
	Painter obj2(string("name"),89870862447,string("email"),string("adress"),ptr,2);
	cout<<" pass"<<endl;
	cout<<"[test] char const* Painter constractor..."<<flush;
	Painter obj3("name",89870862447,"email","adress",ptr2,2);
	cout<<" pass"<<endl;
	cout<<"[test] copy constractor Painter..."<<flush;
	Painter obj4(obj2);
	cout<<" pass"<<endl;
}

void TestPToString()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
	Painter obj3("name",89870862447,"email","adress",ptr2,2);
	cout<<"[test] toString method..."<<flush;
	assert( obj3.toString() == string("name 89870862447 email adress 2 ptr1 ptr2 ") ) ;
	cout<<" pass"<<endl;
}


void TestPOperatorEqual()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
	Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("name",89870862447,"email","adress",ptr2,2) , obj3(obj1);
	Painter obj4("name1",89870862447,"email","adress",ptr2,2);
	
	cout<<"[test]  same ptr operator==..."<<flush;
	assert(obj1 == obj3);
	cout<<" pass"<<endl;
	cout<<"[test] same string operator==..."<<flush;
	assert(obj1 == obj2);
	cout<<" pass"<<endl;
	cout<<"[test] dif obj operator==..."<<flush;
	assert( !(obj1 == obj4) );
	cout<<" pass"<<endl;
}


void TestPOperatorEq()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
	Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2;
	cout<<"[test] operator=..."<<flush;
	obj2 = obj1;
	assert(obj2 == obj1);
	cout<<" pass"<<endl;
}


void TestPOperatorToVoid()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2;
	cout<<"[test] cast nonnull to void*..."<<flush;
	assert(obj1);
	cout<<" pass"<<endl;
	cout<<"[test] cast null to void*..."<<flush;
	if(obj2)assert(0);
	else assert(1);
	cout<<" pass"<<endl;
}

void TestPOperatoInvers()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2;
	cout<<"[test] invert null obj..."<<flush;
        assert(obj2);
        cout<<" pass"<<endl;
        cout<<"[test] invert nonnull obj..."<<flush;
        if(!obj1)assert(0);
        else assert(1);
        cout<<" pass"<<endl;
}

void TestPOperatorToStream()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2);
	stringstream ss1 , ss2;
	cout<<"[test] operator<< to stream..."<<flush;
	ss1<<obj1;
	ss2<<string("name 89870862447 email adress 2 ptr1 ptr2 ");
	assert( ss1.str() == ss2.str() );
	cout<<" pass"<<endl;
}


int main(int argv,char** argc)
{
	TestPInit();
	TestPToString();
	TestPOperatorEqual();
	TestPOperatorEq();
	TestPOperatorToVoid();
	TestPOperatoInvers();
	TestPOperatorToStream();
	return 0;
}*/





































