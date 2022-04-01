all: bin/hello

bin/hello: build/hello.o build/main.o
           gcc -Wall -I src -o bin/hello build/hello.o build/main.o
build/hello.o: src/hello.c
			gcc -Wall -I src -c -o build/hello.o src/hello.c
build/main.o: src/main.c
			gcc -Wall -I src -c -o build/main.o src/main.c

test: bin/test

bin/test: build/hello.o build/test.o
		gcc -Wall -I src -o bin/test build/hello.o build/test.o

build/test.o: test/test.c
		gcc -Wall -I src -c -o build/test.o test/test.c

.PHONY: test clean

clean:
		rm -f bin/* build/*.o