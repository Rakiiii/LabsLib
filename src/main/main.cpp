#include <iostream>
#include "headers/basicSheet.hpp"
#include "headers/painter.hpp"

using namespace std;

int main()
{
       	char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("xame",89870862447,"email","adress",ptr2,2);
        Date mDate(12,12,2012);
        BasicSheet mBasicSheet(mDate,6);
        cout<<"[test] basic sheet insert..."<<flush;
        mBasicSheet.insert(0,obj1);
        mBasicSheet.insert(0,obj2);
        cout<<" pass"<<endl;

	return 0;
}
