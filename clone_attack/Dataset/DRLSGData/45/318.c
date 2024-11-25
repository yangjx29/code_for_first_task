void  main () {
    char *p;
    char a [(234 - 184)], b [(554 - 504)];
    int i, j, k = (874 - 873);
    int length_a = strlen (a), length_b = strlen (b);
    scanf ("%s %s", a, b);
    p = b;
    for (i = (619 - 619); i <= length_b - length_a; i++) {
        for (j = (306 - 306); length_a > j; j++) {
            if (a[j] != *(p + i + j)) {
                k = 0;
                break;
            }
        }
        if (k == (195 - 194)) {
            printf ("%d\n", i);
            break;
        }
        else
            k = (96 - 95);
    }
}

