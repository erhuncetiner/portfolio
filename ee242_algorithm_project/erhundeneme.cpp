#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>
#include <iostream>


using namespace std;

int saat1, saat2;
char isim, yer;

void classroom(char a, int h1, int h2, char x){
	cin >> a;
	
}

int main(int argc, char** argv) /// Argument entrance. VIP.
{	

	cout << "Erhun Cetiner | 2020401279 | BOUN EE | June 6th, 2022 | EE242 Project 3" << endl << endl;
	cout << "erhundeneme Number of courses Year Department" << endl;
	
	
//	double coef[argc];
//	double coef1[argc],coef2[argc],coef3[argc];
//    cout << "You have entered " << argc
//         << " arguments:" << "\n";
  
//    for (int i = 0; i < argc; ++i){
	

//	}
       
    int argu;
    char* dep;
    int courses, year;
    argu = argc;
//    cout << argu << endl;
    
    
    dep = argv[argu-1];
	
 
    year = atof(argv[argu-2]);
    
    
    courses = atof(argv[argu-3]);
    
    cout << "You are a year " << year << " student from the " << dep << " department. " << "You will be taking " << courses << " courses this semester." << endl;
    
    string fullName, day;
    int slot1, slot2;
    string x[courses];
    double h1[courses];
    double h2[courses];
    string week[courses];
    
    
    cout << "Enter the names of the courses you are going to enlist for this semester consecutively. " << endl;
    for (int i = 0; i < courses; i++){
    	
    	getline(cin, fullName);
    	x[i] = fullName;
        	
	}
	
	for (int i = 0; i < courses; i++){
		cout << x[i] << endl;
	}
	
	int multipleday;
	int complex;
	
	for (int i = 0; i < courses; i++){
		cout << "Does " << x[i] << " have lecture hours during multiple days? " << endl;
		cout << "Type 1 if yes, 0 if no." << endl;
		cin >> multipleday;
		}
		
		if ((multipleday == 1) or (multipleday == 0)){
			complex = multipleday;
		}
		else {
			cout << "Error!" << endl;
			return 0;
		}	
	
	
	
	double dayvalue;
	for (int i = 0; i < courses; i++){
    	
    	cout << "What day is " << x[i] << " ?" << endl;
    	getline(cin, day);
    	week[i] = day;
    	if (week[i]=="monday"){
    		dayvalue = 1;
    	}
    	if (week[i]=="tuesday"){
    		dayvalue = 2;
		}
    	if (week[i]=="wednesday"){
    		dayvalue = 3;
		}
    	if (week[i]=="thursday"){
    		dayvalue = 4;
		}
    	if (week[i]=="friday"){
    		dayvalue = 5;
		}
//		else {
//			cout << "Error!" << endl;
//			return 0;
//		}
		
	}
	

	for (int i = 0; i < courses; i++){
		cout << week[i] << endl;
	}
	
	
	
	
	for (int i = 0; i < courses; i++){
    	
    	cout << "What is the first slot for " << x[i] << endl;
    	cin >> slot1;
    	h1[i] = slot1;
    	cout << "What is the last slot for " << x[i] << endl;
    	cin >> slot2;
    	h2[i] = slot2;    	
	}
	int timetable1, timetable2;
	for (int i = 0; i < courses; i++){
	timetable1 = dayvalue**h1;
	cout << timetable1 << endl;
	timetable2 = dayvalue*h2[i];
	cout << timetable2 << endl;

}
//	for (int i = 0; i < courses; i++){
//		cout << h1[i] << endl;
//		cout << h2[i] << endl;
//	}
	
//	int slotvalue1 = atoi(h1);
	
//	for (int i = 0; i < courses; i++){
//    	slotvalue1[i] = stoi(h1[i]);
//    	
//    	
//    	
//	}
//	
//	for (int i = 0; i < courses; i++){
//		
//	}
	
    
}


