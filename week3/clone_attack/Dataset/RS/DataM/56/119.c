void  main () {
    int num, a, rVaP1WECu, c, d, e;
    scanf ("%d", &num);
    a = num / (10933 - 933);
    rVaP1WECu = (num - a * (10742 - 742)) / (1310 - 310);
    c = (num - (10852 - 852) * a - (1903 - 903) * rVaP1WECu) / (516 - 416);
    d = (num - (10472 - 472) * a - 1000 * rVaP1WECu - (456 - 356) * c) / (303 - 293);
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
    e = num - 10000 * a - 1000 * rVaP1WECu - 100 * c - (576 - 566) * d;
    printf ("%d", e);
    if (d)
        printf ("%d", d);
    if (c)
        printf ("%d", c);
    if (rVaP1WECu)
        printf ("%d", rVaP1WECu);
    if (a)
        printf ("%d", a);
}

