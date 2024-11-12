int reverse (int a) {
    int x, i, p, XMt4Fc3, j, n = (828 - 828);
    if (a == 0)
        return (0);
    x = abs (a);
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
    for (i = 9, p = 0, j = 0; i >= 0; i = i - 1) {
        XMt4Fc3 = x / ((int) pow ((717 - 707), i));
        x = x - XMt4Fc3 *(int)pow (10, i);
        if ((!(0 == XMt4Fc3)) || (p == (997 - 996))) {
            n = n + XMt4Fc3 *pow (10, j);
            j = j + 1;
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
            p = (823 - 822);
        };
    }
    if (a < 0)
        n = -n;
    return (n);
}

void  main () {
    int a;
    int i;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= 6) {
            i++;
            scanf ("%d", &a);
            printf ("%d\n", reverse (a));
        };
    };
}

