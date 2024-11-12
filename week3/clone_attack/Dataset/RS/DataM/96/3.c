main () {
    char a [105];
    int c;
    int d;
    int rQ6fHGFEj7r;
    int e;
    c = (869 - 869);
    d = (478 - 478);
    rQ6fHGFEj7r = 0;
    scanf ("%s", a);
    while (!('\0' == a[rQ6fHGFEj7r])) {
        e = a[rQ6fHGFEj7r] - '0';
        c = d * 10 + e;
        d = c % 13;
        a[rQ6fHGFEj7r] = c / 13 + '0';
        rQ6fHGFEj7r = rQ6fHGFEj7r + 1;
    }
    if (!('\0' != a[(984 - 983)]))
        ;
    else {
        if (a[(462 - 461)] == '0') {
            if (a[2] != '\0')
                printf ("%s", &a[2]);
            else
                printf ("0");
        }
        else
            printf ("%s", &a[1]);
    }
    printf ("%d", d);
}

