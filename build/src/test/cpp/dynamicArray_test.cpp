/*
#include <cassert>

#include "../../main/headers/dynamicArr.hpp"
#include "../../main/headers/painter.hpp"

using namespace std;


int compare(Painter& left , Painter& right)
{
	string s1 = left.toString(),s2 = right.toString();
	if(s1[0] == s2[0])return 0;
	if(s1[0] > s2[0])return 1;
	else return -1;
}

void TestDAInit()
{
	cout<<"[test] dynamic array init..."<<flush;
	dynArr<Painter> obj;
	cout<<" pass"<<endl;
}


void TestDAOperatoIndex()
{
	dynArr<Painter> obj;
	char const* ptr2[2] = {"ptr1","ptr2"};
	Painter p1("name",89870862447,"email","adress",ptr2,2),p2("name",89870862447,"email","adress",ptr2,2);
	cout<<"[test] dynamic array operator[]..."<<flush;
	obj[0] = p1;
	obj[2] = p2;
	assert(obj[0] == obj[2]);
	cout<<" pass"<<endl;
}


void TestDAHeapSort(function<int(Painter&,Painter&)> cmp)
{
	dynArr<Painter> obj;
        char const* ptr2[2] = {"ptr1","ptr2"};
	Painter p1("name",89870862447,"email","adress",ptr2,2),p2("came",89870862447,"email","adress",ptr2,2),p3("xame",89870862447,"email","adress",ptr2,2);
	obj[0] = p1;obj[1] = p2;obj[2] = p3;
	cout<<"[test] dynamic array heapsort test..."<<flush;
	obj.heapSort( cmp);
	cout<<obj[0]<<endl;
	cout<<obj[1]<<endl;
	cout<<obj[2]<<endl;
	cout<<" pass"<<endl;
}


int maint(int argv,char** argc)
{
	function<int(Painter&,Painter&)> f(compare);
	TestDAInit();
	TestDAOperatoIndex();
	TestDAHeapSort(&compare);
	return 0;
}*/

