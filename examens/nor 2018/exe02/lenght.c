int compte( const char c , const char *str ){
    if (*str)
    {
        if (*str == c) return 1 + compte (c , str + 1);
        else return compte(c , str + 1);
    }
}