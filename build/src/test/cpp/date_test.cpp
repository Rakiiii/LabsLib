/*#include <cassert>

#include "../../main/headers/date.hpp"

using namespace std;

void TestDToString()
{
	Date obj("12/11/2010");
	cout<<"[test] correct date to string..."<<flush;
	assert(obj.toString() ==string("12/11/2010"));
	cout<<" pass"<<endl;
}

void TestDIsEmpty()
{
	Date obj;
	cout<<"[test] correct Empty..."<<flush;
	assert( !(obj.isEmpty()) );
	cout<<" pass"<<endl;
	cout<<"[test] correct nonEmpty..."<<flush;
	obj.setDate(30,1,2018);
	assert(obj.isEmpty());
	cout<<" pass"<<endl;
}

void TestDSetDate()
{
	Date obj;
	string str("12/11/2018");
	cout<<"[test] set correct date with numbers..."<<flush;
	assert( (obj.setDate(12,11,2018).toString() == str ));
	cout<<" pass"<<endl;
	cout<<"[test] set incorect date with numbers..."<<flush;
	try
	{
		obj.setDate(32,1,2018);
	}
	catch(DateException e)
	{
		cout<<" pass"<<endl;
	}
	cout<<"[test] set correct date with std::string..."<<flush;
	assert(obj.setDate(string("12/11/2018")).toString() == str);
	cout<<" pass"<<flush;
	cout<<"[test] set incorrect date with std::string..."<<flush;
	try
	{
		obj.setDate(string("32/12/2018"));
	}
	catch(DateException e)
	{
		cout<<" pass"<<endl;
	}
}


void TestDOperatorEquals()
{
	Date obj(12,11,2013);
	Date obj2(12,10,2013);
	cout<<"[test] incorrect operator equals..."<<flush;
	assert( !(obj == obj2));
	cout<<" pass"<<endl;
	obj2.setDate(12,11,2013);
	cout<<"[test] correct opeartor equals..."<<flush;
	assert( obj == obj2);
	cout<<" pass"<<endl;
}
void TetsDOperatorEq()
{
	Date obj(12,11,2012);
	Date obj2(12,11,2014);
	cout<<"[test] operator =..."<<flush;
	obj2 = obj;
	assert( obj == obj2);
	cout<<" pass"<<endl;
}

void TestDOperatorLessOrEqual()
{
	Date obj1(12,11,2012);
	Date obj2(12,11,2014);
	Date obj3(26,5,2012);
	Date obj4(26,11,2012);
	cout<<"[test] operator <= equal..."<<flush;
	assert( obj1 <= obj1);
	cout<<" pass"<<endl;
	cout<<"[test] operator <= year less..."<<flush;
	assert( obj1 <= obj2);
	cout<<" pass"<<endl;
	cout<<"[test] operator <= month less..."<<flush;
        assert( obj1 <= obj3);
        cout<<" pass"<<endl;
	cout<<"[test] operator <= day less..."<<flush;
        assert( obj1 <= obj4);
        cout<<" pass"<<endl;
	cout<<"[test] operator <= year greater..."<<flush;
	assert( !(obj2 <= obj1));
        cout<<" pass"<<endl;
	cout<<"[test] operator <= month greater..."<<flush;
        assert( !(obj3 <= obj1));
        cout<<" pass"<<endl;
        cout<<"[test] operator <= day greater..."<<flush;
        assert( !(obj4 <= obj1));
        cout<<" pass"<<endl;
}


void TestDOperatorGreaterOrEqual()
{
      	Date obj1(12,11,2012);
        Date obj2(12,11,2014);
        Date obj3(26,5,2012);
        Date obj4(26,11,2012);
        cout<<"[test] operator >= equal..."<<flush;
        assert( obj1 >= obj1);
        cout<<" pass"<<endl;
        cout<<"[test] operator >= year less..."<<flush;
        assert( !(obj1 <= obj2));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= month less..."<<flush;
        assert( !(obj1 <= obj3));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= day less..."<<flush;
        assert( !(obj1 <= obj4));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= year greater..."<<flush;
        assert( obj2 <= obj1);
        cout<<" pass"<<endl;
        cout<<"[test] operator >= month greater..."<<flush;
        assert( obj3 <= obj1);
        cout<<" pass"<<endl;
        cout<<"[test] operator >= day greater..."<<flush;
        assert( obj4 <= obj1);
        cout<<" pass"<<endl;

}

void TestDOperatorIncrement()
{
	Date obj1(31,12,2010),obj2(1,1,2011);
	obj1 ++;
	cout<<"[test] operator++..."<<flush;
	assert( obj1 == obj2 );
	cout<<" pass"<<endl;
}

void TestDOperatorDecrement()
{
	Date obj1(31,12,2010),obj2(1,1,2011);
        obj2 --;
        cout<<"[test] operator--..."<<flush;
        assert( obj1 == obj2 );
        cout<<" pass"<<endl;
}


void TestDOperatorPlus()
{
	Date obj(10,6,2005),obj2(10,7,2005);
	cout<<"[test] operator+..."<<flush;
	obj = obj + 30;
	assert( obj == obj2);
	cout<<" pass"<<endl;
}

void TestDOperatorMinus()
{
        Date obj(10,6,2005),obj2(10,7,2005);
        cout<<"[test] operator-..."<<flush;
        obj2 = obj2 -  30;
        assert( obj == obj2);
        cout<<" pass"<<endl;

}



int main(int argc, char** argv)
{
	TestDToString();
	TestDIsEmpty();
	TestDSetDate();
	TestDOperatorEquals();
	TetsDOperatorEq();
	TestDOperatorLessOrEqual();
	TestDOperatorGreaterOrEqual();
	TestDOperatorPlus();
	TestDOperatorMinus();
	TestDOperatorDecrement();
	TestDOperatorIncrement();
	return 0;
}*/

