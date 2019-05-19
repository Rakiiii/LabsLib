#pragma once

#ifndef PICTUREPLACE_CUSTOMVECTOR_HPP

#define PICTUREPLACE_CUSTOMVECTOR_HPP

#include "dynamicArr.hpp"
#include "exceptoin.hpp" 

template <class myType>
class CustomVector : public dynArr<myType> 
{
	private:
		int cap;
	public:
		CustomVector(const size_t size = 1);
		
		virtual ~CustomVector() = default;

		CustomVector(CustomVector& ) = delete;

		CustomVector& operator=(CustomVector& ) = delete;

		void push_back(const myType);

		myType pop_back();

		myType& operator[](const int);

		myType& front();

		myType& back();

};


template<class myType>
CustomVector<myType>::CustomVector(const size_t size) : dynArr<myType>(size) , cap(0){}

template<class myType>
void CustomVector<myType>::push_back(const myType obj)
{
		cap++;
		(*this).dynArr<myType>::operator[](cap) = obj;
	
}

template<class myType>
myType CustomVector<myType>::pop_back()
{
	if(!cap)throw CustomVectorOutOfRange();

	myType retElem((*this).dynArr<myType>::operator[](cap));

	//delete &(*this).dynArr<myType>::operator[](cap);

	cap --;

	return retElem;

}

template<class myType>
myType& CustomVector<myType>::operator[](const int pos)
{
	if(pos > cap)throw CustomVectorOutOfRange();
	return (*this).dynArr<myType>::operator[](pos);
}

template<class myType>
myType& CustomVector<myType>::front()
{
 	return (*this).dynArr<myType>::operator[](0);
}

template<class myType>
myType& CustomVector<myType>::back()
{
        return (*this).dynArr<myType>::operator[](cap);
}


#endif
