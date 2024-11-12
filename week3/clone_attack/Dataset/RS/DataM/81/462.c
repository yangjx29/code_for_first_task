void  main () {
    int B403r2fP [5] [5], PAIC0Lh [(245 - 244)] [5];
    int eHeosnj5u1 (int pdpW8U [(361 - 356)] [5], int OhUbB0vPt, int GmCjW8);
    int OhUbB0vPt, GmCjW8, uq3jis1yX, J9Nw4Gk;
    for (uq3jis1yX = 0; 4 >= uq3jis1yX; uq3jis1yX = uq3jis1yX + 1)
        for (J9Nw4Gk = 0; 4 >= J9Nw4Gk; J9Nw4Gk++)
            scanf ("%d", &B403r2fP[uq3jis1yX][J9Nw4Gk]);
    scanf ("%d %d", &OhUbB0vPt, &GmCjW8);
    if (eHeosnj5u1 (B403r2fP, OhUbB0vPt, GmCjW8) == 0)
        ;
    if (eHeosnj5u1 (B403r2fP, OhUbB0vPt, GmCjW8) == 1) {
        for (J9Nw4Gk = 0; J9Nw4Gk <= 4; J9Nw4Gk++) {
            PAIC0Lh[0][J9Nw4Gk] = B403r2fP[OhUbB0vPt][J9Nw4Gk];
            B403r2fP[OhUbB0vPt][J9Nw4Gk] = B403r2fP[GmCjW8][J9Nw4Gk];
            B403r2fP[GmCjW8][J9Nw4Gk] = PAIC0Lh[0][J9Nw4Gk];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (uq3jis1yX = 0; uq3jis1yX <= 4; uq3jis1yX++)
            printf ("%d %d %d %d %d\n", B403r2fP[uq3jis1yX][0], B403r2fP[uq3jis1yX][1], B403r2fP[uq3jis1yX][2], B403r2fP[uq3jis1yX][3], B403r2fP[uq3jis1yX][4]);
    };
}

int eHeosnj5u1 (int B403r2fP [5] [5], int OhUbB0vPt, int GmCjW8) {
    int oV2sRPIw9l;
    if (OhUbB0vPt >= 5 || GmCjW8 >= 5)
        oV2sRPIw9l = 0;
    if (OhUbB0vPt < 5 && GmCjW8 < 5)
        oV2sRPIw9l = 1;
    return (oV2sRPIw9l);
}

