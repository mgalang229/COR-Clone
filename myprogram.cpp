#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

void setWindow(int Width, int Height);

int main(){
	
	setWindow(160, 50);
	int num1, num2, num3, num4;
	char name[255], college[255], program[255];
	double num5, num6, num7, num8, num9, num10, num11;
	
	cout << endl << endl;
	cout << "\tEnter Term: ";
	cin >> num1;
	
	cout << "\tEnter School Year: ";
	cin >> num2;
	
	cout << "\tEnter Student#: ";
	cin >> num3;
	
	cin.ignore();
	cout << "\tEnter Name: ";
	gets(name);
	
	cout << "\tEnter College: ";
	gets(college);
	
	cout << "\tEnter Year Level: ";
	cin >> num4;
	
	cin.ignore();
	cout << "\tEnter Program: ";
	gets(program);
	cout << endl << endl << endl;
	
	cout << "\tTerm: " << num1;
	cout << "\tSchool Year: " << num2 << endl << endl;
	
	cout << "\tStudent#: " << num3;
	cout << "\t\t\tCollege: " << college;
	cout << "\t\tProgram: " << program << endl;
	cout << "\tName: " << name;
	cout << "\tYear Level: " << num4 << " 1st Term, SY " << num2;
	
	cout << endl << endl;
	cout << "\tCourses" << "\t\t\t     Title" << "\t\t\tSection" << "\t  Unit" << "\tDays" << "\t\tTime" << "\t\t\t\tRoom" << endl;
	cout << "\tCCS0001" << "\t\t INTRODUCTION TO COMPUTING (LEC)" << "\tN04" << "\t  2" << "\tTH" << "\t\t07:00:00-09:40:00" << "\t\tF504" << endl;
	cout << "\tCCS0001L" << "\t INTRODUCTION TO COMPUTING (LAB)" << "\tN04" << "\t  1" << "\tM" << "\t\t07:00:00-09:50:00" << "\t\tF1211" << endl;
	cout << "\tCCS0003" << "\t\t COMPUTER PROGRAMMING 1 (LEC)" << "\t\tN04" << "\t  2" << "\tT" << "\t\t07:00:00-09:40:00" << "\t\tT711" << endl;
	cout << "\tCCS0003L" << "\t COMPUTER PROGRAMMING 1 (LAB)" << "\t\tN04" << "\t  1" << "\tT" << "\t\t10:00:00-12:50:00" << "\t\tT610" << endl;
	cout << "\tGED0004" << "\t\t PHYSICAL EDUCATION 1" << "\t\t\tN04" << "\t  3" << "\tF/T" << "\t\t14:00:00-15:50:00" << "\t\tGYM" << endl;
	cout << "\tGED0009" << "\t\t READINGS IN PHILIPPINE HISTORY" << "\t\tN04" << "\t  3" << "\tM/TH" << "\t\t10:00:00-11:50:00" << "\t\tF504" << endl;
	cout << "\tGED0011" << "\t\t SCIENCE, TECHNOLOGY AND SOCIETY" << "\tN04" << "\t  3" << "\tM/TH" << "\t\t13:00:00-14:50:00" << "\t\tF504" << endl;
	cout << "\tGED0085" << "\t\t GENDER AND SOCIET" << "\t\t\tN04" << "\t  3" << "\tW/W" << "\t\t13:00:00-14:50:00" << "\t\tF504" << endl;
	cout << "\tNSTP1" << "\t\t CIVIC WELFARE TRAINING SERVICE 1" << "\tN04" << "\t  0" << "\tF" << "\t\t08:00:00-12:00:00" << "\t\tF704" << endl;
	cout << endl << "\tTOTAL UNITS 18" << endl << endl;
	
	cout << "\t--------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	
	cout << "\tTution Fee (18)" << "\t\t\t\t\t\t\t\t\t\t\t";
	cin >> num5;
	cout << endl;
	
	cout << "\tMiscellaneous Fee" << "\t\t\t\t\t\t\t\t\t\t";
	cin >> num6;
	cout << endl;
	
	cout << "\tAdmission Fee" << "\t\t\t\t\t\t\t\t\t\t\t";
	cin >> num7;
	cout << endl;
	
	cout << "\tITE Computer Laboratory Fee (CCS0001)" << "\t\t\t\t\t\t\t\t";
	cin >> num8;
	cout << endl;
	
	cout << "\tITE Computer Laboratory Fee (CCS0003)" << "\t\t\t\t\t\t\t\t";
	cin >> num9;
	cout << endl;
	
	cout << "\tNSTP Fee (NSTP1)" << "\t\t\t\t\t\t\t\t\t\t";
	cin >> num10;
	cout << endl;
	
	num11 = num5 + num6 + num7 + num8 + num9 + num10;
	cout << "\tTOTAL ASSESSMENT" << "\t\t\t\t\t\t\t\t\t\t";
	cout << fixed;
	cout << setprecision(2) << num11;
	cout << endl;	
	
	cout << "\t";
	system("pause>0");
	return 0;
	
}

void setWindow(int Width, int Height){
	
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;
	
	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;
	
	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(Handle, coord);
	SetConsoleWindowInfo(Handle, TRUE, &Rect);
	
}
