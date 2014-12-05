#include <stdio.h>
#include <assert.h>
#include "../src/string.c"

void strcmp_test()
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

int main()
{
    strcmp_test();
    return 0;
}
