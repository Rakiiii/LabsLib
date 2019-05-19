#include <cassert>
#include <sstream>
#include <list>
#include <vector>
#include <array>

#include "../../main/headers/basicSheet.hpp"
#include "../../main/headers/customStirng.hpp"
#include "../../main/headers/customVector.hpp"
#include "../../main/headers/date.hpp"
#include "../../main/headers/dynamicArr.hpp"
#include "../../main/headers/painter.hpp"
#include "../../main/headers/templateSheet.hpp"



using namespace std;

	/*
	 * Basic Sheet Test
	 */

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
        assert(mBasicSheet[1] == obj2 && mBasicSheet[0] == obj1);
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
        Date newDate(13,11,2013);
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
        cout<<"[test] basic sheet deleteAt..."<<flush;
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

	/*
	 * Custom String Test
	 */

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
        cout<<"[test] custom string operator+ for custom string..."<<flush;
        obj3 = obj1 + obj2;
        assert( obj3.toString() == (obj1.toString() + obj2.toString() ) );
        cout<<" pass"<<endl;
}

	/*
	 * Custom string test 
	 */


void TestCSOperatorPlusEq()
{
        String obj1("fa"),obj2("fo") ,obj3("fa");
        cout<<"[test] custom string operator+=..."<<flush;
        obj1 +=obj2;
        assert( obj1.toString() == (obj3.toString() + obj2.toString() )  );
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
        cout<<"[test] custom string isEmpty..."<<flush;
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

	/*
	 *Custom Vector Test
	 */

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
        assert( mCustomVector[1] == 1 && mCustomVector[2] == 2 && mCustomVector[3] == 3);
        cout<<" pass"<<endl;
}


void TestCVPopBack()
{
        CustomVector<int> mCustomVector;
        mCustomVector.push_back(1);
        mCustomVector.push_back(2);
        mCustomVector.push_back(3);
        cout<<"[test] custom vector popback..."<<flush;
        assert( mCustomVector.pop_back() == 3 && mCustomVector.pop_back() == 2 && mCustomVector.pop_back() == 1);
        cout<<" pass"<<endl;
}

