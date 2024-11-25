main () {
    int Pf8Wd3TzAXNH;
    int kdtmB0IG;
    int qz0K7v;
    int jJLiD49x6kAr;
    int B8DEmzM6N;
    int LiH70M3 [(471 - 445)] [1001];
    struct   h {
        char ebL0KG4qO [27];
        int QmJhE52du6T1;
        struct   h *TeGoz9V1QE;
    }
    *EtT8qp;
    struct   h {
        char ebL0KG4qO [27];
        int QmJhE52du6T1;
        struct   h *TeGoz9V1QE;
    }
    *MePwTN8CR3zt;
    struct   h {
        char ebL0KG4qO [27];
        int QmJhE52du6T1;
        struct   h *TeGoz9V1QE;
    }
    *cjOpdLWUx;
    int hcuKsL5p1hv7;
    int LgjCW8iJp7H;
    scanf ("%d", &Pf8Wd3TzAXNH);
    EtT8qp = len;
    MePwTN8CR3zt = cjOpdLWUx = EtT8qp;
    jJLiD49x6kAr = LiH70M3[(680 - 680)][(149 - 149)];
    {
        kdtmB0IG = 0;
        while (26 > kdtmB0IG) {
            for (qz0K7v = 0; 1000 > qz0K7v; qz0K7v = qz0K7v + 1)
                LiH70M3[kdtmB0IG][qz0K7v] = 0;
            kdtmB0IG = 589 - 588;
        }
    }
    {
        kdtmB0IG = 0;
        while (Pf8Wd3TzAXNH > kdtmB0IG) {
            kdtmB0IG = kdtmB0IG + 1;
            scanf ("%d %s", &EtT8qp->QmJhE52du6T1, EtT8qp->ebL0KG4qO);
            LgjCW8iJp7H = strlen (EtT8qp->ebL0KG4qO);
            {
                qz0K7v = 0;
                while (qz0K7v < LgjCW8iJp7H) {
                    hcuKsL5p1hv7 = (EtT8qp->ebL0KG4qO)[qz0K7v] - 65;
                    qz0K7v = qz0K7v + 1;
                    B8DEmzM6N = LiH70M3[hcuKsL5p1hv7][0] += 1;
                    LiH70M3[hcuKsL5p1hv7][B8DEmzM6N] = EtT8qp->QmJhE52du6T1;
                }
            }
            MePwTN8CR3zt = len;
            EtT8qp->TeGoz9V1QE = MePwTN8CR3zt;
            EtT8qp = MePwTN8CR3zt;
        }
    }
    qz0K7v = 0;
    for (kdtmB0IG = 0; 26 > kdtmB0IG; kdtmB0IG++) {
        if (jJLiD49x6kAr < LiH70M3[kdtmB0IG][0]) {
            jJLiD49x6kAr = LiH70M3[kdtmB0IG][0];
            qz0K7v = kdtmB0IG;
        }
    }
    kdtmB0IG = 1;
    printf ("%c\n%d\n", qz0K7v + 65, jJLiD49x6kAr);
    for (; LiH70M3[qz0K7v][kdtmB0IG];) {
        printf ("%d\n", LiH70M3[qz0K7v][kdtmB0IG]);
        kdtmB0IG = kdtmB0IG + 1;
    }
    EtT8qp = cjOpdLWUx;
}

