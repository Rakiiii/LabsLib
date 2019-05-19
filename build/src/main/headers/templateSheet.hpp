#ifndef PICTUREPLACE_TEMPLATESHEET_HPP

#define PICTUREPLACE_TEMPLATESHEET_HPP

#include <vector>
#include <list>
#include <forward_list>

#include "exceptoin.hpp"
#include "date.hpp"
#include <fstream>
#include "painter.hpp"



template<class myType,template<class...> class  Container = std::vector ,int defMaxSize = 1024>
class Sheet
{
	private:
		Date mDate;

		size_t maxSize;

		size_t curentSize;

		Container<myType> value;
	
	public:
		Sheet();
		Sheet(Date,const size_t);
		Sheet(Sheet&) = delete;
		
		Sheet& operator=(Sheet&) = delete;

		virtual ~Sheet() = default;

		Date getDate();
		Sheet& setDate(Date);

		myType& operator[](int);

		Sheet& insert(myType,const int);

		Sheet& push(myType);

		 typename Container<myType>::iterator search(const myType&);
		
		Sheet& replace(myType,const int);

		int getSize()const;

		Sheet& deleteAt(int);

		int readFromFile(std::string);

		int saveToFile(std::string);
};

template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>::Sheet()
{
	if(defMaxSize <= 0) throw TemplateSheetIncorrectMaxSize();
	mDate = Date();
	maxSize = defMaxSize;
	curentSize = 0;
	value = Container<myType>();
}

template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container  , defMaxSize>::Sheet(Date _date, const size_t maxSize)
{
	mDate = _date;
	this->maxSize = maxSize;
	curentSize = 0;
	value = Container<myType>();
}




	
template<class myType , template<class...> class Container, int defMaxSize>
int Sheet<myType,Container,defMaxSize>::saveToFile(std::string _file)
{
	std::fstream file;
        file.open(_file,std::ios_base::out);
        if(file.is_open())
        {       
                file<<curentSize<<std::endl;
                for(int i = 0 ;i < curentSize ; i ++)
                {
                        file<<value[i]<<std::endl;
                }
                file.close();
                return 1;
        }
        else
        {
                return -1;
        }
}


template<> 
inline int Sheet<Painter,std::vector,1024>::saveToFile(std::string _file)
{
	std::fstream file;
	file.open(_file,std::ios_base::out);
	if(file.is_open())
	{
		file<<curentSize<<std::endl;
		for(int i = 0 ;i < curentSize ; i ++)
		{
			file<<value[i].toString()<<std::endl;;
		}
		file.close();
		return 1;
	}
	else
	{
		return -1;
	}
}


template<> 
inline int Sheet<Painter,std::vector,1024>::readFromFile(std::string _file) 
{
            std::fstream f;
            f.open(_file, std::ios_base::in);
            if(f.is_open())
            {
                    int amountOfStrings;
		    f >> amountOfStrings;
                  for(int i =0 ; i < amountOfStrings;i ++)
                    {
                            std::string name,email,adress;
                            int amounOfPictures;
                            long phoneNumber;
                            f>>name>>phoneNumber>>email>>adress>>amounOfPictures;
                            std::string pictures[amounOfPictures];
                            for(int j = 0; j < amounOfPictures; j ++)
                            {
				    if(f.good()) f>>pictures[j];
				    else throw BadPainterInit();
				   
                            }
                            Painter a(name,phoneNumber,email,adress,pictures,amounOfPictures);
                            value.push_back(a);
                    }
		  curentSize += amountOfStrings;
                    f.close();
                    return 1;
            }
            return -1;
}

template<class myType , template<class...> class Container, int defMaxSize>
int Sheet<myType,Container,defMaxSize>::readFromFile(std::string _file)
{
               std::fstream f;
              f.open(_file, std::ios_base::in);
              if(f.is_open())
              {
                      int amountOfStrings;
                      f >> amountOfStrings;
                    for(int i =0 ; i < amountOfStrings;i ++)
                      {
			  myType a;
			  f>>a;
			  insert(a,0);

                      }
                    curentSize += amountOfStrings;
                      f.close();
                      return 1;
              }

	return -1;
}

template<class myType,template<class...> class  Container,int defMaxSize>
Date Sheet<myType , Container , defMaxSize>::getDate() 
{
	return mDate;
}

