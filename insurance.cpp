#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tst;
	cin>>tst;
	int x,y;
	for(int i=0;i<tst;i++){
	    cin>>x>>y;
	    if(y>x)
	    cout<<x<<endl;
	    else
	    cout<<y<<endl;
	}
	return 0;
}
