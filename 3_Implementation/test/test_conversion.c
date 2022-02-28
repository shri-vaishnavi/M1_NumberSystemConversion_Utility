#include "unity.h"
#include "convert.h"
void setUp()
{
}

void tearDown()
{
}
void test_binary(void)

{
    TEST_ASSERT_EQUAL(0, binarytodecimal(100));
}
void test_binar(void)

{
    TEST_ASSERT_EQUAL(0, binarytooctal(100));
}
void test_bina(void)

{
    TEST_ASSERT_EQUAL(0, binarytohexadecimal(100));
}
void test_decimal(void)

{
    TEST_ASSERT_EQUAL(0, decimaltobinary(100));
}
void test_decima(void)

{
    TEST_ASSERT_EQUAL(0, decimaltooctal(100));
}
void test_decim(void)

{
    TEST_ASSERT_EQUAL(0, decimaltohexa(100));
}
void test_octal(void)

{
    TEST_ASSERT_EQUAL(0, octaltobinary(100));
}
void test_octa(void)

{
    TEST_ASSERT_EQUAL(0, octaltodecimal(100));
}
void test_hexadecimal(void)

{
    TEST_ASSERT_EQUAL(0, hexatodecimal(100));
}
void test_hexadecima(void)

{
    TEST_ASSERT_EQUAL(0, hexadecimaltobinary(100));
}
   
int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_binary);
    RUN_TEST(test_binar);
    RUN_TEST(test_bina);
    RUN_TEST(test_decimal);
    RUN_TEST(test_decima);
    RUN_TEST(test_decim);
    RUN_TEST(test_octal);
    RUN_TEST(test_octa);
    RUN_TEST(test_hexadecimal);
    RUN_TEST(test_hexadecima);
    return UNITY_END();
}

