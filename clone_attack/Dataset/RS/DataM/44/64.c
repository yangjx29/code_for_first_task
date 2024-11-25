int qPxds2u (int vDl1uaJtB4) {
    int rcQ0OvtqBHe;
    rcQ0OvtqBHe = (857 - 857);
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
    for (; vDl1uaJtB4 != 0;) {
        rcQ0OvtqBHe = rcQ0OvtqBHe * 10 + vDl1uaJtB4 % 10;
        vDl1uaJtB4 = vDl1uaJtB4 / 10;
    }
    return (rcQ0OvtqBHe);
}

main () {
    int x [6];
    int p [6];
    int rcQ0OvtqBHe;
    getchar ();
    getchar ();
    {
        rcQ0OvtqBHe = 0;
        while (6 > rcQ0OvtqBHe) {
            scanf ("%d", &x[rcQ0OvtqBHe]);
            rcQ0OvtqBHe = rcQ0OvtqBHe + 1;
        };
    }
    for (rcQ0OvtqBHe = 0; rcQ0OvtqBHe < 6; rcQ0OvtqBHe++) {
        if (x[rcQ0OvtqBHe] >= 0)
            p[rcQ0OvtqBHe] = qPxds2u (x[rcQ0OvtqBHe]);
        else
            p[rcQ0OvtqBHe] = -qPxds2u (-x[rcQ0OvtqBHe]);
    }
    for (rcQ0OvtqBHe = 0; rcQ0OvtqBHe < 6; rcQ0OvtqBHe++)
        printf ("%d\n", p[rcQ0OvtqBHe]);
}

