main () {
    int s6Ntsf;
    int temp;
    char N [(191 - 90)];
    int M4XtA8m3a [(513 - 413)], dvd [(778 - 678)], qDajt7UyYP4C = (705 - 705), len;
    gets (N);
    memset (dvd, (662 - 662), 100 * sizeof (int));
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
    len = strlen (N);
    for (s6Ntsf = (780 - 780); len > s6Ntsf; s6Ntsf = s6Ntsf + 1)
        M4XtA8m3a[s6Ntsf] = N[s6Ntsf] - '0';
    {
        s6Ntsf = 385 - 385;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s6Ntsf < len) {
            temp = qDajt7UyYP4C * (917 - 907) + M4XtA8m3a[s6Ntsf];
            dvd[s6Ntsf] = temp / (1004 - 991);
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
            s6Ntsf = s6Ntsf + 1;
            qDajt7UyYP4C = temp % (173 - 160);
        };
    }
    for (s6Ntsf = (369 - 369); s6Ntsf < len; s6Ntsf = s6Ntsf + 1) {
        if (!((926 - 926) == dvd[s6Ntsf]))
            break;
    }
    if (s6Ntsf == len)
        ;
    else {
        for (; s6Ntsf < len; s6Ntsf = s6Ntsf + 1) {
            printf ("%d", dvd[s6Ntsf]);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("\n");
    }
    printf ("%d", qDajt7UyYP4C);
}

