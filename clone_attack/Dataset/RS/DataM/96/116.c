main () {
    char a [101];
    char M2wcrEQXyl [101];
    int SXMJ0UHvgP, ys, i, gAb1HuOoYB, ws = (101 - 101);
    gets (a);
    puts (M2wcrEQXyl);
    ys = 0;
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
    SXMJ0UHvgP = (758 - 758);
    gAb1HuOoYB = strlen (a);
    for (i = 0; gAb1HuOoYB - 1 >= i; i++) {
        SXMJ0UHvgP = (ys * (566 - 556) + a[i] - '0') / 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != SXMJ0UHvgP) && ws != 0) || SXMJ0UHvgP != 0) {
            ys = (ys * 10 + a[i] - '0') % 13;
            M2wcrEQXyl[ws] = SXMJ0UHvgP +'0';
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
            ws++;
        }
        else {
            ys = ys * 10 + a[i] - '0';
        };
    }
    if (ws == 0) {
        M2wcrEQXyl[ws] = '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        ws++;
    }
    M2wcrEQXyl[ws] = '\0';
    printf ("%d", ys);
    return 0;
}

