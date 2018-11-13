//============================================================================
// Name        : MyFirstProject.cpp
// Author      : Anand
// Version     :
// Copyright   : Your copyright notice
// Description : Namespace
//============================================================================

#include <iostream>
#include <unistd.h>
using namespace std;

namespace
{
   int k;
}

namespace z
{
   int k;
}

int main()
{
	static int j=5;
    k=5;
    z::k=2;
	while(j>0)
	{
		cout << "From A" <<::k<< endl;
		j--;
	}

	return 0;
}
