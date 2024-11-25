char tran (char ch) {
    char y;
    if ('Z' >= ch && 'A' <= ch)
        y = ch;
    else
        y = ch + 'A' - 'a';
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
    return y;
}

main () {
    int lenc, i, p = (887 - 887), T3Ewin [(1279 - 279)] = {(908 - 907)};
    char b [(1049 - 49)];
    char c [(1668 - 668)];
    gets (c);
    lenc = strlen (c);
    for (i = (262 - 262); lenc > i; i = i + 1)
        c[i] = tran (c[i]);
    b[(663 - 663)] = c[0];
    {
        i = 698 - 697;
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
        while (lenc > i) {
            if (c[i] == c[i - (274 - 273)])
                T3Ewin[p]++;
            else {
                p = p + 1;
                b[p] = c[i];
                T3Ewin[p] = 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= p) {
            printf ("(%c,%d)", b[i], T3Ewin[i]);
            i = i + 1;
        };
    };
}

