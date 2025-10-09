# BankSystem Makefile
# Compiler settings
CXX = clang++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra
INCLUDES = -I./include

# Directories
SRC_DIR = src
BUILD_DIR = build
DATA_DIR = data

# Source files
SOURCES = $(SRC_DIR)/main.cpp
TARGET = $(BUILD_DIR)/main

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(SOURCES)
	@echo "Building BankSystem..."
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $<
	@echo "Build complete: $@"

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(BUILD_DIR)
	@echo "Clean complete"

# Run the application
run: $(TARGET)
	@echo "Running BankSystem..."
	@cd $(BUILD_DIR) && ./main

# Debug build
debug: CXXFLAGS += -g -DDEBUG
debug: $(TARGET)

# Help
help:
	@echo "Available targets:"
	@echo "  all     - Build the application (default)"
	@echo "  clean   - Remove build artifacts"
	@echo "  run     - Build and run the application"
	@echo "  debug   - Build with debug information"
	@echo "  help    - Show this help message"

.PHONY: all clean run debug help
