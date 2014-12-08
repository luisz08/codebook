#include <stdio.h>
#include <assert.h>
#include "../src/string.c"

void stricmp_test()
{
    assert(lz_stricmp("abc", "abcd") == -1);
    assert(lz_stricmp("abc", "abc") == 0);
    assert(lz_stricmp("abcd", "abc") == 1);
    assert(lz_stricmp("Abc", "abc") == 0);
    assert(lz_stricmp("AbCDEF", "abcdef") == 0);
    assert(lz_stricmp("Abcd", "abcde") == -1);
    assert(lz_stricmp("abCe", "AbcD") == 1);
    assert(lz_stricmp("abCE", "Abcd") == 1);
    assert(lz_stricmp("abc强人Ea", "aBc强人ea") == 0);
    printf("strcmp_test ok\n");
}

void strincmp_test()
{
    assert(lz_strincmp("abc", "abcd", 3) == 0);
    assert(lz_strincmp("abc", "abc", 3) == 0);
    assert(lz_strincmp("abcd", "abc", 4) == 1);
    assert(lz_strincmp("Abc", "abc", 3) == 0);
    assert(lz_strincmp("AbCDEF", "abcdef", 6) == 0);
    assert(lz_strincmp("Abcd", "abcde", 4) == 0);
    assert(lz_strincmp("abCe", "AbcD", 3) == 0);
    assert(lz_strincmp("abCe", "AbcD", 4) == 1);
    assert(lz_strincmp("abCE", "Abcd", 3) == 0);
    assert(lz_strincmp("abc强人Ea", "aBc强人eayw", 11) == 0);
    printf("strcmp_test ok\n");
}

int main()
{
    stricmp_test();
    return 0;
}
