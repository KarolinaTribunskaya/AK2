executable = program

build: main.o add.a
	g++ -o $(executable) main.o -L. -ladd

add.a: add.o
	ar cr add.a add.o

main.o add.o:
	g++ -c *.cpp

clean:
	rm -f *.o *.a $(executable)
