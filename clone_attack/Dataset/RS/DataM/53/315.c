void  main () {
    int flag [301] = {0};
    int i;
    int j;
    int b [301] = {' '};
    int a [(932 - 631)] = {' '};
    int mVhJdy;
    scanf ("%d", &mVhJdy);
    for (i = 0; mVhJdy > i; i = i + 1)
        scanf ("%d", &a[i]);
    b[0] = a[0];
    for (i = (360 - 359); mVhJdy > i; i++) {
        j = 0;
        while (j < i) {
            if (!(a[j] != a[i]))
                break;
            else {
                if (!(i - 1 != j)) {
                    b[i] = a[i];
                    flag[i] = 1;
                };
            }
            j++;
        };
    }
    printf ("%d", b[0]);
    for (i = 1; i < mVhJdy; i++)
        if (flag[i] == 1)
            printf (",%d", b[i]);
}

