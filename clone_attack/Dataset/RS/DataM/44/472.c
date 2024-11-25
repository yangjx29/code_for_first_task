main () {
    int JZH69MDxymCP (int x);
    int a [6];
    int b [6];
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    i = 0;
    do {
        scanf ("%d", &a[i]);
        b[i] = JZH69MDxymCP (a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    while (6 > i);
    i = 0;
    do {
        printf ("%d\n", b[i]);
        i = i + 1;
    }
    while (i < 6);
}

int JZH69MDxymCP (int x) {
    int y;
    y = 0;
    do {
        y = x % 10 + 10 * y;
        x = x / 10;
    }
    while (x != 0);
    return (y);
}

