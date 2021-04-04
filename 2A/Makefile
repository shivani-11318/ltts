PROJ_NAME = read_csv

SRC = src/openFile.c \
src/readFile.c \
src/sort.c \

TEST_SRC = test/test.c\
unity/unity.c

INC_H = inc
INC_T = unity
prod:$(SRC)
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJ_NAME)
run_prod:
	$(PROJ_NAME)
staticcheck:
	cppcheck --enable=all src/ .c inc/ .c
run_test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o test_$(PROJ_NAME)
	test_$(PROJ_NAME)