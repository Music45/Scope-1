compile: main.c 
	 gcc main.c -o Music

run: Music
	 ./Music

clean: Music
	 rm Music