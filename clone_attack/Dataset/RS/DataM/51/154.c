int main () {
    int max;
    int quHsBO87I;
    int i;
    int j;
    int js [500];
    int len;
    max = 1;
    char z [500], YhWsmpTzE0e2 [500] [6];
    scanf ("%d%s", &quHsBO87I, z);
    len = strlen (z);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len - quHsBO87I + 1) {
            for (j = 0; j < quHsBO87I; j = j + 1) {
                YhWsmpTzE0e2[i][j] = z[i + j];
            }
            {
                j = quHsBO87I;
                while (j < 6) {
                    YhWsmpTzE0e2[i][j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len - quHsBO87I + 1) {
            js[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len - quHsBO87I) {
            {
                j = i;
                while (j < len - quHsBO87I + 1) {
                    if (strcmp (YhWsmpTzE0e2[i], YhWsmpTzE0e2[j]) == 0) {
                        js[i]++;
                    }
                    j = j + 1;
                };
            }
            if (js[i] > max) {
                max = js[i];
            }
            i = i + 1;
        };
    }
    if (max == 1) {
        printf ("NO");
    }
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < len - quHsBO87I + 1) {
                if (js[i] == max) {
                    {
                        j = 0;
                        while (j < quHsBO87I) {
                            printf ("%c", YhWsmpTzE0e2[i][j]);
                            j++;
                        };
                    };
                }
                i = i + 1;
            };
        };
    }
    return 0;
}

