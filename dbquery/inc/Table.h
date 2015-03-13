#ifndef __TABLE_BASE__
#define __TABLE_BASE__

class Table
{
	public:
	Table():tableId(0){}
	Table(int Id):tableId(Id){}
	virtual void Populate(){};
	private:
	int tableId;
};


#endif
