CC := g++

all: final.out

final.out: main.o base_model.o advertiser.o ad.o

	$(CC) main.o base_model.o advertiser.o ad.o 
	
main.o: main.cpp
	$(CC) -c main.cpp -o main.o

base_model.o: base_model.cpp
	$(CC) -c base_model.cpp -o base_model.o

advertiser.o: advertiser.cpp
	$(CC) -c advertiser.cpp -o advertiser.o

ad.o: ad.cpp
	$(CC) -c ad.cpp -o ad.o

.PHONY: clean
clean:
	rm -r *.o 