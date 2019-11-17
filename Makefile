objects = hello.o stack.o

hello: $(objects)
	gcc -o hello $(objects)

hello.o: stack.h

stack.o: list.h

.PHONY : clean
clean:
	rm hello $(objects)