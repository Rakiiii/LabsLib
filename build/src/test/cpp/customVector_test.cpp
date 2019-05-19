/*#include <cassert>

#include "../../main/headers/customVector.hpp"

using namespace std;

void TestCVInit()
{
	cout<<"[test] custom vector init..."<<flush;
	CustomVector<int>  mCustomVector;
	cout<<" pass"<<endl;
}


void TestCVPushBack()
{
	CustomVector<int> mCustomVector;
	cout<<"[test] custom vector pushback..."<<flush;
	mCustomVector.push_back(1);
	mCustomVector.push_back(2);
	mCustomVector.push_back(3);
	assert( mCustomVector[0] == 1 && mCustomVector[1] == 2 && mCustomVector[2] == 3);
	cout<<" pass"<<endl;
}


void TestCVPopBack()
{
	CustomVector<int> mCustomVector;
        mCustomVector.push_back(1);
        mCustomVector.push_back(2);
        mCustomVector.push_back(3);
	cout<<"[test] custom vector popback..."<<endl;
	assert( mCustomVector.pop_back() == 3 && mCustomVector.pop_back() == 2 && mCustomVector.pop_back() == 1);
	cout<<" pass"<<endl;
}

void TestCVFront()
{
	CustomVector<int> mCustomVector;
        mCustomVector.push_back(1);
        mCustomVector.push_back(2);
        mCustomVector.push_back(3);
	cout<<"[test] custom vector front..."<<flush;
	assert(mCustomVector.front() == 1);
	cout<<" pass"<<endl;
}

void TestCVBack()
{
	CustomVector<int> mCustomVector;
        mCustomVector.push_back(1);
        mCustomVector.push_back(2);
        mCustomVector.push_back(3);
	cout<<"[test] custom vector back..."<<flush;
	assert( mCustomVector.back() == 3);
	cout<<" pass"<<endl;
}

int main(int argv,char** argc)
{
	TestCVInit();
	TestCVPushBack();
	TestCVPopBack();
	TestCVBack();
	TestCVFront();
	return 0;
}*/
