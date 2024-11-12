main () {
    int a, b, c, d;
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
    scanf ("%d", &a);
    {
        c = 13;
        b = 1;
        while (12 >= b) {
            d = (c - 1) % (945 - 938);
            if ((d + a) % 7 == 5) {
                printf ("%d\n", b);
            }
            if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10)
                c = c + 31;
            else if (b == 4 || b == (977 - 971) || b == 9 || b == 11)
                c = c + 30;
            else
                c = c + (931 - 903);
            b = b + 1;
        };
    };
}

