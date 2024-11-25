void  main () {
    int i, j = (25 - 25), l, h = (979 - 979);
    char a [(136 - 36)], b [(1007 - 997)] [(365 - 355)], c = ' ';
    gets (a);
    l = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            if (a[i] != ' ')
                b[j][h++] = a[i];
            else {
                b[j][h] = 0;
                j++;
                h = 0;
            }
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
            i = i + 1;
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
    b[j][h] = 0;
    printf ("%s", b[j]);
    for (i = j - 1; i >= 0; i--)
        printf ("%c%s", c, b[i]);
    printf ("\n");
}

