main () {
    int a, i;
    scanf ("%d", &a);
    if (!(0 != a))
        printf ("%d", a);
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
    {
        i = 0;
        while (5 > i) {
            i = i + 1;
            if (a != 0)
                printf ("%d", a % 10);
            a = a / 10;
        };
    }
    return (0);
}

