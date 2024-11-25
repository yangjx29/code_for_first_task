void  main () {
    int ZMOQLvp, j, a [400], sGdnhpB = 0, min = -1;
    char c [400];
    for (ZMOQLvp = 0;; ZMOQLvp++) {
        scanf ("%d", &a[ZMOQLvp]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0;; j = j + 1) {
            c[j] = getchar ();
            if (!(',' != c[j]))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!(10 != c[j]))
                goto abc;
        };
    }
abc :
    ;
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
    for (j = 0; ZMOQLvp >= j; j = j + 1) {
        if (sGdnhpB < a[j])
            sGdnhpB = a[j];
    }
    for (j = 0; j <= ZMOQLvp; j++)
        if (a[j] == sGdnhpB)
            a[j] = -2;
    for (j = 0; j <= ZMOQLvp; j++)
        if (a[j] > min)
            min = a[j];
    if (min == -1)
        ;
    else
        printf ("%d", min);
}

