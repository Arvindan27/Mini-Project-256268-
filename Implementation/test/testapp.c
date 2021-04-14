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





void test_details(void)
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

/*void test_display(void)
{
strcpy(stream.passport,"1234");
strcpy(stream.name,"isha");
strcpy(stream.email,"ishavinita@gmail.com");
strcpy(stream.destination,"Singapore");

TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
TEST_ASSERT_EQUAL_STRING("isha",stream.name);
TEST_ASSERT_EQUAL_STRING("ishavinita@gmail.com",stream.email);
TEST_ASSERT_EQUAL_STRING("Singapore",stream.destination);



}*/





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    //RUN_TEST(test_display);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}