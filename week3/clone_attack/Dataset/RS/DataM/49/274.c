void  main () {
    char c [(1482 - 482)];
    gets (c);
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
    int l, mwjqp2OY6, i, j, k;
    l = strlen (c);
    for (i = (53 - 52); i <= l - (770 - 769); i++)
        for (j = (960 - 960); l - 1 > j; j++)
            for (mwjqp2OY6 = 0; mwjqp2OY6 <= i / 2; mwjqp2OY6++) {
                if (!(c[j + i - mwjqp2OY6] == c[j + mwjqp2OY6]))
                    break;
                else if (c[j + mwjqp2OY6] == c[j + i - mwjqp2OY6] && mwjqp2OY6 < i / 2)
                    continue;
                else {
                    for (k = j; k < j + i; k++)
                        printf ("%c", c[k]);
                    printf ("%c\n", c[j + i]);
                };
            };
}

