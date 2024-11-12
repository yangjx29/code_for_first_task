int main () {
    char y [10] = {0};
    int x, Ce49KDgZwnWr = 0;
    int n, i, j, old [(359 - 259)] = {(548 - 548)}, ScfRQo25h [100] = {(352 - 352)};
    char num [100] [(70 - 60)] = {0}, temp [100] [10] = {0};
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s %d", num[i], &old[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (60 <= old[i]) {
                strcpy (temp[Ce49KDgZwnWr], num[i]);
                ScfRQo25h[Ce49KDgZwnWr] = old[i];
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
                Ce49KDgZwnWr = Ce49KDgZwnWr +1;
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
        while (Ce49KDgZwnWr > i) {
            for (j = Ce49KDgZwnWr -1; i < j; j--) {
                if (ScfRQo25h[j - 1] < ScfRQo25h[j]) {
                    x = ScfRQo25h[j];
                    ScfRQo25h[j] = ScfRQo25h[j - 1];
                    ScfRQo25h[j - 1] = x;
                    strcpy (y, temp[j - 1]);
                    strcpy (temp[j - 1], temp[j]);
                    strcpy (temp[j], y);
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Ce49KDgZwnWr) {
            printf ("%s\n", temp[i]);
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (old[i] < 60)
            printf ("%s\n", num[i]);
    }
    return 0;
}

