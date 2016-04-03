all : clean
	gcc *.c -O2 -o md5_test

clean :
	rm -rf md5_test
