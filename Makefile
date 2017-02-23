# Makefile for MessagingNode

-include config.mk


%.o: %.c 
	$(CC) -c $(CFLAGS) $< -o $@

MessagingNode: MessagingNode.o 
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	rm -f *.o
	rm -f *.a *.so
	rm -f MessagingNode


.PHONY: all clean test

