OBJS = SugarSupplier.hpp CandyMaker.hpp ChocolateSupplier.hpp CandyBox.hpp

run: prog
	./prog

prog: main.o #SugarSupplier.o CandyMaker.o ChocolateSupplier.o CandyBox.o
	g++ *.o -o prog

main.o: main.cpp $(OBJS)
	g++ -c main.cpp

# SugarSupplier.o: SugarSupplier.cpp
# 	g++ -c SugarSupplier.cpp

# CandyMaker.o: CandyMaker.cpp
# 	g++ -c CandyMaker.cpp

# ChocolateSupplier.o: ChocolateSupplier.cpp
# 	g++ -c ChocolateSupplier.cpp

# CandyBox.o: CandyBox.cpp
# 	g++ -c CandyBox.cpp

clean:
	rm -f *.o prog