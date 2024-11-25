void  XhGOCzEaL (char a [], int n) {
    int u1Pp0i;
    int llXknpm;
    {
        u1Pp0i = 1;
        while (u1Pp0i < n) {
            if (!(a[0] == a[u1Pp0i]) && !('\0' == a[u1Pp0i]))
                break;
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
            u1Pp0i = u1Pp0i + 1;
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
    for (llXknpm = u1Pp0i - 1; llXknpm > -1; llXknpm = llXknpm - 1) {
        if (a[llXknpm] == a[0])
            break;
    }
    printf ("%d %d\n", llXknpm, u1Pp0i);
    a[llXknpm] = '\0', a[u1Pp0i] = '\0';
    if (a[0] != '\0')
        XhGOCzEaL (a, n);
}

void  main () {
    int n;
    char a [100];
    scanf ("%s", a);
    n = strlen (a);
    XhGOCzEaL (a, n);
}

