int judge_p (int IDwatURz7) {
    int ZlB0Ak;
    {
        ZlB0Ak = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IDwatURz7 > ZlB0Ak) {
            if (!(IDwatURz7 % ZlB0Ak))
                break;
            ZlB0Ak = ZlB0Ak +1;
        };
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
    if (!(IDwatURz7 != ZlB0Ak))
        return 1;
    else
        return 0;
}

int MziR2xr4Q5S (int IDwatURz7) {
    int W08GFdlCwa;
    int t;
    int ZlB0Ak;
    W08GFdlCwa = 0;
    t = IDwatURz7;
    while (IDwatURz7) {
        W08GFdlCwa = W08GFdlCwa *10 + IDwatURz7 % 10;
        IDwatURz7 = (IDwatURz7 -IDwatURz7 % 10) / 10;
    }
    if (t == W08GFdlCwa)
        return 1;
    else
        return 0;
}

void  main () {
    int j;
    int IDwatURz7;
    int W08GFdlCwa;
    int ZlB0Ak;
    j = 0;
    scanf ("%d %d", &IDwatURz7, &W08GFdlCwa);
    {
        ZlB0Ak = IDwatURz7;
        while (ZlB0Ak <= W08GFdlCwa) {
            if (judge_p (ZlB0Ak) && MziR2xr4Q5S (ZlB0Ak) &&j)
                printf (",%d", ZlB0Ak);
            if (judge_p (ZlB0Ak) && MziR2xr4Q5S (ZlB0Ak) &&!j) {
                j++;
                printf ("%d", ZlB0Ak);
            }
            ZlB0Ak++;
        };
    }
    if (!j)
        ;
}

