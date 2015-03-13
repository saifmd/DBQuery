
#include <algorithm>
#include "Query.h"

using namespace std;

struct SalaryFunctor
{
	bool operator()(EmployeeRecord* rec1, EmployeeRecord* rec2)
	{
		return( rec1->getEmpSalary() < rec2->getEmpSalary());
	}
}SalCompare;

struct IDFunctor
{
	bool operator()(EmployeeRecord* rec1, EmployeeRecord* rec2)
	{
		return( rec1->getEmpId() < rec2->getEmpId());
	}
}IDCompare;

void DisplayRecords(vector<EmployeeRecord*>& rec)
{
	for(int i=0;i<rec.size();i++)
	{
		cout<<rec[i]->getEmpId()<<" ";
		cout<<rec[i]->getEmpName()<<" ";
		cout<<rec[i]->getEmpSalary()<<"\n";
	}
}

void SelectAll(EmployeeTable* tbl, vector<EmployeeRecord*>& rec)
{
	rec = tbl->get(); //copy all
	DisplayRecords(rec);
}
void SelectAllOrderBySal(EmployeeTable* tbl, vector<EmployeeRecord*>& rec)
{
	rec = tbl->get(); //copy all
	sort(rec.begin(), rec.end(), SalCompare);
	DisplayRecords(rec);
}
void SelectAllOrderByID(EmployeeTable* tbl, vector<EmployeeRecord*>& rec)
{
	rec = tbl->get(); //copy all
	sort(rec.begin(), rec.end(), IDCompare);
	DisplayRecords(rec);
}
