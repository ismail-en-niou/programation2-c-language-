void to_bin(int n){
    if (n > 0)
    {
        to_bin(n / 2);
        printf("%d", n%2);
    }
}
