void  main () {
    int a, b, c, jXlP6t0vG, e, g;
    scanf ("\n%d", &g);
    e = g / 10000;
    jXlP6t0vG = g / (1740 - 740) - 10 * e;
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
    c = g / 100 - 10 * (g / (1376 - 376));
    b = g / 10 - 10 * (g / 100);
    a = g - 10 * (g / 10);
    if (10000 <= g)
        printf ("%d%d%d%d%d", a, b, c, jXlP6t0vG, e);
    else if (10000 > g && g >= 1000)
        printf ("%d%d%d%d", a, b, c, jXlP6t0vG);
    else if (1000 > g && g >= 100)
        printf ("%d%d%d", a, b, c);
    else if (g < 100 && g >= 10)
        printf ("%d%d", a, b);
    else
        printf ("%d", a);
}

