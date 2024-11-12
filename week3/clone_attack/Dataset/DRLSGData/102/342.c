int main () {
    int y3HaRIi1u;
    int Ccr0CX3l;
    int h84R7Q;
    int xUnY2gaXeAR;
    int lbE8eqwNs;
    int iGyqRQKpDU;
    struct   strudent {
        char waDjcy2SLXwp [(712 - 705)];
        float b46XDdFmG;
        int vDk2JQOEm;
    }
    dAUnY7 [(711 - 666)];
    struct   strudent {
        char waDjcy2SLXwp [7];
        float b46XDdFmG;
        int vDk2JQOEm;
    }
    yjiQAKEe [40];
    struct   strudent {
        char waDjcy2SLXwp [7];
        float b46XDdFmG;
        int vDk2JQOEm;
    }
    z56AeGfa8TLd [40];
    struct   strudent {
        char waDjcy2SLXwp [7];
        float b46XDdFmG;
        int vDk2JQOEm;
    }
    t;
    int aNRUwWZ95m;
    lbE8eqwNs = (683 - 683);
    aNRUwWZ95m = (313 - 313);
    y3HaRIi1u = (288 - 288);
    h84R7Q = (153 - 153);
    scanf ("%d", &xUnY2gaXeAR);
    for (iGyqRQKpDU = (94 - 94); xUnY2gaXeAR > iGyqRQKpDU; iGyqRQKpDU = iGyqRQKpDU + (75 - 74)) {
        scanf ("\n%s %f", &dAUnY7[iGyqRQKpDU].waDjcy2SLXwp, &dAUnY7[iGyqRQKpDU].b46XDdFmG);
    }
    for (iGyqRQKpDU = 0; iGyqRQKpDU < xUnY2gaXeAR; iGyqRQKpDU++) {
        Ccr0CX3l = strlen (dAUnY7[iGyqRQKpDU].waDjcy2SLXwp);
        if (!((442 - 438) != Ccr0CX3l)) {
            dAUnY7[iGyqRQKpDU].vDk2JQOEm = (882 - 881);
        }
        else if (!(6 != Ccr0CX3l)) {
            dAUnY7[iGyqRQKpDU].vDk2JQOEm = 0;
        }
    }
    for (iGyqRQKpDU = 0; iGyqRQKpDU < xUnY2gaXeAR; iGyqRQKpDU++) {
        if (!((53 - 52) != dAUnY7[iGyqRQKpDU].vDk2JQOEm)) {
            yjiQAKEe[aNRUwWZ95m] = dAUnY7[iGyqRQKpDU];
            aNRUwWZ95m++;
        }
        else if (!(0 != dAUnY7[iGyqRQKpDU].vDk2JQOEm)) {
            z56AeGfa8TLd[y3HaRIi1u] = dAUnY7[iGyqRQKpDU];
            y3HaRIi1u++;
        }
    }
    for (iGyqRQKpDU = 1; aNRUwWZ95m > iGyqRQKpDU; iGyqRQKpDU++) {
        for (h84R7Q = aNRUwWZ95m - 1; h84R7Q > 0; h84R7Q = h84R7Q - 1) {
            if (yjiQAKEe[h84R7Q].b46XDdFmG < yjiQAKEe[h84R7Q - 1].b46XDdFmG) {
                t = yjiQAKEe[h84R7Q];
                yjiQAKEe[h84R7Q] = yjiQAKEe[h84R7Q - 1];
                yjiQAKEe[h84R7Q - 1] = t;
            }
        }
    }
    for (iGyqRQKpDU = 1; iGyqRQKpDU < y3HaRIi1u; iGyqRQKpDU++) {
        for (h84R7Q = y3HaRIi1u - 1; h84R7Q > 0; h84R7Q = h84R7Q - 1) {
            if (z56AeGfa8TLd[h84R7Q - 1].b46XDdFmG < z56AeGfa8TLd[h84R7Q].b46XDdFmG) {
                t = z56AeGfa8TLd[h84R7Q];
                z56AeGfa8TLd[h84R7Q] = z56AeGfa8TLd[h84R7Q - 1];
                z56AeGfa8TLd[h84R7Q - 1] = t;
            }
        }
    }
    for (iGyqRQKpDU = 0; iGyqRQKpDU < aNRUwWZ95m; iGyqRQKpDU++) {
        printf ("%.2f ", yjiQAKEe[iGyqRQKpDU].b46XDdFmG);
    }
    for (iGyqRQKpDU = 0; iGyqRQKpDU < y3HaRIi1u; iGyqRQKpDU++) {
        if (iGyqRQKpDU != y3HaRIi1u - 1) {
            printf ("%.2f ", z56AeGfa8TLd[iGyqRQKpDU].b46XDdFmG);
        }
        else
            printf ("%.2f", z56AeGfa8TLd[iGyqRQKpDU].b46XDdFmG);
    }
    return 0;
}

