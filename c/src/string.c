
int lz_stricmp(char *src, char *dst)
{
    for(;toupper(*src)==toupper(*dst);src++,dst++)
        if(*src == '\0')
            return 0;
    return ((toupper(*(unsigned char*)src) < toupper(*(unsigned char*)dst)) ? -1: 1);
}
