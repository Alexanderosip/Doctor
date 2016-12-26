 all:
	g++ generateData.cpp goalFunction.cpp -o hello

 # all: gen.o goal.o
 	# g++ gen.o goal.o -o hello

 # gen.o: generateData.cpp
	# g++ -c generateData.cpp

 # goal.o: goalFunction.cpp
 # 	g++ -c goalFunction.cpp

 # clean:
	# rm -rf *.o hello