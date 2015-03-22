qsc : qs.c
	gcc -o qsc qs.c
qsj : QuickSort.java
	javac QuickSort.java
time : qsc qsj qs.py
	./genres.sh
clean:
	rm -f qsc QuickSort.class
