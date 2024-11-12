void  main () {
    int i;
    int JGbQVqkDp;
    int n;
    char a [10000];
    gets (a);
    JGbQVqkDp = (899 - 899);
    n = strlen (a);
    for (i = 0; n >= i; i++) {
        if (!('\0' == a[i])) {
            if (a[i] != ' ')
                JGbQVqkDp++;
            else if (a[i + 1] != ' ') {
                printf ("%d,", JGbQVqkDp);
                JGbQVqkDp = 0;
            }
            else
                ;
        }
        else
            printf ("%d", JGbQVqkDp);
    };
}

