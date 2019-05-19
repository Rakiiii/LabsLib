/*#include <cassert>

#include "../../main/headers/basicSheet.hpp"

using namespace std;

void TestBSInit()
{
	Date mDate(12,12,2012);
	cout<<"[test] basic sheet init..."<<flush;
	BasicSheet mBasicSheet(mDate,12);
	cout<<" pass"<<endl;
}

void TestBSInsert()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
	Date mDate(12,12,2012);
	BasicSheet mBasicSheet(mDate,6);
	cout<<"[test] basic sheet insert..."<<flush;
	mBasicSheet.insert(0,obj1);
	mBasicSheet.insert(0,obj2);
	cout<<" pass"<<endl;
}

void TestBSOperatorIndex()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
	Date mDate(12,12,2012);
        BasicSheet mBasicSheet(mDate,6);
	mBasicSheet.insert(0,obj1);
        mBasicSheet.insert(1,obj2);
	cout<<"[test] basic sheet operato[]..."<<flush;
	assert(mBasicSheet[0] == obj2 && mBasicSheet[1] == obj1);
	cout<<" pass"<<endl;
}

void TestBSGetDate()
{
	Date mDate(12,12,2012);
	BasicSheet mBasicSheet(mDate,6);
	cout<<"[test] basic sheet get data..."<<flush;
	assert( mBasicSheet.getDate() == mDate);
	cout<<" pass"<<endl;
}

void TestBSSetDate()
{
	Date mDate(12,12,2012);
	BasicSheet mBasicSheet(mDate,6);
	cout<<"[test] basic sheet set data..."<<flush;
	Date newDate(13,14,2013);
	mBasicSheet.setDate(newDate);
	assert( !( mDate == mBasicSheet.getDate() ) );
	cout<<" pass"<<endl;
}

void TestBSReplace()
{
         char const* ptr2[2] = {"ptr1","ptr2"};
         Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
         Date mDate(12,12,2012);
         BasicSheet mBasicSheet(mDate,6);
      	 mBasicSheet.insert(0,obj1);
	 cout<<"[test]  basic sheet replace..."<<flush;
	 mBasicSheet.replace(0,obj2);
	 assert( mBasicSheet[0] == obj2 );
	 cout<<" pass"<<endl; 
}

void TestBSDeleteAt()
{
        char const* ptr2[2] = {"ptr1","ptr2"};
          Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
          Date mDate(12,12,2012);
          BasicSheet mBasicSheet(mDate,6);
          mBasicSheet.insert(0,obj1);
          mBasicSheet.insert(1,obj2);
	cout<<"[test] basic sheet deleteAt..."<<endl;
	mBasicSheet.deleteAt(0);
	assert( mBasicSheet[0] == obj2);
	cout<<" pass"<<endl;
}	

void TestBSSearch()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
          Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
	  Painter obj3("name",89870862447,"reWrong","adress",ptr2,2), obj4("name",89870862447,"res","adress",ptr2,2);
          Date mDate(12,12,2012);
          BasicSheet mBasicSheet(mDate,6);
          mBasicSheet.insert(0,obj1);
          mBasicSheet.insert(1,obj2);
	  mBasicSheet.insert(2,obj4);
	  mBasicSheet.insert(0,obj3);
	cout<<"[test] basic sheet search..."<<flush;
	assert( mBasicSheet.search( string("res") ) ==  2);
	cout<<" pass"<<endl;
}


void TestBSHeapSort()
{
	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
        Painter obj3("name",89870862447,"reWrong","adress",ptr2,2), obj4("name",89870862447,"res","adress",ptr2,2);
        Date mDate(12,12,2012);
        BasicSheet mBasicSheet(mDate,6);
	mBasicSheet.insert(0,obj1);
	mBasicSheet.insert(1,obj2);
	mBasicSheet.insert(2,obj4);
	mBasicSheet.insert(0,obj3);
	cout<<"[test] basic sheet heapSort..."<<flush;
	mBasicSheet.heapSort();
	cout<<" pass"<<endl;
}


int main(int argv,char** argc)
{
	TestBSInit();
	TestBSInsert();
	TestBSOperatorIndex();
	TestBSReplace();
	TestBSDeleteAt();
	TestBSGetDate();
	TestBSSetDate();
	TestBSHeapSort();
	return 0;
}*/
