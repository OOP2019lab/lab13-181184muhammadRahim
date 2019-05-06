#pragma once
#include<iostream>
using namespace std;
template <class T>
class Pair
{
	
public:
	friend ostream& operator<<(ostream& object,Pair &P)
	{
		object<<P.ar1[0]<<","<<P.ar1[1]<<endl;
		return object;
	}
	Pair(T s,T z)
	{
		ar1[0]=s;
		ar1[1]=z;
	}
	T GetMax()
	{
		if(ar1[0]>ar1[1])
		{
			return ar1[0];
		}
		else
		{
			return ar1[1];
		}
	}
	T GetMin();

private:
	T ar1[2];
};
template<typename R>
R Pair<R>::GetMin()
{
		if(ar1[0]<ar1[1])
		{
			return ar1[0];
		}
		else
		{
			return ar1[1];
		}

}
