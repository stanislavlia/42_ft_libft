void    *ft_memmove(void *dest, const void *src, unsigned long n)
{
    unsigned long i;

    if (dest == src)
        return (dest);
    if (dest > src)
    {
        i = n;
        while (i-- > 0)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
// //TESTING PART
// #include <stdio.h>
// #include <string.h>
// void run_test(char *test_name, char *dest1, const char *src1, char *dest2, const char *src2, size_t n) {
//     char *res1 = memmove(dest1, src1, n);
//     char *res2 = ft_memmove(dest2, src2, n);

//     if (strcmp(res1, res2) == 0) {
//         printf("%s: PASS\n", test_name);
//     } else {
//         printf("%s: FAIL\n  memmove gave: %s\n  ft_memmove gave: %s\n", test_name, res1, res2);
//     }
// }

// int main() {
//     char test1_src[] = "Hello world!";
//     char test1_dest1[50];
//     char test1_dest2[50];

//     char test2_src[] = "Another test string";
//     char test2_dest1[50] = "Destination string";
//     char test2_dest2[50] = "Destination string";

//     char test3_src[] = "This string is a bit longer";
//     char test3_dest1[50] = "Destination string";
//     char test3_dest2[50] = "Destination string";

//     char test4_src[] = "";
//     char test4_dest1[50] = "Destination string";
//     char test4_dest2[50] = "Destination string";

//     char test5_src[] = "abc";
//     char test5_dest1[50] = "abcdefgh";
//     char test5_dest2[50] = "abcdefgh";

//     // ... and so on for test6 through test10

//     run_test("Test 1", test1_dest1, test1_src, test1_dest2, test1_src, 6);
//     run_test("Test 2", test2_dest1, test2_src, test2_dest2, test2_src, 12);
//     run_test("Test 3", test3_dest1, test3_src, test3_dest2, test3_src, 20);
//     run_test("Test 4", test4_dest1, test4_src, test4_dest2, test4_src, 0);  // Test with n = 0
//     run_test("Test 5", test5_dest1+2, test5_src, test5_dest2+2, test5_src, 3);  // Test with overlap

//     // ... and so on for test6 through test10
//     // Continuing from previous test cases...
//     char test6_src[] = "Hello world!";
//     char test6_dest1[50] = "Destination string";
//     char test6_dest2[50] = "Destination string";

//     char test7_src[] = "Another test string";
//     char test7_dest1[50] = "Initial value";
//     char test7_dest2[50] = "Initial value";

//     char test8_src[] = "This string is a bit longer";
//     char test8_dest1[50] = "Original destination string";
//     char test8_dest2[50] = "Original destination string";

//     char test9_src[] = "abc";
//     char test9_dest1[50] = "abcdefgh";
//     char test9_dest2[50] = "abcdefgh";

//     char test10_src[] = "abc";
//     char test10_dest1[50] = "abcdefgh";
//     char test10_dest2[50] = "abcdefgh";

//     run_test("Test 6", test6_dest1+3, test6_src, test6_dest2+3, test6_src, 6);  // Overlapping towards end
//     run_test("Test 7", test7_dest1+5, test7_src, test7_dest2+5, test7_src, 12);  // Overlapping towards end
//     run_test("Test 8", test8_dest1+7, test8_src, test8_dest2+7, test8_src, 20);  // Overlapping towards end
//     run_test("Test 9", test9_dest1, test9_dest1+1, test9_dest2, test9_dest2+1, 3);  // Overlapping towards beginning
//     run_test("Test 10", test10_dest1, test10_dest1+2, test10_dest2, test10_dest2+2, 3);  // Overlapping towards beginning
//     return 0;
// }