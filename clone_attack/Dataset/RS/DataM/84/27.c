void  main () {
    int TQK5xAW;
    int n;
    int XVrLhCgE;
    int blK2tL8cpC6;
    int c;
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
    TQK5xAW = (482 - 481);
    scanf ("%d", &n);
    scanf ("%d%d", &blK2tL8cpC6, &c);
    if (c > blK2tL8cpC6) {
        c = c + blK2tL8cpC6;
        blK2tL8cpC6 = c - blK2tL8cpC6;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = c - blK2tL8cpC6;
    }
    for (; TQK5xAW <= n;) {
        scanf ("%d", &XVrLhCgE);
        if (XVrLhCgE > blK2tL8cpC6) {
            XVrLhCgE = XVrLhCgE +blK2tL8cpC6;
            blK2tL8cpC6 = XVrLhCgE -blK2tL8cpC6;
            XVrLhCgE = XVrLhCgE -blK2tL8cpC6;
        }
        else if (XVrLhCgE > c) {
            XVrLhCgE = XVrLhCgE +c;
            c = XVrLhCgE -c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            XVrLhCgE = XVrLhCgE -c;
        }
        TQK5xAW++;
    }
    printf ("%d\n%d", blK2tL8cpC6, c);
}

