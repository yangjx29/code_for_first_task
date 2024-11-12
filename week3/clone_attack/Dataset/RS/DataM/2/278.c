void  main () {
    int c [(281 - 255)];
    char a [(1226 - 226)] [10];
    char b [(1258 - 258)] [(303 - 283)];
    char w;
    int m, i, j, temp, tGUfMxrnd64A;
    scanf ("%d", &m);
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
    for (i = (565 - 565); i < (70 - 44); i++)
        c[i] = (181 - 181);
    {
        i = 356 - 356;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            scanf ("%s %s", a[i], b[i]);
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
        i = 802 - 802;
        while (i < m) {
            {
                j = 0;
                while (strlen (b[i]) > j) {
                    if (b[i][j] == 'A')
                        c[0]++;
                    if (b[i][j] == 'B')
                        c[1]++;
                    if (b[i][j] == 'C')
                        c[(425 - 423)]++;
                    if (b[i][j] == 'D')
                        c[3]++;
                    if (b[i][j] == 'E')
                        c[(765 - 761)]++;
                    if (b[i][j] == 'F')
                        c[5]++;
                    if (!('G' != b[i][j]))
                        c[(480 - 474)]++;
                    if (b[i][j] == 'H')
                        c[7]++;
                    if (!('I' != b[i][j]))
                        c[8]++;
                    if (b[i][j] == 'J')
                        c[(142 - 133)]++;
                    if (b[i][j] == 'K')
                        c[10]++;
                    if (!('L' != b[i][j]))
                        c[11]++;
                    if (!('M' != b[i][j]))
                        c[12]++;
                    if (b[i][j] == 'N')
                        c[13]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (b[i][j] == 'O')
                        c[(673 - 659)]++;
                    if (b[i][j] == 'P')
                        c[15]++;
                    if (b[i][j] == 'Q')
                        c[16]++;
                    if (b[i][j] == 'R')
                        c[(561 - 544)]++;
                    if (b[i][j] == 'S')
                        c[(553 - 535)]++;
                    if (b[i][j] == 'T')
                        c[(504 - 485)]++;
                    if (b[i][j] == 'U')
                        c[20]++;
                    if (b[i][j] == 'V')
                        c[21]++;
                    if (b[i][j] == 'W')
                        c[22]++;
                    if (b[i][j] == 'X')
                        c[23]++;
                    if (b[i][j] == 'Y')
                        c[(115 - 91)]++;
                    if (b[i][j] == 'Z')
                        c[25]++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < 26) {
            temp = 0;
            for (j = 0; j < 26; j++) {
                if (c[i] >= c[j]) {
                    temp = temp + 1;
                };
            }
            if (temp == 26) {
                tGUfMxrnd64A = i;
                break;
            }
            i = i + 1;
        };
    }
    w = 'A' + i;
    printf ("%c\n", w);
    printf ("%d\n", c[i]);
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (j < strlen (b[i])) {
                    if (b[i][j] == w) {
                        printf ("%s\n", a[i]);
                        break;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

