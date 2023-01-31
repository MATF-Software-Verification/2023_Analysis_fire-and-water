CXX = g++

CXXFLAGS = -g -I.. -I../Headers -O0
#CXXFLAGS = -g -I.. -I../Headers

a.out: *.cpp
	$(CXX) $(CXXFLAGS) $^

.PHONY: clean
	rm -f a.out *~
