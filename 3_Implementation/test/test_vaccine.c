#include "unity.h"
#include <vaccine.h>

/* Modify these two lines according to the project */
#include <vaccine.h>
#define PROJECT_NAME    "Vaccine"

/* Prototypes for all the test functions */
void test_vaccine_sold(void);
void test_vaccine_stock(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_vaccine_sold);
  RUN_TEST(test_vaccine_stock);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_vaccine_sold(void) {
  TEST_ASSERT_EQUAL(22, vaccine_sold(11,11);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(30, vaccine_sold(15, 15));
}

void test_vaccine_stock(void) {
  TEST_ASSERT_EQUAL(15, test_vaccine_stock(15, 15));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(11, vaccine_stock(11, 11));
}
