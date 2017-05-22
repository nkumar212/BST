MAIN = main.cpp
TREE = binaryTreeNode.cpp
FUNCT = functions.cpp

CC = g++
STD = -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)


p1 : 
	$(CC) $(STD) $(LFLAGS) $(MAIN) $(TREE) $(FUNCT) -o p1

tree:
	$(CC) $(STD) $(LFLAGS) $(TREE)

funct:
	$(CC) $(STD) $(LFLAGS) $(FUNCT)
	
clean:
	\rm  p1	
