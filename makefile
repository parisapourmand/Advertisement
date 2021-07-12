CC := g++

all: play.out

play.out: main.o base_model.o advertiser.o ad.o

	$(CC) main.o base_model.o advertiser.o ad.o $(CCFLAGS) -o play.out

main.o: advertiser.hpp ad.hpp base_model.hpp main.cpp
	$(CC) -c main.cpp -o main.o

base_model.o: base_model.hpp base_model.cpp
	$(CC) -c base_model.cpp -o base_model.o

advertiser.o: base_model.hpp advertiser.hpp advertiser.cpp
	$(CC) -c advertiser.cpp -o advertiser.o

ad.o: advertiser.hpp base_model.hpp ad.hpp ad.cpp
	$(CC) -c ad.cpp -o ad.o

.PHONY: clean
clean:
	rm -r *.o 