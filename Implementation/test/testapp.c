#include "test.h"
#include "unity.h"
#include<string.h>
#include "unity_internals.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


	struct driverdet
{
	char name[20];
	char start[20];
  char end[20];
	char avail[20];
	
}utes;

struct passengerdat
{
	char name[20];
	char start[20];
  char end[20];
	
}utest;




void test_driverdata(void)
{
strcpy(utes.name,"Arvindan");
strcpy(utes.start,"a");
strcpy(utes.end,"l");
strcpy(utes.avail,"yes");


TEST_ASSERT_EQUAL_STRING("Arvindan",utes.name);
TEST_ASSERT_EQUAL_STRING("a",utes.start);
TEST_ASSERT_EQUAL_STRING("l",utes.end);
TEST_ASSERT_EQUAL_STRING("yes",utes.avail);



}

void test_passengerdata(void)
{
strcpy(utest.name,"Arvindan");
strcpy(utest.start,"a");
strcpy(utest.end,"l");


TEST_ASSERT_EQUAL_STRING("Arvindan",utest.name);
TEST_ASSERT_EQUAL_STRING("a",utest.start);
TEST_ASSERT_EQUAL_STRING("l",utest.end);



}





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_driverdata);
    RUN_TEST(test_passengerdata);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}