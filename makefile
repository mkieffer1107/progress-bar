default:
	g++ -o demo progressbar.cpp demo.cpp

demo:
	g++ -o demo progressbar.cpp demo.cpp
	./demo

clean:
	rm demo
