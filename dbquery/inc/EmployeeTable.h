#ifndef __EMPLOYEE_TABLE__
#define __EMPLOYEE_TABLE__

#include <iostream>
#include <vector>
#include <string>
#include "Table.h"

class EmployeeRecord
{
	public:
	EmployeeRecord(int id, std::string name, double sal):
		m_empId(id), m_empName(name), m_empSalary(sal){}

	void operator=(EmployeeRecord& empRec);
	int getEmpId();
	std::string getEmpName();
	double getEmpSalary();

	private:
	int m_empId;
	std::string m_empName;
	double m_empSalary;
};

class EmployeeTable: public Table
{
	private:
	std::vector<EmployeeRecord*> empVec;
	public:
	void Populate();
	std::vector<EmployeeRecord*>& get(){ return empVec;}
};


#endif
