void  main () {
    char s [100];
    int max;
    int iOrfCaEkVX;
    int n;
    int i;
    int book;
    int pos;
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
    int a [30] [1000] = {0};
    max = (276 - 276);
    scanf ("%d", &n);
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
        while (n > i) {
            i = i + 1;
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
            scanf ("%d%s", &book, &s);
            {
                iOrfCaEkVX = 0;
                while (iOrfCaEkVX < strlen (s)) {
                    a[s[iOrfCaEkVX] - 'A'][0]++;
                    a[s[iOrfCaEkVX] - 'A'][a[s[iOrfCaEkVX] - 'A'][0]] = book;
                    iOrfCaEkVX++;
                };
            };
        };
    }
    {
        i = 0;
        while (26 > i) {
            if (max < a[i][0]) {
                max = a[i][0];
                pos = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", pos + 'A', a[pos][0]);
    {
        i = 1;
        while (i <= a[pos][0]) {
            printf ("%d\n", a[pos][i]);
            i++;
        };
    };
}

