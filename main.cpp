// lab11.cpp : Defines the entry point for the console application.
//

#include"lab11.h"


template <class T>
T getmax(T &a1,T &a2)
{
	return (a1>a2) ? a1:a2;
}

template <class Y>
Y getmin(Y &w1,Y &w2)
{
	return (w1<w2) ? w1:w2;
}
template <class A, class B> 
int  getmax(A s,B d)
{
	return (s>d) ? s:d;
}
template <typename C, typename D> 
int  getmin(C s,D d)
{
	return (s<d) ? s:d;
}




int main()
{
	// int i=5, j=6, k;
 // long l=10, m=5, n;
  //k=getmax<int>(i,j);
 // n=getmin<long>(l,m);
 // cout << k << endl;
 // cout << n << endl;

	// int i=5, j=6, k;
 // long l=10, m=5, n;
 // k=getmax/*<int>*/(i,j);
 // n=getmin/*<long>*/(l,m);
 // cout << k << endl;
 // cout << n << endl;
  //cout<<endl;

	//char i='Z';
 // int  j=6, k;
 // long l=10, m=5, n;
 // k=getmax<int,long>(i,m);
 // n=getmin<int,char>(j,l);
 // cout << k << endl;
 // cout << n << endl;

	//char i='Z';
 // int  j=6, k;
 // long l=10, m=5, n;
 // k=getmax/*<int,long>*/(i,m);
 // n=getmin/*<int,char>*/(j,l);
 // cout << k << endl;
 // cout << n << endl;

	/////////////////////////////Exercise 2/////////////////////////////
	Pair<double> myobject (1.012, 1.01234);
	cout<<myobject.getmax()<<endl;
    cout<<myobject.getmin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)


	return 0;
}

