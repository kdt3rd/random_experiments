
all: testit

dso.so: dso.cpp
	g++ -shared -fPIC -o $@ $<

driver: main.cpp
	g++ -o $@ $< -ldl

testit: dso.so driver
	./driver `pwd`/dso.so
