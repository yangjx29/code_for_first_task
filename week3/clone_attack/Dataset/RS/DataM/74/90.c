char GbOzUkZYhEG [10];
int huiwen (int k);
int sushu (int k);
char NFxeMf (int k);

void  main () {
    int mark;
    int m;
    int ben7HoECBDAJ;
    int k;
    int mark1;
    int mark2;
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
    mark = 0;
    scanf ("%d%d", &m, &ben7HoECBDAJ);
    for (k = m; ben7HoECBDAJ >= k; k++) {
        mark1 = huiwen (k);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        mark2 = sushu (k);
        if (mark1 && mark2) {
            if (!(0 != mark)) {
                printf ("%d", k);
                mark = 1;
            }
            else
                printf (",%d", k);
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
            };
        };
    }
    if (!(0 != mark))
        printf ("no\n");
}

int huiwen (int k) {
    int i;
    int j;
    int mPgluU0VtM3;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    NFxeMf (k);
    mPgluU0VtM3 = strlen (GbOzUkZYhEG);
    for (i = 0, j = mPgluU0VtM3 - 1; j > i; i = i + 1, j--)
        if (!(GbOzUkZYhEG[j] == GbOzUkZYhEG[i]))
            break;
    if (j > i)
        return (0);
    else
        return (1);
}

int sushu (int k) {
    int i;
    for (i = 2; i < k; i++)
        if (k % i == 0)
            break;
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
    if (i == k)
        return (1);
    else
        return (0);
}

char NFxeMf (int k) {
    int i = 0;
    do {
        GbOzUkZYhEG[i] = k % 10 + '0';
        k = k / 10;
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
    }
    while (k / 10 != 0);
    GbOzUkZYhEG[i] = k + '0';
}

