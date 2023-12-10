C = gcc
CFLAGS = -Wall -I./includes

# Dossiers
SRCDIR = src
INCDIR = includes
BUILDDIR = build
TARGET = code.o

# Fichiers sources
SRCS = $(wildcard $(SRCDIR)/*.c)
# Fichiers objets
OBJS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SRCS))

all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(C) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(C) $(CFLAGS) main.c -o $(TARGET) $(OBJS)

clean:
	rm -rf $(BUILDDIR) $(TARGET)

.PHONY: all clean
