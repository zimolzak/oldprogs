all: factor prime pfact

factor: factor.c
	gcc $< -o $@ -lm

prime: prime.c
	gcc $< -o $@ -lm

pfact: pfact.c
	gcc $< -o $@ -lm
