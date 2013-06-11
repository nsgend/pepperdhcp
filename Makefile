SHELL=/bin/sh

CC = g++
CXXFLAGS = -Iincludes -std=c++03 -O2 -Wall -march=native
TARGET = pepperdhcp

SOURCES = $(shell echo src/*.cc)
HEADERS = $(shell echo includes/*.h) 
OBJECTS = $(SOURCES:.cc=.o)
BINDIR = bin

all: $(TARGET)

$(TARGET): $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(HEADERS) -o $(BINDIR)/$@ $(OBJECTS) 2>&1 

clean:
	-rm -f $(OBJECTS)
