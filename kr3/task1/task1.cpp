
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <fstream>
#include "Header.h"
using namespace std;


int main() {


	ifstream fin("IN.txt");
	char arr[100];

	 int i = 0;

	Person pers[10];
 try {
        if (!fin) {

            throw "Uh oh, SomeText.txt could not be opened for reading!" ;

        }
	while (fin.getline(arr, 100))
	{
		char* pch;
		pch = strtok(arr, ",");
		int j = 1;
		while (pch != NULL)
		{
			switch (j)
			{
			case 1:
				strcpy(pers[i].LastName, pch);
				j++;
				break;
			case 2:
				pers[i].salary = atoi(pch);
				j++;
				break;
			case 3:
				strcpy(pers[i].department, pch);
				j++;
				break;
			case 4:
				pers[i].experience = atoi(pch);
				j=1;
				break;
			default:
				break;
			}
			pch = strtok(NULL, ",");
		}

		i++;

	}
	int len = i;
	fin.close();

	int max = pers[0].salary;
	int ind = 0;
	for (int j = 1;j < i;j++) {
		if (pers[j].salary > max) {
			max = pers[j].salary;
			ind = j;
		}
	}
	cout << "A person with the highest salary: " << endl;
	cout << pers[ind].LastName << " " << pers[ind].salary << " " << pers[ind].department << " " << pers[ind].experience;


	for (int i = 0; i < len; ++i) {
		for (int j = i; j < len; ++j) {
			if (pers[i].salary == pers[j].salary && pers[i].experience > pers[j].experience) {
				Person temp = pers[i];
				pers[i] = pers[j];
				pers[j] = temp;
			}
			else if (pers[i].salary > pers[j].salary) {
				Person temp = pers[i];
				pers[i] = pers[j];
				pers[j] = temp;
			}
		}
	}

	
	ofstream fout;
	fout.open("OUT.txt");
	for (int j = 0;j < len;j++) {
		fout << pers[j].LastName << " " << pers[j].salary << " " << pers[j].department << " " << pers[j].experience;
		cout << endl;
	
	}
 
   fout.close();
 }
	catch (const char* exception) 
    {
        std::cerr << "Error: " << exception << '\n';
    }
	return 0;
}
