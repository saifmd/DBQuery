#include <fstream>
#include <sstream>
#include "utility.h"
#include "EmployeeTable.h"

using namespace std;
// EmployeeRecord
void EmployeeRecord::operator=(EmployeeRecord& empRec)
{
	this->m_empId = empRec.m_empId;
	this->m_empName = empRec.m_empName;
	this->m_empSalary = empRec.m_empSalary;
}

int EmployeeRecord::getEmpId()
{
	return m_empId;
}
std::string EmployeeRecord::getEmpName()
{
	return m_empName;
}
double EmployeeRecord::getEmpSalary()
{
	return m_empSalary;
}


//EmployeeTable
void EmployeeTable::Populate()
{
	ifstream myfile;
	string line="", name="";
	int id=0, salary=0;
	bool flag = false;
	myfile.open("employee.txt");
	if(myfile.is_open())
	{
		while(!myfile.eof())
		{
			flag = false;
			getline(myfile, line);
			line = trim(line);
			if(line == "")
				break;
			if(line == "ID")
			{
				getline(myfile,line);
				line = trim(line);
				stringstream ss(line);
				ss >> id;
			}
			if(line == "Name")
			{
				getline(myfile,line);
				line = trim(line);
				name = line;
			}
			if(line == "Salary")
			{
				flag = true;
				getline(myfile,line);
				line = trim(line);
				stringstream ss(line);
				ss >> salary;
			}
			if(flag)
				this->get().push_back(new EmployeeRecord(id,name,salary));

		}
	}
	else
	{
		cout<<"File not found\n";
	}
}

