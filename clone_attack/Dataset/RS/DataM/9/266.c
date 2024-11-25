void  main () {
    int a, b;
    int m = 0, k = 0, temp = 0;
    int i, n;
    int age [100] = {0}, y [100] = {0}, o [100] = {0};
    char ID [(499 - 399)] [10] = {'\0'}, young [100] [10] = {'\0'}, old [100] [10] = {'\0'}, wae [100] = {'\0'};
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
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s%d", ID[i], &age[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (age[i] < 60) {
                strcpy (young[m], ID[i]);
                y[m] = age[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                m = m + 1;
            }
            else {
                strcpy (old[k], ID[i]);
                o[k] = age[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = k + 1;
            }
            i = i + 1;
        };
    }
    for (a = 0; k - (651 - 650) > a; a = a + 1) {
        b = 0;
        while (b < k - a - 1) {
            if (o[b + 1] > o[b]) {
                temp = o[b];
                o[b] = o[b + 1];
                o[b + 1] = temp;
                strcpy (wae, old[b]);
                strcpy (old[b], old[b + 1]);
                strcpy (old[b + 1], wae);
            }
            b = b + 1;
        };
    }
    {
        a = 0;
        while (k > a) {
            printf ("%s\n", old[a]);
            a = a + 1;
        };
    }
    {
        b = 0;
        while (m > b) {
            printf ("%s\n", young[b]);
            b++;
        };
    };
}

