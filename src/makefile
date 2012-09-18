P1.out: SSUPerson.o Student.o Athlete.o Employee.o Staff.o StudentEmployee.o Faculty.o Course.o main.o
	g++ Student.o Athlete.o Employee.o Staff.o StudentEmployee.o Faculty.o Course.o main.o -o P1.out 
	mv *.o ../bin/.
	mv *.out ../bin/.

main.o: main.cpp
	g++ main.cpp -c -o main.o

SSUPerson.o: SSUPerson.h SSUPerson.cpp
	g++ SSUPerson.cpp -c -o SSUPerson.o

Student.o: Student.h Student.cpp
	g++ Student.cpp -c -o Student.o

Athlete.o: Athlete.h Athlete.cpp
	g++ Athlete.cpp -c -o Athlete.o

Employee.o: Employee.h Employee.cpp
	g++ Employee.cpp -c -o Employee.o

Staff.o: Staff.h Staff.cpp
	g++ Staff.cpp -c -o Staff.o

StudentEmployee.o: StudentEmployee.h StudentEmployee.cpp
	g++ StudentEmployee.cpp -c -o StudentEmployee.o


Faculty.o: Course.o Faculty.h Faculty.cpp
	g++ Course.o Faculty.cpp Course.o -c -o Faculty.o

Course.o: Course.h Course.cpp
	g++ Course.cpp -c -o Course.o

run: P1.out
	./../bin/P1.out
	
submit:  
	rm bin/*.o; rm bin/*.out;
	mkdir wooley;
	cp src/* wooley/.;
	tar czfv wooley.tgz wooley;
	cp wooley.tgz ~tiawatts/cs360drop
	rm -r wooley
clean:
	rm bin/*.o;rm bin/*.out;rm *.o;
