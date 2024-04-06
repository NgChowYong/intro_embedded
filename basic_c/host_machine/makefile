# sample make file for project build and run on host machine
#
# syntax of rules is as follow:
# target1 [target2...]: [pre-req1 pre-req2 ......]
#     [command1
#      command2
#      ......]
#

DESTINATION=./obj

# all is the default target for make
all: main.out

main.out: main.o computation.o
	gcc -o $(DESTINATION)/$@ $(DESTINATION)/*

computation.o: ./src/computation.c
	gcc -o $(DESTINATION)/$@ -c ./src/computation.c -Iinc

main.o: main.c
	gcc -o $(DESTINATION)/$@ -c $< -Iinc

clean:
	rm $(DESTINATION)/*
