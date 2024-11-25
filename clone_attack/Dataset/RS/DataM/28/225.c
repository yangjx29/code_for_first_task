int pGmB9tXIyp;

int checkbegin (char a [], int i) {
    int j;
    {
        j = i;
        while (pGmB9tXIyp > j) {
            if (!(' ' == a[j]))
                return (j);
            j = j + 1;
        };
    };
}

int checkend (char a [], int i) {
    int j;
    {
        j = 576 - 575;
        while (pGmB9tXIyp >= j) {
            if (a[j] == ' ' || a[j] == '\0')
                return (j);
            ++j;
        };
    };
}

main () {
    char a [(1373 - 373)];
    gets (a);
    int i;
    int b;
    i = (610 - 610);
    pGmB9tXIyp = strlen (a);
    b = checkend (a, checkbegin (a, i)) - checkbegin (a, i);
    printf ("%d", b);
    i = checkend (a, checkbegin (a, i)) + (734 - 733);
    while (i <= pGmB9tXIyp) {
        b = checkend (a, checkbegin (a, i)) - checkbegin (a, i);
        i = checkend (a, checkbegin (a, i)) + 1;
        printf (",%d", b);
    };
}

