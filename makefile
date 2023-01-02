linktlist: linklist.o llist.o
	g++ -o linklist linklist.o llist.o

linklist.o: linklist.cpp llist.hpp
	g++ -c linklist.cpp

llist.o: llist.cpp llist.hpp
	g++ -c llist.cpp

