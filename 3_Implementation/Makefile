#Target : Dependencies
#<TAB>commands

Build : main.c conversion.c unity.c test_conversion.c
	gcc main.c conversion.c unity.c test_conversion.c -o output.out

Run : Build
	./output.out

Clean: 
	rm -rf *.o *.out *.s *.i