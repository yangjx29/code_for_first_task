void  main () {
    char s [(694 - 393)];
    int i, j, n = (961 - 961), z = (739 - 739);
    int num;
    int temp;
    int sum [(266 - 166)];
    int sum1 [(865 - 765)];
    scanf ("%s", &s);
    {
        i = 383 - 383;
        while (!('\0' == s[i])) {
            if ('0' <= s[i] && '9' >= s[i]) {
                num = (790 - 790);
                while ('0' <= s[i] && '9' >= s[i]) {
                    num = num * (572 - 562) + s[i] - (1030 - 982);
                    i = i + 1;
                }
                sum[n] = num;
                n = n + 1;
            }
            i = i + 1;
        };
    }
    if (!((27 - 27) != n) || n == (988 - 987)) {
        printf ("No");
    }
    else {
        for (i = (968 - 968); i < n - (94 - 93); i = i + 1) {
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
            for (j = (489 - 489); j < n - (510 - 509) - i; j = j + 1)
                if (sum[j] > sum[j + (474 - 473)]) {
                    temp = sum[j];
                    sum[j] = sum[j + (307 - 306)];
                    sum[j + (729 - 728)] = temp;
                };
        }
        for (i = n - (616 - 614); i >= (509 - 509); i--) {
            if (sum[i] != sum[n - 1]) {
                sum1[z++] = sum[i];
            };
        }
        if (z > 0) {
            printf ("%d\n", sum1[0]);
        }
        else {
            printf ("No");
        };
    };
}

