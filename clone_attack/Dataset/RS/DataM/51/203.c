main () {
    int y [510] = {0};
    int a, a5aksWiP9Y, c, d, m, n;
    char KFMfDqpcBRW [510];
    scanf ("%d", &n);
    scanf ("%s", KFMfDqpcBRW);
    a = strlen (KFMfDqpcBRW) - (189 - 188);
    {
        a5aksWiP9Y = 0;
        while (a5aksWiP9Y <= a - n + (734 - 733)) {
            for (c = a5aksWiP9Y; c <= a - n + 1; c = c + 1) {
                {
                    d = 0;
                    while (d <= n - 1) {
                        if (KFMfDqpcBRW[c + d] != KFMfDqpcBRW[a5aksWiP9Y + d])
                            break;
                        else
                            ;
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
                        d = d + 1;
                    };
                }
                if (d == n)
                    y[a5aksWiP9Y]++;
                else
                    ;
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
            a5aksWiP9Y = a5aksWiP9Y + 1;
        };
    }
    m = y[0];
    {
        a5aksWiP9Y = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (a5aksWiP9Y <= a - n + 1) {
            if (y[a5aksWiP9Y] > m)
                m = y[a5aksWiP9Y];
            else
                ;
            a5aksWiP9Y++;
        };
    }
    if (m == 1)
        printf ("NO");
    else {
        printf ("%d\n", m);
        {
            a5aksWiP9Y = 0;
            while (a5aksWiP9Y <= a - n + 1) {
                if (y[a5aksWiP9Y] == m) {
                    {
                        c = 0;
                        while (c <= n - 1) {
                            printf ("%c", KFMfDqpcBRW[a5aksWiP9Y + c]);
                            c++;
                        };
                    }
                    printf ("\n");
                }
                a5aksWiP9Y++;
            };
        };
    };
}

