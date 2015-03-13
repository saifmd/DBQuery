#ifndef __QUERY_BASE__
#define __QUERY_BASE__

#include "EmployeeTable.h"


void SelectAll(EmployeeTable* tbl, std::vector<EmployeeRecord*>& rec);
void SelectAllOrderBySal(EmployeeTable* tbl, std::vector<EmployeeRecord*>& rec);
void SelectAllOrderByID(EmployeeTable* tbl, std::vector<EmployeeRecord*>& rec);

#endif
