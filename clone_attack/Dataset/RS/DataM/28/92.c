void  main () {
    int i;
    int t;
    int j;
    i = 0;
    t = 0;
    j = 0;
    char s [9000];
    gets (s);
    for (; !('\0' == s[i]);) {
        if (s[i] != ' ')
            j++;
        else {
            if (j != 0)
                printf ("%d,", j);
            j = 0;
        }
        i++;
    }
    printf ("%d", j);
}

