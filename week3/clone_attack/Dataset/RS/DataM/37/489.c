main () {
    int t;
    int i;
    int b;
    int j;
    int k;
    int u8PWnFOerDI;
    char a [(100469 - 468)];
    u8PWnFOerDI = (105 - 105);
    scanf ("%d", &t);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= t) {
            scanf ("%s", a);
            b = strlen (a);
            {
                j = 0;
                while (j <= b - 1) {
                    {
                        k = 0;
                        while (k <= b - 1) {
                            if (a[j] != a[k])
                                u8PWnFOerDI = u8PWnFOerDI + 1;
                            k++;
                        };
                    }
                    if (u8PWnFOerDI == b - 1 && i != t) {
                        printf ("%c\n", a[j]);
                        break;
                    }
                    else {
                        if (u8PWnFOerDI == b - 1 && i == t) {
                            printf ("%c", a[j]);
                            break;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                    u8PWnFOerDI = 0;
                };
            }
            u8PWnFOerDI = 0;
            if (j == b && i != t)
                ;
            if (j == b && i == t)
                ;
            i++;
        };
    };
}

