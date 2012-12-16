all: ace_log_severity_level ace_log_format ace_log_macro \
	ace_log_severity_mask ace_log_stderr ace_log_syslog

ace_log_severity_level: ace_log_severity_level.cpp
	g++ -g -o ace_log_severity_level ace_log_severity_level.cpp $(shell pkg-config --cflags --libs ACE)

ace_log_format: ace_log_format.cpp
	g++ -g -o ace_log_format ace_log_format.cpp $(shell pkg-config --cflags --libs ACE)

ace_log_macro: ace_log_macro.cpp
	g++ -g -o ace_log_macro ace_log_macro.cpp $(shell pkg-config --cflags --libs ACE) -DACE_NTRACE=0

ace_log_severity_mask: ace_log_severity_mask.cpp
	g++ -g -o ace_log_severity_mask ace_log_severity_mask.cpp $(shell pkg-config --cflags --libs ACE) -DACE_NTRACE=0

ace_log_stderr: ace_log_stderr.cpp
	g++ -g -o ace_log_stderr ace_log_stderr.cpp $(shell pkg-config --cflags --libs ACE)

ace_log_syslog: ace_log_syslog.cpp
	g++ -g -o ace_log_syslog ace_log_syslog.cpp $(shell pkg-config --cflags --libs ACE)

clean:
	rm ace_log_severity_level ace_log_format ace_log_macro \
		ace_log_severity_mask ace_log_stderr ace_log_syslog
