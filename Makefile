all:
	g++ -o ace_log ace_log.cpp $(shell pkg-config --cflags --libs ACE) -DACE_NTRACE=0
