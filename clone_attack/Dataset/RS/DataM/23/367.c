void  main () {
    char a [100] = {'\0'};
    gets (a);
    int eGm8MAX;
    int j;
    int n;
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
    int k;
    int m;
    for (eGm8MAX = 0; eGm8MAX < 100; eGm8MAX = eGm8MAX + 1)
        if (!('\0' != a[eGm8MAX])) {
            n = eGm8MAX - 1;
            break;
        }
    {
        eGm8MAX = n;
        j = n;
        while (eGm8MAX >= 0) {
            if (a[eGm8MAX] == ' ' && !(' ' == a[eGm8MAX + 1])) {
                for (k = eGm8MAX + 1; j + 1 > k; k = k + 1)
                    printf ("%c", a[k]);
                m = eGm8MAX;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (; 1; eGm8MAX = eGm8MAX - 1)
                    if (a[eGm8MAX] != ' ') {
                        j = eGm8MAX;
                        break;
                    }
                eGm8MAX = m;
            }
            else {
                if (eGm8MAX == 0 && a[0] != ' ')
                    for (k = eGm8MAX; k <= j; k = k + 1)
                        printf ("%c", a[k]);
            }
            eGm8MAX = eGm8MAX - 1;
        };
    };
}

