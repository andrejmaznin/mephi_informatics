app: system/main.o system/elements.o system/initialize.o system/memory.o system/task.o system/print.o
	gcc -o app system/main.o system/elements.o system/initialize.o system/memory.o system/task.o system/print.o

system/main.o: main.c headers/elements.h headers/initialize.h headers/memory.h headers/print.h headers/task.h
	cc -c main.c -o system/main.o

system/elements.o: code/elements.c headers/print.h
	gcc -c code/elements.c -o system/elements.o

system/initialize.o: code/initialize.c headers/print.h
	gcc -c code/initialize.c -o system/initialize.o

system/memory.o: code/memory.c headers/print.h
	gcc -c code/memory.c -o system/memory.o

system/task.o: code/task.c headers/print.h headers/elements.h
	gcc -c code/task.c -o system/task.o

system/print.o: code/print.c headers/print.h
	gcc -c code/print.c -o system/print.o

clean:
	rm system/*.o