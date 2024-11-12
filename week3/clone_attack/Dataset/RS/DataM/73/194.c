int main () {
    int a [(363 - 358)] [(760 - 755)];
    int b [5] [(731 - 730)];
    int c [(442 - 441)] [5];
    int Wh6kwa;
    int i;
    int j;
    int max;
    int min;
    Wh6kwa = (840 - 840);
    {
        i = 34 - 34;
        while (i < 5) {
            {
                j = 230 - 230;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 446 - 446;
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
        while (i < 5) {
            max = a[i][(247 - 247)];
            b[i][0] = 0;
            {
                j = 511 - 510;
                while (j < 5) {
                    if (a[i][j] > max) {
                        max = a[i][j];
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
                        b[i][0] = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < 5) {
            min = a[0][j];
            c[0][j] = 0;
            {
                i = 1;
                while (i < 5) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                        c[0][j] = i;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (j < 5) {
                    if (!(j != b[i][0]) && c[0][j] == i) {
                        Wh6kwa = 1;
                        printf ("%d %d %d", i + 1, j + 1, a[i][j]);
                        break;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (Wh6kwa == 0)
        ;
}

