all: ace_log_severity_level

ace_log_severity_level: ace_log_severity_level.cpp
	g++ -o ace_log_severity_level ace_log_severity_level.cpp $(shell pkg-config --cflags --libs ACE)
