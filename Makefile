GBDK_PATH = /opt/gbdk
CC = $(GBDK_PATH)/bin/lcc

# Project Name
PROJECT = dino_recreation

# Directories
SRCDIR = src
OBJDIR = obj
BUIILDDIR = build

# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.rel)

# Final ROM target
ROM = $(BUIILDDIR)/$(PROJECT).gb

# Default target
all: $(BUIILDDIR) $(OBJDIR) $(ROM)

# Create directories automatically
$(BUIILDDIR):
	mkdir -p $(BUIILDDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

# Link object files into the final Game Boy ROM
$(ROM): $(OBJS)
	$(CC) -o $@ $^

# Compile C files into .rel object files inside obj/
$(OBJDIR)/%.rel: $(SRCDIR)/%.c
	$(CC) -c -o $@ $<

# Clean build artifacts
clean:
	rm -rf $(OBJDIR) $(BUIILDDIR)
