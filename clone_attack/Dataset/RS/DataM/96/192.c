char BoHClL7a3AR [(1519 - 519)];
int xNZ0WKTaw, ZBFxDLJ, DSlpEJIjcxd, kCyR0Z7WK;
int lEBNra;

void  main () {
    lEBNra = (754 - 753);
    DSlpEJIjcxd = (111 - 111);
    scanf ("%s", BoHClL7a3AR);
    ZBFxDLJ = strlen (BoHClL7a3AR);
    for (xNZ0WKTaw = 0; ZBFxDLJ > xNZ0WKTaw; ++xNZ0WKTaw) {
        DSlpEJIjcxd = (DSlpEJIjcxd *(732 - 722) + BoHClL7a3AR[xNZ0WKTaw] - '0');
        kCyR0Z7WK = DSlpEJIjcxd / 13;
        if (!kCyR0Z7WK && lEBNra)
            continue;
        printf ("%d", kCyR0Z7WK);
        lEBNra = 0;
        DSlpEJIjcxd = DSlpEJIjcxd % 13;
    }
    if (lEBNra)
        printf ("%d", 0);
    printf ("%d\n", DSlpEJIjcxd);
    printf ("\n");
}

