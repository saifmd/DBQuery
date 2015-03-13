====================================================================================
  System Info

OS : Ubuntu 14.04 x86_64

Compiler : g++ 4.8.2

CPP Libraries : Boost(version-1.54) , Boost Spirit(version-0x2053)

Steps:

1. cd to src directory and run the command "make clean;make" to execute the makefile.
2. This will build the binary "dbquery" in src directory.
3. Run ./dbquery to execute the binary and then enter the input query.
4. Sample input/output is given below: 

=====================================================================================

./dbquery
Type a SQL expression 
 (e.g.  select * from employee; ) 
 Type [q or Q] to quit

select * ;
parsing failed, invalid query

select * from employee;
parsing succeeded
100 Naveen 6000
501 Sumit 3000
511 Jitesh 9000
521 Abhinav 5000
531 Vipin 15000
541 Abhilekh 2000

select * from employee order by salary;
parsing succeeded
541 Abhilekh 2000
501 Sumit 3000
521 Abhinav 5000
100 Naveen 6000
511 Jitesh 9000
531 Vipin 15000
