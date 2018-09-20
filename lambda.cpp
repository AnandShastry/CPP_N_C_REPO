
// Author      : Anand
// Version     :
// Copyright   : 
// Description : lambdas
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> vi;

	for(int i=0;i<=9;i++)
		vi.push_back(i);

	std::for_each(vi.begin(),vi.end(),[](int j){cout<<j<<" ";});

	cout << "" << endl;
	int x=1;
	int y=7;
        
        //pass by value
	for_each(vi.begin(),vi.end(),[=](int n){
		if(n>x && n<y)
			cout<<n<<" ";
	});


	cout << "" << endl;
	return 0;
}
