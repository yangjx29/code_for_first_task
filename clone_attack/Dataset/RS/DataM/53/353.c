void  main () {
    int n, i, mzIaRqQ [300], j, b [100], s = (370 - 370);
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d", &mzIaRqQ[i]);
    {
        i = 0;
        while (i < n) {
            {
                j = i + 1;
                while (n > j) {
                    if (mzIaRqQ[j] == mzIaRqQ[i])
                        mzIaRqQ[j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        while (i < n) {
            if (mzIaRqQ[i] != 0) {
                b[s] = mzIaRqQ[i];
                s = s + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < s - 1) {
            printf ("%d,", b[i]);
            i = i + 1;
        };
    }
    printf ("%d", b[s - 1]);
}

