#include<iostream>
#include"Pair.h"
using namespace std;
template<typename T1,typename T2>
T1 GetMax(T1 x1,T1 y1)
{
	if(x1>y1)
	{
		return x1;
	}
	else
	{
		return y1;
	}
}
template<typename R1,typename R2>
R1 GetMin(R1 x,R2 y)
{
	if(x<y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
  /*int i=5, j=6, k;// 1st main
  long l=10, m=5, n;
  //k=GetMax<int>(i,j); //with type
  //n=GetMin<long>(l,m); //with type
  k=GetMax(i,j);
  n=GetMin(l,m);
  cout << k << endl;
  cout << n << endl;*/
  //char i='Z';//2nd main
  //int  j=6, k;
  //long l=10, m=5, n;
  //k=GetMax<int,long>(i,m);
  //n=GetMin<int,char>(j,l);
  ////k=GetMax(i,m); //Giving error of ambiguity
  ////n=GetMin(j,l);
  //cout << k << endl;
  //cout << n << endl;
  //class main
   Pair <double> myobject(1.012, 1.01234);
   cout<<myobject.GetMax()<<endl;
   cout<<myobject.GetMin()<<endl;
   cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
 


  system("Pause");
}
