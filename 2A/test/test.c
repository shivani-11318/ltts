#include "header.h"
#include "unity.h"

FILE *fptr;

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void file_exist()
{
    TEST_ASSERT_EQUAL(openFile("data.csv", "r", &fptr), SUCCESS);
    TEST_ASSERT_EQUAL(openFile("test.csv", "r", &fptr), FILE_NOT_FOUND);
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(file_exist);
    /* Close the Unity Test Framework */
    return UNITY_END();
}