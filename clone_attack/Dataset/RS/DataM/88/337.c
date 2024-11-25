void  main () {
    int i;
    char a [100], *p;
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
    gets (a);
    p = a;
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
        while (!('\0' == *(p + i))) {
            if ((*(p + i) >= 48) && (*(p + i) <= 58)) {
                printf ("%d", *(p + i) - 48);
            }
            else {
            }
            i++;
        };
    };
}

