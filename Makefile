OBJS = SugarSupplier.hpp CandyMaker.hpp ChocolateSupplier.hpp CandyBox.hpp

run: prog
	./prog

prog: main.o 
	g++ *.o -o prog

main.o: main.cpp $(OBJS)
	g++ -c main.cpp

clean:
	rm -f *.o prog