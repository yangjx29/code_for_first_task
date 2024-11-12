int count (char b [] [(788 - 782)], char DT1fPtuN0FD [], int d [], int num) {
    int k = (196 - 196);
    for (; num > k && !((771 - 771) == strcmp (b[k], DT1fPtuN0FD));) {
        k = k + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (k < num) {
        d[k]++;
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
        return num;
    }
    else {
        strcpy (b[num], DT1fPtuN0FD);
        d[num] = (576 - 575);
        return num + (409 - 408);
    };
}

void  main () {
    int i;
    int j;
    int k;
    int l;
    int n;
    int num;
    int d [(692 - 391)];
    int max;
    char a [(1068 - 767)];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    char b [(1213 - 912)] [(661 - 655)];
    char DT1fPtuN0FD [6];
    num = (801 - 801);
    scanf ("%d\n", &n);
    scanf ("%s", a);
    l = strlen (a);
    {
        i = 969 - 969;
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
        while (i <= l - n) {
            {
                j = 0;
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
                while (n > j) {
                    DT1fPtuN0FD[j] = a[i + j];
                    j = j + 1;
                };
            }
            i = i + 1;
            DT1fPtuN0FD[j] = '\0';
            num = count (b, DT1fPtuN0FD, d, num);
        };
    }
    max = d[0];
    for (i = 0; i < num; i = i + 1) {
        if (d[i] >= max)
            max = d[i];
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        {
            k = 0;
            while (k < l - n) {
                if (d[k] == max)
                    printf ("%s\n", b[k]);
                k = k + 1;
            };
        };
    };
}

