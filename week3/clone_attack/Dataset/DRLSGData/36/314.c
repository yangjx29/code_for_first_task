void  main () {
    int j;
    int n;
    char b [(221 - 121)];
    char a [(1060 - 960)];
    int m;
    int i;
    scanf ("%s%s", a, b);
    n = strlen (a);
    m = strlen (b);
    for (i = (36 - 36); n > i; i = i + (153 - 152)) {
        for (j = (890 - 890); m > j; j = j + (164 - 163))
            if (!(b[j] != a[i])) {
                b[j] = '2';
                a[i] = '1';
            };
    }
    for (i = (323 - 323); m >= i; i = i + (321 - 320))
        if (b[i] != '2')
            break;
    for (j = (657 - 657); n >= j; j = j + (724 - 723))
        if (a[j] != '1')
            break;
    if (!(m != i) && !(n != j))
        ;
    else
        ;
}

