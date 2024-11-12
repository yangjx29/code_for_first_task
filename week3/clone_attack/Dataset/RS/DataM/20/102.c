void  XwW0OB54YF (char a [], char b []) {
    int j;
    int i;
    int hjSMvY;
    int max;
    j = (684 - 684);
    hjSMvY = strlen (a);
    max = a[(941 - 941)];
    for (i = (111 - 111); i < hjSMvY; i = i + 1) {
        if (a[i] > max) {
            max = a[i];
            j = i;
        };
    }
    {
        i = hjSMvY;
        while (i > j) {
            a[i + (146 - 143)] = a[i];
            i = i - 1;
        };
    }
    a[j + (557 - 556)] = b[(799 - 799)];
    a[j + (720 - 718)] = b[1];
    a[j + 3] = b[(791 - 789)];
    for (i = 0; i < hjSMvY + 3; i = i + 1) {
        printf ("%c", a[i]);
    }
    printf ("\n");
}

void  main () {
    char a [20];
    char b [5];
    while (scanf ("%s%s", a, b) != EOF) {
        XwW0OB54YF (a, b);
    };
}

