/*
This program will compute the central and variation tendencies for a set of data
Central Tendencies
  -mean
  -median
  -mode

Variation
  -Variance
  -Standard Deviation
  -Range (max - min)
  -Interquartile Range
  -Coefficient of Variation

Input a file as a vector, then calculate everything using vector methods.


*/
#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<string>
#include<cmath>

using namespace std;
int main() {
	//Declaring variables
	ifstream myFile;
	vector<double> dataInput;
	int i, count;
	double data;
	
	//Opening input file
	myFile.open("C:/Users/runyon160/OneDrive - Marshall University/In class stats/Stats.txt");

    //Reading first number in input file,
	//placing it in a vector
	i = 0;//Counter or my vector index

	myFile >> data;

	dataInput.push_back(data);
	cout << dataInput.at(i);
	 
	while (!myFile.eof()) {

		i++;
		myFile >> data;
	    dataInput.push_back(data);

		cout << endl << dataInput.at(i);
		

	}
	count = i;






	return 0;
}