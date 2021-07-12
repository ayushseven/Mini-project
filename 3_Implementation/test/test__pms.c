#include"unity.h"
#include"unity_internals.h"
#include"PMS.h"
#define PROJECT_NAME "PMS"

void test_distance_case1(void);
void test_distance_case2(void);
//void test_data_entry(void);
//void test_data_erase(void);
//void test_location(void);
void test_shortest_distance_case1(void);
void test_shortest_distance_case2(void);
void test_count_case2(void);
void setUp(){}
void tearDown(){}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_distance_case1);
    RUN_TEST(test_distance_case2);
    //RUN_TEST(test_data_entry);
    //RUN_TEST(test_data_erase);
    //RUN_TEST(test_location);
    RUN_TEST(test_shortest_distance_case1);
    RUN_TEST(test_shortest_distance_case2);
    RUN_TEST(test_count_case2);
    return UNITY_END();
}

void test_distance_case1(){
    TEST_ASSERT_EQUAL(0,distance(0,0));
}

void test_distance_case2(){
    TEST_ASSERT_EQUAL(14.142135,distance(10,10));
}

void test_shortest_distance_case1(void){
    int tptr[16] =  {1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
    TEST_ASSERT_EQUAL(&tptr,shortest_distance(tptr));
}

void test_shortest_distance_case2(void){
    int tptr[16] =  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,1,5};
    TEST_ASSERT_EQUAL(&tptr,shortest_distance(tptr));
}

void test_count_case2(void){
    vehicle parking_lot[1];
    vehicle *plptr = parking_lot;
    strcpy(plptr->number_plate,"");
    TEST_ASSERT_EQUAL(100,count(plptr));
}
