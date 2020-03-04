all: test.cpp RomanConverter.h RomanConverter.cpp
	g++ -o test test.cpp RomanConverter.h RomanConverter.cpp

clean:
	rm -f test
