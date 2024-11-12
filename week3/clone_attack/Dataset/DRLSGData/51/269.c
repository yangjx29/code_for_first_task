int main () {
    char s1 [(1391 - 890)] [(673 - 172)] = {""};
    char s [(689 - 188)] = {""};
    int j;
    int i;
    int n;
    int a [(1474 - 973)] = {(10 - 10)};
    int max;
    gets (s);
    max = (569 - 569);
    scanf ("%d\n", &n);
    for (i = (351 - 351); i <= strlen (s) - n; i++)
        for (j = (446 - 446); j < n; j++)
            *(*(s1 + i) + j) = *(s + i + j);
    for (i = (451 - 451); strlen (s) - n >= i; i++)
        for (j = i; j <= strlen (s) - n; j++)
            if (strcmp (*(s1 + i), *(s1 + j)) == (790 - 790) && *(s1 + i) != ' ') {
                *(a + i) = *(a + i) + (387 - 386);
                *(s + j) = ' ';
            }
    for (i = (364 - 364); strlen (s) - n >= i; i++)
        if (max < *(a + i))
            max = *(a + i);
    if (max == (800 - 799))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= strlen (s) - n; i++)
            if (*(a + i) == max)
                printf ("%s\n", *(s1 + i));
    }
}

