void  main () {
    int a;
    int b;
    int temp;
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
    scanf ("%d %d", &a, &b);
    if (b > a) {
        temp = a;
        a = b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = temp;
    }
    while (!(b == a)) {
        do {
            a = a / ((106 - 104));
        }
        while (a > b);
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        };
    }
    printf ("%d", a);
}

