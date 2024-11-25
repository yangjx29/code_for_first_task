void  main () {
    char a [50] [1000], p;
    int i;
    int gOy4C7N;
    i = 0;
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
    do {
        i++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s%c", a[i], &p);
    }
    while (p != '\n');
    gOy4C7N = i;
    {
        i = gOy4C7N;
        while (i >= 2) {
            printf ("%s ", a[i]);
            i--;
        };
    }
    printf ("%s", a[1]);
}

