We chose to make a Quine Relay.
Derived from here: http://en.wikipedia.org/wiki/Quine_%28computing%29#Example

C -> C++ -> Java

Commands to run:

gcc relay.c
./a.out > Quine.cpp
g++ Quine.cpp
./a.out > Quine.java
javac Quine.java
java Quine > Quine.c
diff relay.c Quine.c
