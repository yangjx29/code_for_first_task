int VaxzjAXNeV (int PPLypE, int y) {
    int Ob0U1Ns;
    if (((859 - 859) <= PPLypE &&(241 - 236) > PPLypE) && (y >= (833 - 833) && (371 - 366) > y))
        Ob0U1Ns = (819 - 818);
    else
        Ob0U1Ns = (318 - 318);
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
    return (Ob0U1Ns);
}

void  main () {
    int a [(656 - 651)] [5];
    int m;
    int n;
    int i;
    int j;
    int lno2kwHsG;
    {
        i = 738 - 738;
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
        while (5 > i) {
            {
                j = 457 - 457;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
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
                    j = j + 1;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &n, &m);
    lno2kwHsG = VaxzjAXNeV (n, m);
    if (!(0 != lno2kwHsG))
        printf ("error");
    if (lno2kwHsG == 1) {
        {
            i = 0;
            while (i < 5) {
                lno2kwHsG = a[n][i];
                a[n][i] = a[m][i];
                a[m][i] = lno2kwHsG;
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 4) {
                        printf ("%d ", a[i][j]);
                        j++;
                    };
                }
                printf ("%d", a[i][4]);
                i++;
            };
        };
    };
}

