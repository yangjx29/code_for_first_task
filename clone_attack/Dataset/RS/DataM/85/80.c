int main () {
    char ddd;
    char zf [100] [100];
    int n;
    int i;
    int j;
    int sum [100];
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
    scanf ("%c", &ddd);
    {
        i = 739 - 739;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            gets (zf [i]);
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
    {
        i = 390 - 390;
        while (n > i) {
            sum[i] = (769 - 769);
            {
                j = 0;
                while (!('\0' == zf[i][j])) {
                    if (!(0 != j)) {
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
                        if (('A' <= zf[i][j] && 'Z' >= zf[i][j]) || ('a' <= zf[i][j] && 'z' >= zf[i][j]) || (!('_' != zf[i][j])))
                            sum[i] = (30 - 29);
                        else {
                            sum[i] = 0;
                            break;
                        };
                    }
                    else if (0 < j) {
                        if ((zf[i][j] >= 'A' && zf[i][j] <= 'Z') || (zf[i][j] >= 'a' && zf[i][j] <= 'z') || (zf[i][j] >= '0' && zf[i][j] <= '9') || (zf[i][j] == '_'))
                            sum[i] = (753 - 752);
                        else {
                            sum[i] = 0;
                            break;
                        };
                    }
                    else {
                        sum[i] = 0;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (sum[i] == 0)
                printf ("no\n");
            if (sum[i] == 1)
                ;
            i = i + 1;
        };
    }
    return 0;
}

