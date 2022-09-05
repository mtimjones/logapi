CC=gcc
CFLAGS=-I.
DEPS = logapi.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

logger : logapi.o test.o
	$(CC) -o logtest logapi.o test.o

clean:
	rm -f logtest logfile.txt *.o


