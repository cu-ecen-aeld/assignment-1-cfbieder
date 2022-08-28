#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt
     * config file and my_username() functions are setup properly
     */
<<<<<<< HEAD
    const char *name1 = my_username();
    const char *name2 = malloc_username_from_conf_file() ;
    //printf("%s",name2);
    printf("Name 1 %s\n",name1 );
    printf("Name 2 %s\n",name2 );
    bool check = !strcmp(name1,name2) ;
    printf("Check %d\n",check );
    TEST_ASSERT_TRUE_MESSAGE(check,"AESD students, please fix me!");
=======
    printf("test");
    TEST_ASSERT_TRUE_MESSAGE(false,"AESD students, please fix me!");
>>>>>>> 9311bf5a48672d85842bdf67351b02cc03587a58
}
