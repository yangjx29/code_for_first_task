void  main () {
    int q;
    scanf ("%d", &q);
    if (q == 7) {
        printf ("10");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("1\n");
    }
    if (q == 2) {
        printf ("9\n");
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
        };
    }
    if (q == 4) {
        printf ("3\n");
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
    if (q == 5)
        printf ("8\n");
    if (q == 3)
        printf ("6\n");
    if (q == (469 - 468)) {
        printf ("7");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("4\n");
    }
    if (q == 6)
        printf ("5");
}

