app.out: app.o main.o
	g++ app.o main.o -o app.out 
	mv *.o ../bin/.
	mv *.out ../bin/.

main.o: main.cpp
	g++ main.cpp -c -o main.o

app.o: app.h app.cpp
	g++ app.cpp -c -o app.o

run: app.out
	./../bin/app.out
	
submit:  
	rm bin/*.o; rm bin/*.out;
	mkdir wooley;
	cp src/* wooley/.;
	tar czfv wooley.tgz wooley;
	cp wooley.tgz ~tiawatts/cs360drop
	rm -r wooley
clean:
	rm bin/*.o; rm bin/*.out
