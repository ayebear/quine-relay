Authors: Eric Hebert, Stuart Woodbury, Alex McCaslin

Derived from here: http://en.wikipedia.org/wiki/Quine_(computing)#Example
"Quine (computing)." Wikipedia. Wikimedia Foundation, n.d. Web. 09 Dec. 2014.

We made a Quine Relay of the following languages:
C -> C++ -> Java -> Python -> C

Commands to run:

gcc relay.c
./a.out > Quine.cpp
g++ Quine.cpp
./a.out > Quine.java
javac Quine.java
java Quine > Quine.py
python Quine.py > Quine.c
diff relay.c Quine.c
