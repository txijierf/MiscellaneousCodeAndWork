asnmain: asnapi.o asnmain.o
	cc -o asnmain asnmain.o asnapi.o

asnmain.o: main.c bag.h bucket.h pennant.h
	cc -c asnmain.c

asnapi.o: 

clean:
	rm -f asnmain asnmain.o asnapi.o
