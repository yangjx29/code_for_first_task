void  main () {
    int n, i, j, pbIovBAx, number [1000], flag = 0;
    scanf ("%d%d", &n, &pbIovBAx);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &number[i]);
            i++;
        };
    }
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
    {
        i = 0;
        while (i < n) {
            for (j = 0; n > j; j++) {
                if (!(j == i)) {
                    if (number[i] + number[j] == pbIovBAx)
                        flag = flag + 1;
                }
                else
                    continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (flag != 0)
        printf ("yes");
    else
        printf ("no");
}