template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>& Sheet<myType , Container ,defMaxSize>::setDate(Date _date)
{
	mDate = _date;
	return *this;
}

template<class myType,template<class...> class  Container,int defMaxSize>
myType& Sheet<myType , Container ,defMaxSize>::operator[](int pos)
{
	if(pos < 0 || pos >= curentSize) throw TemplateSheetOutOfRange();
	auto it = value.begin();
	for(int i = 0 ; i < pos ; i ++)it++;
	return (*it);		
}

template<>
inline Painter& Sheet<Painter,std::vector,1024>::operator[](int pos)
{
	if(pos < 0 || pos >= curentSize) throw TemplateSheetOutOfRange();
	return value[pos];
}

/*template<class myType,int defMaxSize>
inline myType& Sheet<myType,std::list,defMaxSize>::operator[](int pos)
{
	if(pos < 0 || pos >= curentSize) throw TemplateSheetOutOfRange();
	auto it = value.begin();
	for(int i = 0 ; i <= pos ; i ++)it++;
	return (*it);
}

template<class myType,int defMaxSize>
myType& Sheet<myType,std::forward_list,defMaxSize>::operator[](int pos)
{
        if(pos < 0 || pos >= curentSize) throw TemplateSheetOutOfRange();
        auto it = value.begin();
        for(int i = 0 ; i <= pos ; i ++)it++;
        return (*it);
}*/


template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>& Sheet<myType, Container , defMaxSize>::insert(myType obj , const int pos)
{
	if(pos < 0 || pos >= maxSize)throw TemplateSheetOutOfRange();
	if(curentSize == maxSize)throw TemplateSheetOverflow();
	typename Container<myType>::iterator it = value.begin();
	for(int i = 0; i<pos;i++)
	{
		it++;
	}
	value.insert(it,obj);
	curentSize ++;
	return *this;
}

template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>& Sheet<myType, Container  , defMaxSize>::push(myType obj)
{
	insert(obj , curentSize);
	return *this;
}

template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>& Sheet<myType , Container , defMaxSize>::replace(myType obj, const int pos)
{
	if(pos < 0 || pos >= maxSize)throw TemplateSheetOutOfRange();
	(*this)[pos] = obj;
	return *this;
}

template<class myType,template<class...> class  Container,int defMaxSize>
typename Container<myType>::iterator Sheet<myType ,Container , defMaxSize>::search(const myType& obj)
{
	typename Container<myType>::iterator itEnd = value.end();
	for(typename Container<myType>::iterator i = value.begin(); i !=  itEnd; i ++ )
	{
		if(*i == obj) return i;
	}	
	return value.end();
}

template<class myType,template<class...> class  Container,int defMaxSize>
int Sheet<myType , Container , defMaxSize>::getSize()const
{
	return curentSize;
}

/*template<class myType,template<class...> class  Container,int defMaxSize>
Sheet<myType , Container , defMaxSize>& Sheet< myType , Container , defMaxSize>::deleteAt(int pos)
{
        if(pos < 0 || pos >= maxSize)throw TemplateSheetOutOfRange();
	auto it = value.begin();
	for(int i = 0 ; i < pos ; i ++)it++;
	value.erase(it);
	curentSize--;
        Container<myType> tmpCont = Container<myType>();
        typename Container<myType>::iterator it1 = tmpCont.begin() , it2 = value.begin();
	for(int i = 0 ; i <= pos;i++)it2++;
	for(int i = pos+1; i < curentSize ; i ++,it1++,it2++)
	{
		tmpCont.insert(it1,*it2);
	}
	it1=tmpCont.begin();
	it2 = value.begin();
	for(int i = 0 ; i < pos;i++)it2++;
	for(int i = pos; i < curentSize-1; i++)
	{
		value.insert(it2,*it1);
	}
	return *this;
}*/

template<class myType , template<class...> class Container ,int  defMaxSize>
inline Sheet<myType,Container,defMaxSize>& Sheet<myType,Container,defMaxSize>::deleteAt(int pos)
{
	if(pos < 0 || pos >= maxSize || pos > curentSize)throw TemplateSheetOutOfRange();
	auto it = value.cbegin();
	for(int i = 0 ; i < pos ; i++)it++;
	value.erase(it);
	curentSize--;
	return *this;
}
#endif

