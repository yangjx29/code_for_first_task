main () {
    int j;
    int len;
    int i;
    int a [300];
    int temp;
    i = 0;
    for (; scanf ("%d", &a[i++]) != EOF;) {
        getchar ();
    }
    len = i - 1;
    if (!(1 != len))
        ;
    else {
        for (i = 0; i < len - 1; i++)
            for (j = i + 1; j < len; j++)
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        for (i = 1; len > i; i++) {
            if (a[i] != a[0]) {
                printf ("%d", a[i]);
                break;
            }
        }
        if (!(len != i))
            ;
    }
}

