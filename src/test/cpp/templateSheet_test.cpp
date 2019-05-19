/*#include <cassert>
#include <list>
#include <vector>
#include <array>

#include "../../main/headers/templateSheet.hpp"

using namespace std;

void TestTemplateSheetInit()
{
	Date mDate(12,12,2012);
	cout<<"[test] template sheet init..."<<flush;
	Sheet<list , int> mSheet2;
	Sheet<vector,int> mSheet3;
	Sheet<list , int> mSheet(mDate,24);
	cout<<" pass"<<endl;
}

void TestTemplateSheetGetDate()
{
	Date mDate(12,12,2012);
	Sheet<list,int> mSheet(mDate,12);
	cout<<"[test] template sheet get date..."<<flush;
	assert(mDate == mSheet.getDate() );
	cout<<" pass"<<endl;
}

void TestTemplateSheetSetDate()
{
        Date mDate(12,12,2012) , newDate(14,14,2014);
        Sheet<list,int> mSheet(mDate,12);
	cout<<"[test] template sheet set date..."<<flush;
	mSheet.setDate(newDate);
	assert( newDate == mSheet.getDate() );
	cout<<" pass"<<endl;
}

void TestTemplateSheetInsert()
{
	Date mDate(12,12,2012);
        Sheet<list,int> mSheet(mDate,12);
	cout<<"[test] template sheet insert..."<<flush;
	mSheet.insert(1,0);
	mSheet.insert(2,1);
	mSheet.insert(3,2);
	cout<<" pass"<<endl;
}

void TestTemplateSheetOperatorIndex()
{
	Date mDate(12,12,2012);
        Sheet<vector,int> mSheet(mDate,12);
	mSheet.insert(1,0);
        mSheet.insert(2,1);
        mSheet.insert(3,2);
	cout<<"[test] template sheet operator[]..."<<flush;
	assert( mSheet[0] == 1 && mSheet[1] == 2 && mSheet[2] == 3);
	cout<<" pass"<<endl;
}

void TestTemplateSheetReplace()
{
        Date mDate(12,12,2012);
        Sheet<vector,int> mSheet(mDate,12);
        mSheet.insert(1,0);
        mSheet.insert(2,1);
        mSheet.insert(3,2);
	cout<<"[test] template sheet replace..."<<flush;
	mSheet.replace(12,0);
	assert( mSheet[0] == 12);
	cout<<" pass"<<endl;
}

void TestTemplateSheetSearch()
{
        Date mDate(12,12,2012);
        Sheet<vector,int> mSheet(mDate,12);
        mSheet.insert(1,0);
        mSheet.insert(2,1);
        mSheet.insert(3,2);
	cout<<"[test] template sheet search..."<<flush;
	assert( *mSheet.search(1) == 0 );
	cout<<" pass"<<endl;
}

int main(int argv,char** argc)
{
	TestTemplateSheetInit();
	TestTemplateSheetGetDate();
	TestTemplateSheetSetDate();
	TestTemplateSheetInsert();
	TestTemplateSheetOperatorIndex();
	TestTemplateSheetReplace();
	TestTemplateSheetSearch();
	return 0;
}*/
