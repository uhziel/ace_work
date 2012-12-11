all: ace_log_severity_level ace_log_format

ace_log_severity_level: ace_log_severity_level.cpp
	g++ -g -o ace_log_severity_level ace_log_severity_level.cpp $(shell pkg-config --cflags --libs ACE)

ace_log_format: ace_log_format.cpp
	g++ -g -o ace_log_format ace_log_format.cpp $(shell pkg-config --cflags --libs ACE)

clean:
	rm ace_log_severity_level ace_log_format
