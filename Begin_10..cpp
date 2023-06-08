#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// (year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
	 
   int year,mount;	 
    cout<<"Input year mount :";	
	cin>>year>>mount;
	
	switch(mount) {
	case 2:(year % 4 == 0 && year % 100 !=0 || year % 400 == 0)?	
		cout<<"feb 29 dey .":cout<<"feb 28 dey .";break;
	   case 4:
	   case 6:	
	   case 9:	
	   case 11:cout<<" 30 dey mount ";break;
	    case 3:
		case 5:
		case 1:
		case 7:	
		case 8:
		case 10:
		case 12:cout<<" 31 dey mount ";break;	
	default:cout<<" Not valid ! ";
    }
	
	system("pause>0");
}