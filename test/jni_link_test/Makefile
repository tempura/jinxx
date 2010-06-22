
.PHONY: test
test: JNITester.class libjni_tester.so
	java -classpath . -Djava.library.path=. JNITester

JNITester.h: JNITester.class
	javah -classpath . -jni JNITester
	
JNITester.class: JNITester.java
	javac JNITester.java

libjni_tester.so: jni_tester.cpp
	g++ -shared -o libjni_tester.so jni_tester.cpp
