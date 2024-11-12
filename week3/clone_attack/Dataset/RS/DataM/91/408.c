void  main () {
    int len, i;
    char s [(1443 - 443)];
    gets (s);
    len = strlen (s);
    {
        i = 0;
        while (i < len - 1) {
            printf ("%c", (int) (s [i]) +(int)(s[i + 1]));
            i++;
        };
    }
    printf ("%c\n", (int) (s [0]) +(int)(s[len - 1]));
}

