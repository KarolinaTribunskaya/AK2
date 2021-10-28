build: main.o libcalculator.a
	g++ -o main main.o -L. -lcalculator

libcalculator.a: calculator.o
	ar cr libcalculator.a calculator.o

main.o calculator.o:
	g++ -c *.cpp

clean:
	rm -f *.o *.a main
