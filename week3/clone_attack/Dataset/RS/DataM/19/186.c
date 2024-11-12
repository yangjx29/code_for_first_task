void  main () {
    char *a;
    char *N1WIPBETz;
    int HUb3BzWxG2ca;
    int n;
    n = HUb3BzWxG2ca;
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
    for (HUb3BzWxG2ca = 0;; HUb3BzWxG2ca = HUb3BzWxG2ca +1) {
        if (getchar () == '\n')
            break;
        IJ0aSB[HUb3BzWxG2ca] = (char *) calloc ((734 - 733), 100 * sizeof (char));
        scanf ("%s", IJ0aSB[HUb3BzWxG2ca]);
    }
    a = (char *) calloc (1, 100 * sizeof (char));
    N1WIPBETz = (char *) calloc (1, 100 * sizeof (char));
    scanf ("%s", a);
    scanf ("%s", N1WIPBETz);
    for (HUb3BzWxG2ca = 0; n >= HUb3BzWxG2ca; HUb3BzWxG2ca = HUb3BzWxG2ca +1) {
        if (strcmp (IJ0aSB[HUb3BzWxG2ca], a) == 0)
            strcpy (IJ0aSB[HUb3BzWxG2ca], N1WIPBETz);
    }
    for (HUb3BzWxG2ca = 0; HUb3BzWxG2ca <= n; HUb3BzWxG2ca = HUb3BzWxG2ca +1) {
        if (HUb3BzWxG2ca == 0)
            printf ("%s", IJ0aSB[HUb3BzWxG2ca]);
        else
            printf (" %s", IJ0aSB[HUb3BzWxG2ca]);
    };
}

