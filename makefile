build:
	gcc -I include -o bin/main main.c src/system.c  && ./bin/main

test:
	gcc -o bin/test test.c && ./bin/test