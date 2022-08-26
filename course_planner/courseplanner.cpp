#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;
//	int slots = 40;
//	int weekdays = 5;
//	int monday = 1;
//	int tuesday = 2;
//	int wednesday = 3;
//	int thursday = 4;
//	int friday = 5;
	
class lecture{
		public:
			string user;
			string code;
			string department;
						string codem;
			string departmentm;
						string codet;
			string departmentt;
						string codew;
			string departmentw;
						string codeh;
			string departmenth;
						string codef;
			string departmentf;
	//		bool multipleday;
			int iday;
			string sday;
			int slots;
			int slot1;
			int slot2;
//			lecture(){
//				user="ahmet";
//			}
			
	};
class table{
	
	public:
		string user;
		int columns;
		int rows;
		
		

};






int main(int argc, char** argv){
	
	
	int argu;
    char* dep;
    int courses, year;
    argu = argc;
//    cout << argu << endl;
    
    
//    dep = argv[argu-1];
	
 
//    year = atof(argv[argu-2]);
    
    
    courses = atof(argv[argu-1]);
    string empty = " ----- ";
    string empty1 = empty;
	string empty2 = empty;
	string empty3 = empty;
	string empty4 = empty;
	string empty5 = empty;
	string empty6 = empty;
	string empty7 = empty;
	string empty8 = empty;
	string empty9 = empty;
	string empty10 = empty;
	string empty11 = empty;
	string empty12 = empty;
	string empty13 = empty;
	string empty14 = empty;
	string empty15 = empty;
	string empty16 = empty;
	string empty17 = empty;
	string empty18 = empty;
	string empty19 = empty;
	string empty20 = empty;
	string empty21 = empty;
	string empty22 = empty;
	string empty23 = empty;
	string empty24 = empty;
	string empty25 = empty;
	string empty26 = empty;
	string empty27 = empty;
	string empty28 = empty;
	string empty29 = empty;
	string empty30 = empty;
	string empty31 = empty;
	string empty32 = empty;
	string empty33 = empty;
	string empty34 = empty;
	string empty35 = empty;
	string empty36 = empty;
	string empty37 = empty;
	string empty38 = empty;
	string empty39 = empty;
	string empty40 = empty;
    table weekly;
	weekly.user = "Erhun Cetiner";
	for (int i = 0; i < courses; i++ ){
		
		
	
	lecture lecture1[courses];
	
	
//	weekly.columns = 5;
//	weekly.rows = 8,
	/*lecture ders;
	ders.code="lecture1";
	weekly.lecture1[i] = ders;*/
	
	
	
	
//	cout<< weekly.lecture1[i].user;
	cout << "Which department's course are you taking? " << endl;
	cin >> lecture1[i].department;
//	lecture1[i].department = "EC";

	cout << "What is the code of the course? " << endl;
//	lecture1[i].code = "308";
	cin >> lecture1[i].code;
//	lecture.multipleday = true;
//	lecture1[i].user = "Erhun Cetiner";
////////cout << "What day is your lecture? " << "Type 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday and 5 for Friday. " << endl;
////////cin >> lecture1[i].iday;





/*	{
	if (lecture1[i].iday == 1){
		lecture1[i].sday = "Monday";
		lecture1[i].codem = lecture1[i].code;
		lecture1[i].departmentm = lecture1[i].department;
		lecture1[i].codet = empty;
//		lecture1[i].departmentt = empty;
		lecture1[i].codew = empty;
//		lecture1[i].departmentw = empty;
		lecture1[i].codeh = empty;
//		lecture1[i].departmenth = empty;
		lecture1[i].codef = empty;
//		lecture1[i].departmentf = empty;
		
	}
	else if (lecture1[i].iday == 2){
		lecture1[i].sday = "Tuesday";
		lecture1[i].codet = lecture1[i].code;
		lecture1[i].departmentt = lecture1[i].department;
		lecture1[i].codem = empty;
//		lecture1[i].departmentm = empty;
		lecture1[i].codew = empty;
//		lecture1[i].departmentw = empty;
		lecture1[i].codeh = empty;
//		lecture1[i].departmenth = empty;
		lecture1[i].codef = empty;
//		lecture1[i].departmentf = empty;
	}
	else if (lecture1[i].iday == 3){
		lecture1[i].sday = "Wednesday";
		lecture1[i].codew = lecture1[i].code;
		lecture1[i].departmentw = lecture1[i].department;
		lecture1[i].codem = empty;
//		lecture1[i].departmentm = empty;
		lecture1[i].codet = empty;
//		lecture1[i].departmentt = empty;
		lecture1[i].codeh = empty;
//		lecture1[i].departmenth = empty;
		lecture1[i].codef = empty;
//		lecture1[i].departmentf = empty;
		
		
	}
	else if (lecture1[i].iday == 4){
		lecture1[i].sday = "Thursday";
		lecture1[i].codeh = lecture1[i].code;
		lecture1[i].departmenth = lecture1[i].department;
		lecture1[i].codem = empty;
//		lecture1[i].departmentm = empty;
		lecture1[i].codet = empty;
//		lecture1[i].departmentt = empty;
		lecture1[i].codew = empty;
//		lecture1[i].departmentw = empty;
		lecture1[i].codef = empty;
//		lecture1[i].departmentf = empty;
		
	}
	else if (lecture1[i].iday == 5){
		lecture1[i].sday = "Friday";
		lecture1[i].codef = lecture1[i].code;
		lecture1[i].departmentf = lecture1[i].department;
		lecture1[i].codem = empty;
//		lecture1[i].departmentm = empty;
		lecture1[i].codet = empty;
//		lecture1[i].departmentt = empty;
		lecture1[i].codew = empty;
//		lecture1[i].departmentw = empty;
		lecture1[i].codeh = empty;
//		lecture1[i].departmenth = empty;
	}
}*/
	cout << "Enter the number of slots this lecture has." << endl;
	cin >> lecture1[i].slots;	
	int slotty[lecture1[i].slots];
	int dayday[lecture1[i].slots];
	
		for (int ji = 0; ji < lecture1[i].slots;ji++){
		if (ji == 0){
			
			cout << "Enter the day of your first slot. " << endl << "Type 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, 5 for Friday. " << endl;
			
			cin >> dayday[0];
//			ji = ji + 1;

			
		}
		else {
		cout << "Enter the days of your other slots in order. " << endl << "Type 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, 5 for Friday. " << endl << "Right now you are entering the day for your slot number: " << ji + 1 << "."
<< endl;
		cin >> dayday[ji];
//		ji = ji + 1;
	}
	
	if (dayday[ji] > 5){

if (dayday[ji] > 7){
	
	cout << "A week has 7 days. " << endl;
	return 0;
	
}

else if (dayday[ji] == 6 || dayday[ji] == 7){
	
	cout << "No lectures on weekends you nerd. " << endl;
	return 0;
	
}
}
		
	}
	
	for (int ji = 0; ji < lecture1[i].slots;ji++){
		if (ji == 0){
			
			cout << "Enter the first slot of the lecture. This corresponds to the first lecture slot of the week. " << endl;
			cin >> slotty[0];
//			ji = ji + 1;
			
		}
		else {
		cout << "Enter the other slot numbers for your lectures." << endl;
		cout << "Right now you are entering the the slot for your lecture slot number: " << ji + 1 << endl;
		cin >> slotty[ji];
//		ji = ji + 1;
	}
		if (slotty[ji] > 8){
			
			cout << "There are only 8 slots in a day. Please retry." << endl;
			return 0;
		}
	}
	
//	cout << "Enter the first slot of the lecture." << endl;
//	cin >> slotty[0];
////	if (arraylen > 1){
//	
//	cout << "Enter the second slot of the lecture." << endl;
//	cin >> slotty[1];
////	}
//	
////	if (arraylen > 2){
//	
//	cout << "Enter the thirs slot of the lecture." << endl;
//	cin >> slotty[2];
//	}

//	
//	cout << "The lecture you have chosen is from the " << lecture1[i].department << " department and its code is "
//	<< lecture1[i].code << ". Your name is " << weekly.user << ". This lecture has " << lecture1[i].credits << " credits." << endl;
//	cout << lecture1[i].code << " is on " << lecture1[i].sday << ". " << endl;


int ps_exists, ps_slot, ps_day;

cout << "Does this lecture have any problem solving sessions (PS hours)? " << endl << "If yes type 1, if no type 0. " << endl;
cin >> ps_exists;

if (ps_exists == 1){
	
	cout << "Which day are the PS sessions? " << endl << "Type 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday and 5 for Friday. " << endl;
	cin >> ps_day;
	
	cout << "Which slot is your PS?" << endl;
	cin >> ps_slot;
		{
		if (ps_day == 1){
			if (ps_slot == 1){
				empty1 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 2){
				empty2 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 3){
				empty3 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 4){
				empty4 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 5){
				empty5 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 6){
				empty6 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 7){
				empty7 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 8){
				empty8 = lecture1[i].department + lecture1[i].code + "ps";
			}
			
		}
		else if (ps_day == 2){
			if (ps_slot == 1){
				empty9 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 2){
				empty10 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 3){
				empty11 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 4){
				empty12 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 5){
				empty13 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 6){
				empty14 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 7){
				empty15 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 8){
				empty16 = lecture1[i].department + lecture1[i].code + "ps";
			}
			
		}
		else if (ps_day == 3){
			if (ps_slot == 1){
				empty17 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 2){
				empty18 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 3){
				empty19 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 4){
				empty20 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 5){
				empty21 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 6){
				empty22 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 7){
				empty23 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 8){
				empty24 = lecture1[i].department + lecture1[i].code + "ps";
			}
			
		}
		else if (ps_day == 4){
			if (ps_slot == 1){
				empty25 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 2){
				empty26 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 3){
				empty27 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 4){
				empty28 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 5){
				empty29 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 6){
				empty30 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 7){
				empty31 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 8){
				empty32 = lecture1[i].department + lecture1[i].code + "ps";
			}
			
		}
		else if (ps_day == 5){
			if (ps_slot == 1){
				empty33 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 2){
				empty34 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 3){
				empty35 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 4){
				empty36 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 5){
				empty37 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 6){
				empty38 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 7){
				empty39 = lecture1[i].department + lecture1[i].code + "ps";
			}
			if (ps_slot == 8){
				empty40 = lecture1[i].department + lecture1[i].code + "ps";
			}
			
		}
		
}

}


for (int k = 0; k < lecture1[i].slots; k++){
	
//		if (lecture1[i].iday == 1){
//			if (lecture1[i].slot1 == 1 || lecture1[i].slot2 == 1){
//				empty1 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 2 || lecture1[i].slot2 == 2){
//				empty2 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 3 || lecture1[i].slot2 == 3){
//				empty3 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 4 || lecture1[i].slot2 == 4){
//				empty4 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 5 || lecture1[i].slot2 == 5){
//				empty5 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 6 || lecture1[i].slot2 == 6){
//				empty6 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 7 || lecture1[i].slot2 == 7){
//				empty7 = lecture1[i].department + lecture1[i].code;
//			}
//			if (lecture1[i].slot1 == 8 || lecture1[i].slot2 == 8){
//				empty8 = lecture1[i].department + lecture1[i].code;
//			}
//			
//		}	//BUNLAR VARDI







	
	{
		if (dayday[k] == 1){
			if (slotty[k] == 1){
				empty1 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 2){
				empty2 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 3){
				empty3 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 4){
				empty4 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 5){
				empty5 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 6){
				empty6 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 7){
				empty7 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 8){
				empty8 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			
		}
		else if (dayday[k] == 2){
			if (slotty[k] == 1){
				empty9 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 2){
				empty10 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 3){
				empty11 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 4){
				empty12 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 5){
				empty13 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 6){
				empty14 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 7){
				empty15 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 8){
				empty16 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			
		}
		else if (dayday[k] == 3){
			if (slotty[k] == 1){
				empty17 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 2){
				empty18 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 3){
				empty19 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 4){
				empty20 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 5){
				empty21 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 6){
				empty22 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 7){
				empty23 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 8){
				empty24 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			
		}
		else if (dayday[k] == 4){
			if (slotty[k] == 1){
				empty25 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 2){
				empty26 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 3){
				empty27 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 4){
				empty28 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 5){
				empty29 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 6){
				empty30 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 7){
				empty31 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 8){
				empty32 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			
		}
		else if (dayday[k] == 5){
			if (slotty[k] == 1){
				empty33 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 2){
				empty34 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 3){
				empty35 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 4){
				empty36 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 5){
				empty37 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 6){
				empty38 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 7){
				empty39 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			if (slotty[k] == 8){
				empty40 = " " + lecture1[i].department + lecture1[i].code + " ";
			}
			
		}
		
}
	
		
	}

	
	
	
//	string empty = "-----";
//	{
//	
//	if (lecture1[i].slot1 == 1 || lecture1[i].slot2 == 1){
//	
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 2 || lecture1[i].slot2 == 2){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 3 || lecture1[i].slot2 == 3){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//
//}
//	if (lecture1[i].slot1 == 4 || lecture1[i].slot2 == 4){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 5 || lecture1[i].slot2 == 5){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 6 || lecture1[i].slot2 == 6){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 7 || lecture1[i].slot2 == 7){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}
//	if (lecture1[i].slot1 == 8 || lecture1[i].slot2 == 8){
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//	std::cout << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" << "*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<"*   "  << lecture1[i].department<<lecture1[i].code <<     "   *" <<std::endl;
//	std::cout << "*****************************************************************" << std::endl;
//
//}

/*
	std::cout << "*****************************************************************" << std::endl;
	if (lecture1[i].slot1 == 1 || lecture1[i].slot2 == 1){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 2 || lecture1[i].slot2 == 2){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 3 || lecture1[i].slot2 == 3){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 4 || lecture1[i].slot2 == 4){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 5 || lecture1[i].slot2 == 5){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 6 || lecture1[i].slot2 == 6){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 7 || lecture1[i].slot2 == 7){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
	if (lecture1[i].slot1 == 8 || lecture1[i].slot2 == 8){

		std::cout << "*   "  << lecture1[i].departmentm<<lecture1[i].codem <<     "   *" << "*   "  << lecture1[i].departmentt<<lecture1[i].codet <<     "   *" <<"*   "  << lecture1[i].departmentw<<lecture1[i].codew <<     "   *" <<"*   "  << lecture1[i].departmenth<<lecture1[i].codeh <<     "   *" <<"*   "  << lecture1[i].departmentf<<lecture1[i].codef <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;
	}
	else {
	
		std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
		std::cout << "*****************************************************************" << std::endl;	}
*/
}
	
	std::cout << "*********************************************************************************" << std::endl;
	std::cout <<  weekly.user << "  ||  " << " MONDAY  **" << "  TUESDAY  **" << " WEDNESDAY **" << "  THURSDAY **" << "   FRIDAY  *" << std::endl;
	
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "09.00 - 09.50" << "  ||  "  << empty1 <<     "  *" << "*  "  << empty9 <<     "  *" <<"*  "  << empty17 <<     "  *" <<"*  "  << empty25 <<     "  *" <<"*  "  << empty33 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "10.00 - 10.50" << "  ||  "  << empty2 <<     "  *" << "*  "  << empty10 <<     "  *" <<"*  "  << empty18 <<     "  *" <<"*  "  << empty26 <<     "  *" <<"*  "  << empty34 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "11.00 - 11.50" << "  ||  "  << empty3 <<     "  *" << "*  "  << empty11 <<     "  *" <<"*  "  << empty19 <<     "  *" <<"*  "  << empty27 <<     "  *" <<"*  "  << empty35 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "12.00 - 12.50" << "  ||  "  << empty4 <<     "  *" << "*  "  << empty12 <<     "  *" <<"*  "  << empty20 <<     "  *" <<"*  "  << empty28 <<     "  *" <<"*  "  << empty36 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "13.00 - 13.50" << "  ||  "  << empty5 <<     "  *" << "*  "  << empty13 <<     "  *" <<"*  "  << empty21 <<     "  *" <<"*  "  << empty29 <<     "  *" <<"*  "  << empty37 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "14.00 - 14.50" << "  ||  "  << empty6 <<     "  *" << "*  "  << empty14 <<     "  *" <<"*  "  << empty22 <<     "  *" <<"*  "  << empty30 <<     "  *" <<"*  "  << empty38 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "15.00 - 15.50" << "  ||  "  << empty7 <<     "  *" << "*  "  << empty15 <<     "  *" <<"*  "  << empty23 <<     "  *" <<"*  "  << empty31 <<     "  *" <<"*  "  << empty39 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;
	std::cout << "16.00 - 16.50" << "  ||  "  << empty8 <<     "  *" << "*  "  << empty16 <<     "  *" <<"*  "  << empty24 <<     "  *" <<"*  "  << empty32 <<     "  *" <<"*  "  << empty40 <<     "  *" <<std::endl;
	std::cout << "*********************************************************************************" << std::endl;

}
//}
