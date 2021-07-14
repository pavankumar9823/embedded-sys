Name of the project
PROJECT_NAME = Medical store management

# Output directory
BUILD = build

# All source code files
SRC =src/miniproject.c\

# All test source files
TEST_SRC = src/miniproject.c\
test/miniproject.c\
unity/unity.c\



# All include folders with header files
INC	= -Iinc\
-Iunity\
#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


# Project Output name
PROJECT_OUTPUT = $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

TEST_OUTPUT = $(call FixPath,$(BUILD)/Test_$(PROJECT_NAME).$(EXEC))

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -c 
	gcc $(SRC) $(INC) miniproject.c -lm -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test: $(BUILD)
	gcc $(TEST_SRC) $(INC) -lm -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
	
valgrind:
	valgrind ./Test_$(PROJECT_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC) project_main.c
# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build