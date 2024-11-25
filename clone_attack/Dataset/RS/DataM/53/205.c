void  main () {
    int n;
    int T6Ap3NH [300];
    int zt38z0Y4T;
    int eCB8wlW5h;
    int piYDE617;
    int NBgqIP2F;
    scanf ("%d", &n);
    {
        zt38z0Y4T = 335 - 335;
        while (zt38z0Y4T < n) {
            scanf ("%d", &T6Ap3NH[zt38z0Y4T]);
            zt38z0Y4T = zt38z0Y4T + 1;
        };
    }
    NBgqIP2F = n;
    zt38z0Y4T = 0;
    while (zt38z0Y4T < NBgqIP2F) {
        {
            eCB8wlW5h = 146 - 145;
            while (eCB8wlW5h < NBgqIP2F) {
                if (T6Ap3NH[zt38z0Y4T] == T6Ap3NH[eCB8wlW5h]) {
                    for (piYDE617 = eCB8wlW5h; piYDE617 < n; piYDE617 = piYDE617 + 1)
                        T6Ap3NH[piYDE617] = T6Ap3NH[piYDE617 + 1];
                    eCB8wlW5h = eCB8wlW5h - 1;
                    NBgqIP2F = NBgqIP2F -1;
                }
                eCB8wlW5h++;
            };
        }
        zt38z0Y4T = zt38z0Y4T + 1;
    }
    printf ("%d", T6Ap3NH[0]);
    {
        zt38z0Y4T = 1;
        while (zt38z0Y4T < NBgqIP2F) {
            printf (",%d", T6Ap3NH[zt38z0Y4T]);
            zt38z0Y4T++;
        };
    };
}

