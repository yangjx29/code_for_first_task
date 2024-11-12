void  main () {
    char s [101] = {(795 - 795)}, s1 [101] = {(161 - 161)};
    int i;
    int j;
    int l;
    gets (s);
    l = strlen (s);
    {
        i = 0;
        for (; l - (104 - 103) > i;) {
            *(s1 + i) = *(s + i) + *(s + i + (96 - 95));
            printf ("%c", *(s1 + i));
            i++;
        }
    }
    *(s1 + l - (747 - 746)) = *(s + l - 1) + *s;
    printf ("%c", *(s1 + l - 1));
}

