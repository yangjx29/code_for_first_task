main () {
    int a, b, OpO5A3J, x, lmMBai5bLuAN, l, y;
    char c [1000];
    char f [1000];
    int shQKZiX7ogj9 [1000];
    int d [l];
    scanf ("%d %s %d", &a, c, &b);
    l = strlen (c);
    x = 0;
    {
        OpO5A3J = 0;
        while (OpO5A3J < l) {
            if (c[OpO5A3J] <= 'Z' && c[OpO5A3J] >= 'A')
                d[OpO5A3J] = c[OpO5A3J] - 'A' + 10;
            else if ('z' >= c[OpO5A3J] && c[OpO5A3J] >= 'a')
                d[OpO5A3J] = c[OpO5A3J] - 'a' + 10;
            else
                d[OpO5A3J] = c[OpO5A3J] - '0';
            x = d[OpO5A3J] + x * a;
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
            OpO5A3J = OpO5A3J +1;
        };
    }
    if (x == 0)
        printf ("%d", 0);
    {
        lmMBai5bLuAN = 0;
        while (x != 0) {
            shQKZiX7ogj9[lmMBai5bLuAN] = x % b;
            lmMBai5bLuAN = lmMBai5bLuAN + 1;
            x = x / b;
        };
    }
    shQKZiX7ogj9[lmMBai5bLuAN] = 0;
    {
        y = 0;
        while (y < lmMBai5bLuAN) {
            if (shQKZiX7ogj9[y] <= 9)
                f[lmMBai5bLuAN - 1 - y] = '0' + shQKZiX7ogj9[y];
            else
                f[lmMBai5bLuAN - 1 - y] = shQKZiX7ogj9[y] - 10 + 'A';
            y = y + 1;
            f[lmMBai5bLuAN] = '\0';
        };
    }
    printf ("%s", f);
    getchar ();
    getchar ();
}

