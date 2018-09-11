cptrace:
	cc -c -fPIC cptrace.c -o cptrace.o
	cc cptrace.o -shared -o cptrace.so
	rm cptrace.o
	
example:
	cc example.c -o example
	
example2:
	cc example2.c -o example2
	
example3:
	cc example3.c -o example3
	
test:
	cc test.c -o test