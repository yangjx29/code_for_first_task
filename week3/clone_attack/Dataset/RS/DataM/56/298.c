main () {
    int a [6], l, EXPJwoEC;
    l = 1;
    while (!(1 != scanf ("%1d", &a[l])))
        l++;
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
    l = l - 1;
    for (EXPJwoEC = l; EXPJwoEC >= 1; EXPJwoEC = EXPJwoEC -1)
        printf ("%d", a[EXPJwoEC]);
}

