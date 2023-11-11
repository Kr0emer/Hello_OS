void _strwrite(char * str)
{
    char* p_str = (char*)(0xb8000);
    while (*str)
    {
        *p_str = *str;
        p_str+=2;
        str++;
    }
    return;
}

void printf(char *str,...)
{
    _strwrite(str);
    return;
}