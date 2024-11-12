void  main () {
    typedef struct   eFa45LPZu {
        char d4z8wKpPeD1 [(856 - 834)];
        int wkvAKfx01iYX;
        int zdxDBEWHXVlu;
        char ldN8Bw1;
        char xd7JRQWuh;
        int lw;
        int vlsUC7Qdp5O;
    }
    eFa45LPZu;
    eFa45LPZu lx1HOluQAgb [(862 - 762)];
    int i, n, MF9OgeWYHhGz, c2kFMRZQjEs1;
    scanf ("%d", &n);
    memset (lx1HOluQAgb, (343 - 343), sizeof (lx1HOluQAgb));
    {
        i = 584 - 584;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", (lx1HOluQAgb + i)->d4z8wKpPeD1, &(lx1HOluQAgb + i)->wkvAKfx01iYX, &(lx1HOluQAgb + i)->zdxDBEWHXVlu, &(lx1HOluQAgb + i)->ldN8Bw1, &(lx1HOluQAgb + i)->xd7JRQWuh, &(lx1HOluQAgb + i)->lw);
            if ((lx1HOluQAgb + i)->wkvAKfx01iYX > (209 - 129) && (lx1HOluQAgb + i)->lw)
                (lx1HOluQAgb + i)->vlsUC7Qdp5O = (lx1HOluQAgb + i)->vlsUC7Qdp5O + (8338 - 338);
            if ((234 - 149) < (lx1HOluQAgb + i)->wkvAKfx01iYX && (lx1HOluQAgb + i)->zdxDBEWHXVlu > (471 - 391))
                (lx1HOluQAgb + i)->vlsUC7Qdp5O = (lx1HOluQAgb + i)->vlsUC7Qdp5O + (4107 - 107);
            if ((lx1HOluQAgb + i)->wkvAKfx01iYX > (275 - 185))
                (lx1HOluQAgb + i)->vlsUC7Qdp5O = (lx1HOluQAgb + i)->vlsUC7Qdp5O + (2176 - 176);
            if ((lx1HOluQAgb + i)->wkvAKfx01iYX > (702 - 617) && (lx1HOluQAgb + i)->xd7JRQWuh == 'Y')
                (lx1HOluQAgb + i)->vlsUC7Qdp5O = (lx1HOluQAgb + i)->vlsUC7Qdp5O + (1204 - 204);
            if ((lx1HOluQAgb + i)->zdxDBEWHXVlu > 80 && (lx1HOluQAgb + i)->ldN8Bw1 == 'Y')
                (lx1HOluQAgb + i)->vlsUC7Qdp5O += (1095 - 245);
            i = i + 1;
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
    MF9OgeWYHhGz = (605 - 605);
    c2kFMRZQjEs1 = (754 - 754);
    {
        i = 254 - 254;
        while (i < n) {
            if (MF9OgeWYHhGz < (lx1HOluQAgb + i)->vlsUC7Qdp5O)
                MF9OgeWYHhGz = (lx1HOluQAgb + i)->vlsUC7Qdp5O;
            c2kFMRZQjEs1 += (lx1HOluQAgb + i)->vlsUC7Qdp5O;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (MF9OgeWYHhGz == (lx1HOluQAgb + i)->vlsUC7Qdp5O) {
                printf ("%s\n", (lx1HOluQAgb + i)->d4z8wKpPeD1);
                break;
            }
            i++;
        };
    }
    printf ("%d\n%d\n", MF9OgeWYHhGz, c2kFMRZQjEs1);
}