void TestCVFront()
{
        CustomVector<int> mCustomVector;
        mCustomVector.push_back(1);
        mCustomVector.push_back(2);
        mCustomVector.push_back(3);
	mCustomVector[0] = 4;
        cout<<"[test] custom vector front..."<<flush;
        assert(mCustomVector.front() == 4);
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


	/*
 	* Date test
 	*/

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
        catch(.../*DateException& e*/)
        {
                cout<<" pass"<<endl;
        }
        cout<<"[test] set correct date with std::string..."<<flush;
        assert(obj.setDate(string("12/11/2018")).toString() == str);
        cout<<" pass"<<endl;
        cout<<"[test] set incorrect date with std::string..."<<flush;
        try
        {
                obj.setDate(string("32/12/2018"));
        }
        catch(.../*DateException& e*/)
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
        assert( obj3 <= obj1);
        cout<<" pass"<<endl;
        cout<<"[test] operator <= day less..."<<flush;
        assert( obj1 <= obj4);
        cout<<" pass"<<endl;
        cout<<"[test] operator <= year greater..."<<flush;
        assert( !(obj2 <= obj1));
        cout<<" pass"<<endl;
        cout<<"[test] operator <= month greater..."<<flush;
        assert( !(obj1 <= obj3));
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
        assert( !(obj1 >= obj2));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= month less..."<<flush;
        assert( !(obj3 >= obj1));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= day less..."<<flush;
        assert( !(obj1 >= obj4));
        cout<<" pass"<<endl;
        cout<<"[test] operator >= year greater..."<<flush;
        assert( obj2 >= obj1);
        cout<<" pass"<<endl;
        cout<<"[test] operator >= month greater..."<<flush;
        assert( obj1 >= obj3);
        cout<<" pass"<<endl;
        cout<<"[test] operator >= day greater..."<<flush;
        assert( obj4 >= obj1);
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

	/*
 	* Dynamic Array test 
 	*/
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

	/*
	 *Painter test
	 */

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
        if(obj2)assert(1);
        else assert(0);
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

	/*
	 *Template Sheet test
	 */

void TestTemplateSheetInit()
{
        Date mDate(12,12,2012);
        cout<<"[test] template sheet init..."<<flush;
        Sheet<int,list> mSheet2;
        Sheet<int,vector> mSheet3;
        Sheet<int,list> mSheet(mDate,24);
        cout<<" pass"<<endl;
}

void TestTemplateSheetGetDate()
{
        Date mDate(12,12,2012);
        Sheet<int,list> mSheet(mDate,12);
        cout<<"[test] template sheet get date..."<<flush;
        assert(mDate == mSheet.getDate() );
        cout<<" pass"<<endl;
}

void TestTemplateSheetSetDate()
{
        Date mDate(12,12,2012) , newDate(14,12,2014);
        Sheet<int,list> mSheet(mDate,12);
        cout<<"[test] template sheet set date..."<<flush;
        mSheet.setDate(newDate);
        assert( newDate == mSheet.getDate() );
        cout<<" pass"<<endl;
}

void TestTemplateSheetInsert()
{
        Date mDate(12,12,2012);
        Sheet<int,list> mSheet(mDate,12);
        cout<<"[test] template sheet insert..."<<flush;
        mSheet.insert(1,0);
        mSheet.insert(2,1);
        mSheet.insert(3,2);
        cout<<" pass"<<endl;
}

void TestTemplateSheetOperatorIndex()
{
        Date mDate(12,12,2012);
        Sheet<int,vector> mSheet(mDate,12);
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
        Sheet<int,vector> mSheet(mDate,12);
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
        Sheet<int,vector> mSheet(mDate,12);
        mSheet.insert(1,0);
        mSheet.insert(2,1);
        mSheet.insert(3,2);
        cout<<"[test] template sheet search..."<<flush;
        assert( *(mSheet.search(1)) == 1 );
        cout<<" pass"<<endl;
}

void TestTemplateSheetReadFromFile()
{
	Date mDate;
	Sheet<Painter,vector> mSheet;
	cout<<"[test] template sheet read from file..."<<flush;
	try
	{
		mSheet.readFromFile(std::string("painter.txt"));
		cout<<" pass"<<endl;
	}
	catch(...)
	{
		assert(false);	
	}
}

void TestTemplateSheetSaveToFile()
{
	Sheet<int,vector> mSheet;
	cout<<"[test] template sheet save to file..."<<flush;
	mSheet.push(1);
	mSheet.push(2);
	try
	{
		mSheet.saveToFile(std::string("test.txt"));
		Sheet<int,vector> nSheet;
		nSheet.readFromFile(string("test.txt"));
		assert(mSheet[1] == nSheet[0] && mSheet[0] == nSheet[1]);
		cout<<" pass"<<endl;
	}
	catch(...)
	{
		assert(false);
	}
}

void TestTemplateSheetPainterInit()
{
	Date mDate(12,12,2012);
        char const* ptr2[2] = {"ptr1","ptr2"};
        Painter obj1("name",89870862447,"email","adress",ptr2,2) , obj2("name",89870862447,"email","adress",ptr2,2) , obj3(obj1);
        Painter obj4("name1",89870862447,"email","adress",ptr2,2);
	Sheet<Painter> mSheet(mDate,12);
	vector<Painter> mVector;
	mVector.push_back(obj1);
	mVector.push_back(obj2);
	cout<<"[test] template sheet painter insert..."<<flush;
	mSheet.push(obj2);
	mSheet.push(obj4);
	mSheet.insert(obj1,0);
	assert(mSheet[0] == obj1 && mSheet[1] == obj2);
	cout<<" pass"<<endl;
}

	/*
	 *Main test start
	 */

int main()
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


	TestBSInit();
        TestBSInsert();
        TestBSOperatorIndex();
	TestBSReplace();
        TestBSDeleteAt();
        TestBSGetDate();
        TestBSSetDate();
        TestBSHeapSort();


        TestCSInit();
	TestCSOperatorEq();
        TestCSOperatorPlus();
        TestCSOperatorPlusEq();
        TestCSOperatorCmp();
        TestCSIsEmpty();
        TestCSToString();
        TestCSOperatorToDefType();
	TestCSOperatorToStream();


        TestCVInit();
        TestCVPushBack();
        TestCVPopBack();
        TestCVBack();
        TestCVFront();


          function<int(Painter&,Painter&)> f(compare);
          TestDAInit();
          TestDAOperatoIndex();
          TestDAHeapSort(&compare);
          TestPInit();
          TestPToString();
          TestPOperatorEqual();
          TestPOperatorEq();
          TestPOperatorToVoid();
          TestPOperatoInvers();
          TestPOperatorToStream();


        TestTemplateSheetInit();
        TestTemplateSheetGetDate();
        TestTemplateSheetSetDate();
        TestTemplateSheetInsert();
        TestTemplateSheetOperatorIndex();
        TestTemplateSheetReplace();
        TestTemplateSheetSearch();
	TestTemplateSheetPainterInit();
	TestTemplateSheetReadFromFile();
	TestTemplateSheetSaveToFile();
	return 0;
}

