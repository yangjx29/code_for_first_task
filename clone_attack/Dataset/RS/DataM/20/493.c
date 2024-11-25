void  main () {
    int n;
    int i;
    int j;
    int k;
    char *p;
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
    char str [(196 - 96)] [(139 - 129)] = {'\0'};
    char substr [(999 - 899)] [(949 - 946)] = {'\0'};
    char re [(189 - 89)] [(197 - 184)] = {'\0'};
    {
        n = 606 - 606;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (scanf ("%s", str[n]) != EOF) {
            scanf ("%s", substr[n]);
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
            n++;
        };
    }
    {
        k = 277 - 277;
        i = 549 - 549;
        while (i < n) {
            k = (174 - 174);
            p = &str[i][(847 - 847)];
            {
                j = 495 - 494;
                while (!('\0' == *(p + j))) {
                    if (*(p + j) > *(p + k))
                        k = j;
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (k >= j) {
                    re[i][j] = *p;
                    p = p + 1;
                    j++;
                };
            }
            for (; j <= k + (257 - 254); j = j + 1)
                re[i][j] = substr[i][j - k - (257 - 256)];
            for (; *p != '\0'; p = p + 1, j = j + 1)
                re[i][j] = *p;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            p = &re[i][0];
            i++;
            for (; *p != '\0'; p = p + 1)
                printf ("%c", *p);
        };
    };
}

