
int lz_stricmp(char *src, char *dst)
{
    for(;toupper(*src)==toupper(*dst);src++,dst++)
        if(*src == '\0')
            return 0;
    return ((toupper(*(unsigned char*)src) < toupper(*(unsigned char*)dst)) ? -1: 1);
}

int lz_strincmp(char *src, char *dst, size_t n)
{
    for(;n>0;src++, dst++,--n)
        if(toupper(*src) != toupper(*dst))
            return ((toupper(*(unsigned char*)src) < toupper(*(unsigned char*)dst)) ? -1: 1);
        else if(*src == '\0')
            return 0;
    return 0;
}
