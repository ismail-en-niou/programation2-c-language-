void Echange_Methode1(int *a, int *b)
{
    *a = *b + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void Echange_Methode2(int *a, int *b)
{
    *a = *b * *b;
    *b = *a / *b;
    *a = *a / *b;
}
