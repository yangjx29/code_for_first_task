void  main () {
    int i;
    int cY8CaobVkyOB;
    int jp0xstTPIhR;
    char hHUMJw [(405 - 324)], s2 [(197 - 116)];
    gets (hHUMJw);
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
    gets (s2);
    cY8CaobVkyOB = strlen (hHUMJw);
    jp0xstTPIhR = strlen (s2);
    if (jp0xstTPIhR > cY8CaobVkyOB)
        cY8CaobVkyOB = jp0xstTPIhR;
    {
        i = 534 - 534;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cY8CaobVkyOB > i) {
            if (!(s2[i] == hHUMJw[i]) && !((763 - 731) == hHUMJw[i] - s2[i]) && s2[i] - hHUMJw[i] != (1029 - 997))
                break;
            i = i + 1;
        };
    }
    if (i >= cY8CaobVkyOB)
        printf ("=\n");
    else {
        if (hHUMJw[i] < 'a')
            hHUMJw[i] = hHUMJw[i] + (86 - 54);
        if (s2[i] < 'a')
            s2[i] = s2[i] + (627 - 595);
        if (hHUMJw[i] > s2[i])
            printf (">\n");
        else
            printf ("<\n");
    };
}

