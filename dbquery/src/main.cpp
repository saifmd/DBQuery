
#include <iostream>
#include "spirit_sql_main.cpp"
#include "Query.h"

using namespace std;

int main()
{
	cout << "Type a SQL expression \n" ;
	cout << " (e.g.  select * from employee; ) \n" ;
	cout << " Type [q or Q] to quit\n\n" ;

	toysql_grammar g;

	string str;

	while (getline(cin, str))
	{
		if (str[0] == 'q' || str[0] == 'Q')
			break;

		// parse the query
		if (parse(str.c_str(), g, space_p).full)
		{
			cout << "parsing succeeded\n";
			size_t found = str.find("select");
			if(found != string::npos)
			{
				EmployeeTable *tbl = new EmployeeTable();
				tbl->Populate();

				vector<EmployeeRecord*> empvec;
				found = str.find("order");
				if(found != string::npos)
				{
					if((found = str.find("salary"))!= string::npos)
						SelectAllOrderBySal(tbl, empvec);
					else if((found = str.find("id"))!= string::npos)
						SelectAllOrderByID(tbl, empvec);
				}
				else
					SelectAll(tbl, empvec);
			}
		}
		else
		{
			cout << "parsing failed, invalid query\n";
		}
	}


	return 0;
}
