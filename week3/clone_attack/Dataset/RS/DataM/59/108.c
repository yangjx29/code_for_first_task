int main () {
    char a [100] [100];
    char b [100] [100];
    int e7lvxC;
    int ST0GFHErOS;
    int col;
    int m;
    int k;
    int N [100];
    int d;
    scanf ("\n");
    N[(288 - 287)] = 0;
    scanf ("%d", &e7lvxC);
    for (ST0GFHErOS = (436 - 435); e7lvxC >= ST0GFHErOS; ST0GFHErOS = ST0GFHErOS +1) {
        scanf ("\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (col = (472 - 471); e7lvxC >= col; col++) {
            scanf ("%c", &a[ST0GFHErOS][col]);
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
            b[ST0GFHErOS][col] = a[ST0GFHErOS][col];
            if (a[ST0GFHErOS][col] == '@') {
                N[(326 - 325)]++;
            };
        };
    }
    for (ST0GFHErOS = 0; e7lvxC + (760 - 759) >= ST0GFHErOS; ST0GFHErOS++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (col = 0; col <= e7lvxC + (694 - 693); col++) {
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
            if (ST0GFHErOS == 0 || ST0GFHErOS == e7lvxC + 1 || col == 0 || col == e7lvxC + 1) {
                a[ST0GFHErOS][col] = '#';
                b[ST0GFHErOS][col] = a[ST0GFHErOS][col];
            };
        };
    }
    scanf ("%d", &m);
    for (k = 1; k <= m - 1; k++) {
        d = 0;
        N[k + 1] = 0;
        for (ST0GFHErOS = 1; ST0GFHErOS <= e7lvxC; ST0GFHErOS++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (col = 1; col <= e7lvxC; col++) {
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
                if (a[ST0GFHErOS][col] == '@') {
                    if (a[ST0GFHErOS][col + 1] == '.') {
                        b[ST0GFHErOS][col + 1] = '@';
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    else {
                    }
                    if (a[ST0GFHErOS][col - 1] == '.') {
                        b[ST0GFHErOS][col - 1] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else {
                    }
                    if (a[ST0GFHErOS -1][col] == '.') {
                        b[ST0GFHErOS -1][col] = '@';
                    }
                    else {
                    }
                    if (a[ST0GFHErOS +1][col] == '.') {
                        b[ST0GFHErOS +1][col] = '@';
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
                    }
                    else {
                    };
                };
            };
        }
        for (ST0GFHErOS = 1; ST0GFHErOS <= e7lvxC; ST0GFHErOS++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (col = 1; col <= e7lvxC; col++) {
                a[ST0GFHErOS][col] = b[ST0GFHErOS][col];
                if (a[ST0GFHErOS][col] == '@') {
                    N[k + 1]++;
                };
            };
        };
    }
    printf ("%d", N[m]);
    return 0;
}

