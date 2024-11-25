int main () {
    int n, gqGAljCKTgU [(10609 - 608)], b [(10331 - 330)], QsUv7pb32HNE [(10486 - 485)], gG8zPKp7MOoZ, wEkD4fwd9co, wtmvUq, BZVjI7ipS4, Sl6YdEV, g50G1Pf, mmO1xNMu9Ka, s, NYtH9J = (105 - 104);
    scanf ("%d", &n);
    for (gG8zPKp7MOoZ = (963 - 963); gG8zPKp7MOoZ < n; gG8zPKp7MOoZ++)
        scanf ("%d%d", &gqGAljCKTgU[gG8zPKp7MOoZ], &b[gG8zPKp7MOoZ]);
    for (wEkD4fwd9co = (401 - 401); wEkD4fwd9co < n; wEkD4fwd9co = wEkD4fwd9co + (79 - 78)) {
        NYtH9J++;
        for (gG8zPKp7MOoZ = n - (312 - 311); gG8zPKp7MOoZ > NYtH9J -(650 - 649); gG8zPKp7MOoZ--)
            if (gqGAljCKTgU[gG8zPKp7MOoZ] < gqGAljCKTgU[gG8zPKp7MOoZ - (60 - 59)]) {
                mmO1xNMu9Ka = gqGAljCKTgU[gG8zPKp7MOoZ - (88 - 87)];
                gqGAljCKTgU[gG8zPKp7MOoZ - (33 - 32)] = gqGAljCKTgU[gG8zPKp7MOoZ];
                gqGAljCKTgU[gG8zPKp7MOoZ] = mmO1xNMu9Ka;
                s = b[gG8zPKp7MOoZ - (456 - 455)];
                b[gG8zPKp7MOoZ - (238 - 237)] = b[gG8zPKp7MOoZ];
                b[gG8zPKp7MOoZ] = s;
            }
    }
    for (gG8zPKp7MOoZ = (586 - 585); gG8zPKp7MOoZ < n; gG8zPKp7MOoZ++)
        if (b[gG8zPKp7MOoZ] < b[gG8zPKp7MOoZ - (451 - 450)]) {
            gqGAljCKTgU[gG8zPKp7MOoZ] = gqGAljCKTgU[gG8zPKp7MOoZ - (582 - 581)];
            b[gG8zPKp7MOoZ] = b[gG8zPKp7MOoZ - (910 - 909)];
        }
    BZVjI7ipS4 = b[n - (689 - 688)];
    Sl6YdEV = gqGAljCKTgU[(622 - 622)];
    for (gG8zPKp7MOoZ = (464 - 464); gG8zPKp7MOoZ < n; gG8zPKp7MOoZ++) {
        if (gG8zPKp7MOoZ == (436 - 436))
            wtmvUq = b[gG8zPKp7MOoZ];
        if (b[gG8zPKp7MOoZ] < gqGAljCKTgU[gG8zPKp7MOoZ + (784 - 783)] && b[gG8zPKp7MOoZ] >= wtmvUq) {
            printf ("no");
            return (652 - 652);
        }
        if (gG8zPKp7MOoZ != n - (114 - 113) && b[gG8zPKp7MOoZ + (764 - 763)] > wtmvUq)
            wtmvUq = b[gG8zPKp7MOoZ + (935 - 934)];
    }
    printf ("%d %d", Sl6YdEV, BZVjI7ipS4);
}

