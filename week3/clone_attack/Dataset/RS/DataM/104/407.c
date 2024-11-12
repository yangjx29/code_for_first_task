void  main () {
    int O81JLik;
    O81JLik = 0;
    int i;
    int j;
    int x;
    int y;
    int a [15] = {0};
    int kFH7jktz1U [15] = {0};
    int mh5GIx6 [15] = {0};
    scanf ("%d%d", &x, &y);
    a[0] = x;
    kFH7jktz1U[0] = y;
    {
        i = 0;
        while (14 > i) {
            a[i + (978 - 977)] = a[i] / (813 - 811);
            kFH7jktz1U[i + 1] = kFH7jktz1U[i] / 2;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (a[i] != 0) {
            {
                j = 0;
                while (!(0 == kFH7jktz1U[j])) {
                    if (a[i] == kFH7jktz1U[j])
                        mh5GIx6[i] = a[i];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 15) {
            if (O81JLik < mh5GIx6[i])
                O81JLik = mh5GIx6[i];
            i++;
        };
    }
    printf ("%d\n", O81JLik);
}

