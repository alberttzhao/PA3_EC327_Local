CC=g++ -std=c++11 -g

OBJS= TestCheckPoint1.o Point2D.o Vector2D.o GameObject.o

default: PA3

PA3: $(OBJS)
	$(CC) -o PA3 $(OBJS) 

Vector2D.o: Vector2D.cpp Vector2D.h
	$(CC) -c Vector2D.cpp -o Vector2D.o 
	
Point2D.o: Point2D.cpp Point2D.h Vector2D.h
	$(CC) -c Point2D.cpp -o Point2D.o 

GameObject.o: GameObject.cpp GameObject.h Point2D.h Vector2D.h
	$(CC) -c GameObject.cpp -o GameObject.o 

checkpoint1: TestCheckPoint1.cpp Point2D.o Vector2D.o GameObject.o
	$(CC) -o checkpoint1.exe TestCheckPoint1.cpp Point2D.o Vector2D.o GameObject.o

clean: 
	rm $(OBJS) PA3 *.exe