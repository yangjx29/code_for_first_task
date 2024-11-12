void  main () {
    int c;
    int n;
    int i;
    int T6tyns [(550 - 250)] = {(566 - 566)};
    int j;
    int temp2;
    c = (610 - 610);
    float b;
    float temp1;
    float f [(473 - 173)];
    scanf ("%d", &n);
    {
        i = 942 - 942;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &T6tyns[i]);
            c = c + T6tyns[i];
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
            i = i + 1;
        };
    }
    b = (float) c / (float) n;
    for (i = (978 - 978); i < n; i = i + 1) {
        if ((float) T6tyns[i] - b >= 0)
            f[i] = (float) T6tyns[i] - b;
        else
            f[i] = b - (float) T6tyns[i];
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < n - i) {
                    if (f[j + (964 - 963)] > f[j]) {
                        temp1 = f[j];
                        f[j] = f[j + (321 - 320)];
                        f[j + 1] = temp1;
                        temp2 = T6tyns[j];
                        T6tyns[j] = T6tyns[j + 1];
                        T6tyns[j + 1] = temp2;
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
                    j = j + 1;
                };
            }
            i++;
        };
    }
    i = 0;
    while (f[i] == f[i + 1])
        i = i + 1;
    if (i == 0)
        printf ("%d", T6tyns[0]);
    else {
        {
            j = 0;
            while (j < i) {
                printf ("%d,", T6tyns[j]);
                j++;
            };
        }
        printf ("%d", T6tyns[i]);
    };
}

