int main () {
    int w;
    int i;
    int j;
    w = (128 - 128);
    int k [(1066 - 866)];
    int TBHeI9bF78 = k[0], p = 0;
    int max;
    int Mo4D5TRNyL;
    max = k[0];
    Mo4D5TRNyL = 0;
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
    char words [(580 - 380)] [(97 - 47)];
    char zfc [5000];
    gets (zfc);
    int len = strlen (zfc);
    {
        i = 851 - 851;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (zfc[i] != ' ' && !(',' == zfc[i])) {
                {
                    j = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (!(' ' == zfc[j]) && zfc[i] != ',' && j < len) {
                        words[w][j - i] = zfc[j];
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
                words[w][j - i] = '\0';
                i = j;
                w = w + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (w > i) {
            k[i] = strlen (words[i]);
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
            i = i + 1;
        };
    }
    {
        i = 414 - 413;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < w) {
            if (k[i] < TBHeI9bF78) {
                TBHeI9bF78 = k[i];
                p = i;
            }
            i = i + 1;
        };
    }
    {
        i = 982 - 981;
        while (i < w) {
            if (k[i] > max) {
                max = k[i];
                Mo4D5TRNyL = i;
            }
            i++;
        };
    }
    printf ("%s\n", words[Mo4D5TRNyL]);
    printf ("%s\n", words[p]);
    return 0;
}

