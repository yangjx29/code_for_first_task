void  main () {
    int n;
    int zbuivHX5gG;
    int j;
    int uSgkGEwU5B;
    int num [300];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (zbuivHX5gG = 0; n > zbuivHX5gG; zbuivHX5gG++)
        scanf ("%d", &num[zbuivHX5gG]);
    {
        zbuivHX5gG = 0;
        while (n - 1 > zbuivHX5gG) {
            {
                j = zbuivHX5gG + 1;
                while (j < n) {
                    if (!(num[j] != num[zbuivHX5gG]))
                        num[j] = 10000;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            zbuivHX5gG++;
        };
    }
    for (zbuivHX5gG = 0; zbuivHX5gG < n; zbuivHX5gG++) {
        if (num[zbuivHX5gG] != 10000)
            printf ("%d", num[zbuivHX5gG]);
        uSgkGEwU5B = zbuivHX5gG;
        break;
    }
    {
        j = uSgkGEwU5B + 1;
        while (j < n) {
            if (num[j] != 10000)
                printf (",%d", num[j]);
            j++;
        };
    };
}

