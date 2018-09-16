#filename: Makefile
CFLAGS=$(shell python3-config --cflags)
#INCDIR := $(shell python -c "from distutils import sysconfig; print(sysconfig.get_python_inc())")
LDFLAGS=$(shell python3-config --ldflags)
#LIBS := $(shell python -c "from distutils import sysconfig; print(sysconfig.get_config_var('LIBS'))")
all: hello_world cython_hello_world

hello_world:
	gcc hello_world.c -c hello_world.c
	gcc hello_world.o -o hello_world 

cython:
	cython cython_hello_world.pyx

cython_hello_world: cython
	gcc -c cython_hello_world.c $(CFLAGS) 
	gcc -shared $(LDFLAGS) -o cython_hello_world.so hello_world.o cython_hello_world.o

clean:
	rm -rf hello_world hello_world.o cython_hello_world.so cython_hello_world.c cython_hello_world.o
