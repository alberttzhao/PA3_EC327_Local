CC=g++ -std=c++11 -g

OBJS= TestCheckPoint2.o Point2D.o Vector2D.o GameObject.o Building.o PokemonCenter.o PokemonGym.o

default: PA3

PA3: $(OBJS)
	$(CC) -o PA3 $(OBJS) 

Vector2D.o: Vector2D.cpp Vector2D.h
	$(CC) -c Vector2D.cpp -o Vector2D.o 
	
Point2D.o: Point2D.cpp Point2D.h Vector2D.h
	$(CC) -c Point2D.cpp -o Point2D.o 

GameObject.o: GameObject.cpp GameObject.h Point2D.h Vector2D.h
	$(CC) -c GameObject.cpp -o GameObject.o 
	
Building.o: Building.cpp Building.h
	$(CC) -c Building.cpp -o Building.o

PokemonCenter.o: PokemonCenter.cpp PokemonCenter.h GameObject.h Point2D.h
	$(CC) -c PokemonCenter.cpp -o PokemonCenter.o
	
PokemonGym.o: PokemonGym.cpp PokemonGym.h GameObject.h Point2D.h
	$(CC) -c PokemonGym.cpp -o PokemonGym.o

checkpoint2: TestCheckPoint2.cpp Point2D.o Vector2D.o GameObject.o Building.o PokemonCenter.o PokemonGym.o
	$(CC) -o checkpoint2.exe TestCheckPoint2.cpp Point2D.o Vector2D.o GameObject.o Building.o PokemonCenter.o PokemonGym.o

clean: 
	rm $(OBJS) PA3 