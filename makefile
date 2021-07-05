all: reeve-header helloworld
	make before-build

	make helloworld


reeve-header:
	gcc -stdlib=libc++ src/reeve/macro/reeve.c -c -o bin/reeve-headers.o
	g++ -stdlib=libc++ src/reeve/headers/ios_base.cpp -c -o bin/reeve-i.o
	

before-build: 
	mkdir bin || exit

helloworld:
	g++ -stdlib=libc++ Tests/PrintHello.cpp bin/reeve-headers.o bin/reeve-i.o -o testprog