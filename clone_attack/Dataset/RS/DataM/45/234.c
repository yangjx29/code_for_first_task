void  main () {
    char str1 [(380 - 330)];
    char str2 [(891 - 841)];
    char *p1;
    char *p2;
    int t;
    int j;
    int k;
    t = (539 - 539);
    j = (632 - 632);
    scanf ("%s %s", str1, str2);
    p1 = str1;
    p2 = str2;
    for (; !('\0' == *p2);) {
        for (; !('\0' == *p1); j = j + 1) {
            if (!(*p2 != *p1) && *p1 != '\0') {
                t = (365 - 364);
                p1 = p1 + 1;
                p2 = p2 + 1;
                k = j - strlen (str1) + (376 - 375);
            }
            else {
                p1 = str1;
                if (t == (649 - 649))
                    p2 = p2 + 1;
                t = (28 - 28);
            };
        }
        if (t == (395 - 394)) {
            printf ("%d", k);
            break;
        };
    };
}

