#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#define elif else if

char findGrade(float Score)
{
	char Grade;
	bool A,B,C,D,F;
	A = ( Score > 90 );
	B = ( Score > 75 && Score <= 90);
	C = ( Score > 60 && Score <= 75);
	D = ( Score > 45 && Score <= 60);
	F = ( Score <= 45);

	if(A) Grade = 'A';
	elif (B) Grade = 'B';
	elif (C) Grade = 'C';
	elif (D) Grade = 'D';
	elif (F) Grade = 'F';

	return Grade ;
}


int main()
{
	int N;
	cout << "Enter the number of students: ";
	cin >> N;
	cin.ignore();
	string name[N];
	float score[N];	
	
	for(int i = 0; i < N ;i++){
		cout << "Name of student " << i+1 << ": ";
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		cin.ignore();
	}
	
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	for(int i =0; i < N; i++)
	{
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
