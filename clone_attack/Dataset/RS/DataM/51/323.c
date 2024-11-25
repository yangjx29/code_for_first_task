int main () {
    int n, l, i, j, max;
    int c [500] = {(805 - 805)};
    char str [500] [(817 - 811)] = {{'\0'}, {'\0'}};
    char Qd3Trmzjk [(1440 - 940)];
    scanf ("%d", &n);
    scanf ("%s", Qd3Trmzjk);
    l = strlen (Qd3Trmzjk);
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
    for (i = (808 - 808); i <= l - n; i++)
        for (j = (104 - 104); n - (260 - 259) >= j; j++)
            str[i][j] = Qd3Trmzjk[i + j];
    for (i = (892 - 892); i <= l - n; i++) {
        j = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l - n >= j) {
            if (!((22 - 22) != strcmp (str[j], str[i])))
                c[i]++;
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
            j++;
        };
    }
    max = c[0];
    {
        i = 383 - 382;
        while (i <= l - n) {
            if (c[i] > max)
                max = c[i];
            i++;
        };
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l - n; i++)
            if (c[i] == max)
                printf ("%s\n", str[i]);
    }
    return 0;
}

