#include <iostream>
#include <string>
#include <fstream>
#include<bits/stdc++.h>


#pragma once

using namespace std;



void getBuyPrices(){

	
    int number_of_lines = 0;
//	string values[number_of_lines];
	std::string line;
	string word;
	
	std::ifstream myfile("input.txt");
	
	    while (getline(myfile, line)){
//	for (int i= 0; i < number_of_lines; i++){
        ++number_of_lines;}
	int tempoline;
	tempoline = number_of_lines;
	number_of_lines = 0;
	string lmao[tempoline*4];
	int ij = 0;
	
	std::ifstream myfile2("input.txt");
    while (getline(myfile2, line)){
//	for (int i= 0; i < number_of_lines; i++){
        ++number_of_lines;    
		
	
	stringstream iss(line);
 
    // Read and print each word.
	
    while (iss >> word){
		
        	
	lmao[ij] = word;
	cout << word << endl;
	++ij;

}
}
//        cout << line << endl;


//values& = lmao;

cout << "You have " << tempoline - 1 << " stocks in your portfolio." << endl << endl;
//}
//void printWords(string x){
    // word variable to store word
    
 
    // making a string stream

//      cout << lmao;  
    }
//}
//    std::string line2[number_of_lines];
//    int number_of_lines1 = 0;
//
//    while (getline(myfile, line2[number_of_lines])){
//		++number_of_lines1;
//	for (int i= 0; i < number_of_lines; i++){
//        
//        cout << line2[number_of_lines] << endl;
//        
//	
//		
////        values[i] = line;
////        cout << values[i];
//    }
//	}
//	for (int i = 0; i < number_of_lines; i++){
//        	cout << line << endl;
//		}
	
    



