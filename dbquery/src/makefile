IDIR=../inc
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj

_DEPS = EmployeeTable.h Query.h Table.h  utility.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = EmployeeTable.o Query.o main.o spirit_sql_main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	g++ -c  -o $@ $< $(CFLAGS)

dbquery: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
