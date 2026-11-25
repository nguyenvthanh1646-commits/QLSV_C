app: main.o libsinhvien.a
	gcc main.o -L. -lsinhvien -o app

main.o: main.c sinhvien.h
	gcc -c main.c

sinhvien.o: sinhvien.c sinhvien.h
	gcc -c sinhvien.c

libsinhvien.a: sinhvien.o
	ar rcs libsinhvien.a sinhvien.o

clean:
	rm -f *.o *.a app
