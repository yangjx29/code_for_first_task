main () {
    int Uk29w8P1Ix;
    int ans;
    ans = (Uk29w8P1Ix +12) % 7;
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
    if (!(5 != ans))
        printf ("1\n");
    {
        int i = 1;
        while (11 >= i) {
            if (!(1 != i) || !(3 != i) || !(5 != i) || i == 7 || i == 8 || i == 10 || i == 12)
                ans = (ans + 31) % 7;
            else if (i == 2)
                ans = (ans + 28) % 7;
            else
                ans = (ans + 30) % 7;
            if (ans == 5)
                printf ("%d\n", i + 1);
            i = i + 1;
        };
    }
    scanf ("%d", &Uk29w8P1Ix);
}

