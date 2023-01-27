
app1: app1.exe
app2: app2.exe

app1.exe: file1.o file2.o main.o
	@echo Linking ..
	@gcc file1.o file2.o main.o -o app1.exe
	@echo out.exe generated successfully

app2.exe: file1.o file2.o main.o
	@echo Linking ..
	@gcc file1.o file2.o main.o -o app2.exe
	@echo out.exe generated successfully


file1.o: file1.c file1.h
	@echo Compiling file1.c
	@gcc -c file1.c -o file1.o

file2.o: file2.c file2.h
	@echo Compiling file2.c
	@gcc -c file2.c -o file2.o

main.o: main.c file1.h file2.h
	@echo Compiling main.c
	@gcc -c main.c -o main.o
	
clean:
	@IF EXIST *.o DEL /F *.o
	@IF EXIST *.o DEL /F *.exe
	@echo Clean Success.
		