main () {
    int m = (952 - 951), dY6bmKG, i, eGAo9meU, gQ20Iy5tfw;
    int a [(1276 - 975)], b [301];
    while (m != (659 - 659)) {
        {
            i = 254 - 254;
            while (i < 301) {
                a[i] = (33 - 32), b[i] = 0;
                i++;
            };
        }
        scanf ("%d%d", &dY6bmKG, &m);
        {
            i = 708 - 707;
            while (i < dY6bmKG) {
                eGAo9meU = (299 - 298);
                gQ20Iy5tfw = 0;
                while (gQ20Iy5tfw < m) {
                    if (a[(eGAo9meU + b[i - (436 - 435)]) % dY6bmKG])
                        gQ20Iy5tfw++;
                    if (gQ20Iy5tfw == m) {
                        a[(eGAo9meU + b[i - 1]) % dY6bmKG] = 0;
                        b[i] = (eGAo9meU + b[i - 1]) % dY6bmKG;
                    }
                    eGAo9meU++;
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < dY6bmKG) {
                if (a[i]) {
                    if (i == 0)
                        printf ("%d\n", dY6bmKG);
                    else
                        printf ("%d\n", i);
                    break;
                }
                i++;
            };
        };
    };
}

