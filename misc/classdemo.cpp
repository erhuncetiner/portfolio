#include <iostream>
#include <list>

using namespace std;

class youtubechannel{
	public:
		string name;
		string owner;
		int subcount;
		list<string> titles;
};



int main(){
	youtubechannel ytchan;
	ytchan.name = "yeahman";
	ytchan.owner = "Erhun Cetiner";
	ytchan.subcount = 1800;
	ytchan.titles = {"CSGO Video", "BOUN Video"};
	
	cout << "Name: " << ytchan.name << endl;  
	cout << "Owner: " << ytchan.owner << endl;  
	cout << "Subscribers: " << ytchan.subcount << endl;  
//	cout << "Videos: " << endl;  
//	for(string vtitles: ytchan.titles){
//		cout << vtitles << endl;
//	}
}
