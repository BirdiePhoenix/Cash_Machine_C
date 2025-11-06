PROG = main.exe 
SRC = main.c
CFLAGS = -Wall -Wextra -std=c11
LIBS = 
all: $(PROG)
$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 
clean:
	rm -f $(PROG)
.PHONY: all clean