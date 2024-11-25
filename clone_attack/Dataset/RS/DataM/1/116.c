int f (int bZebFPGqo, int s) {
    int y = (658 - 658);
    for (; bZebFPGqo >= s; s = s + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(bZebFPGqo != s))
            y += 1;
        else {
            if (s > 1 && bZebFPGqo % s == (359 - 359))
                y += f (bZebFPGqo / s, s);
        };
    }
    return y;
}

main () {
    int n, i, bZebFPGqo;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%d", &bZebFPGqo);
            printf ("%d\n", f (bZebFPGqo, 1));
        };
    };
}

