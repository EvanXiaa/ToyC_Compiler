all: check

OBJS = c.tab.o  \
       codegen.o  \
       cc.o    \
       c.lex.o  \

LLVMCONFIG = llvm-config
CPPFLAGS = `$(LLVMCONFIG) --cppflags` -std=c++11
LDFLAGS = `$(LLVMCONFIG) --ldflags` -lpthread -ldl -lz -lncurses -rdynamic
LIBS = `$(LLVMCONFIG) --libs`

clean:
	$(RM) -rf c.tab.cpp c.tab.hpp cc c.lex.cpp $(OBJS) *.ll *.bc

c.tab.cpp: c.y
	bison -d c.y -o c.tab.cpp

c.tab.hpp: c.tab.cpp

c.lex.cpp: c.l c.tab.hpp
	flex -o c.lex.cpp -l c.l

%.o: %.cpp
	g++ -c $(CPPFLAGS) -o $@ $< -fpermissive


cc: $(OBJS)
	g++ -ggdb -g -O0 -o $@ $(OBJS) $(LIBS) $(LDFLAGS) -fpermissive

test: cc test.c
	@ rm test.ll; rm test.bc; make > /dev/null 2> /dev/null; ./cc test.c > /dev/null 2> test.ll; llvm-as test.ll;lli test.bc 

check: cc test.c
	./cc test.c ;echo "To run the code with lli run \"make test\""
