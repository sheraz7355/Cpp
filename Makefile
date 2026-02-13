SOURCES := $(wildcard *.cpp)
TARGETS := $(SOURCES:.cpp=)

.PHONY: all clean
all: $(TARGETS)

%: %.cpp
	g++ $< -o $@

clean:
	rm -f $(TARGETS)
