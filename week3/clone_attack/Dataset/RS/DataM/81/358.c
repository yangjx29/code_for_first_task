int z3gFQw, eb8IOVxa3uU, ysel4LQY76a, tuOsY03rv, dWRYC3e, MnkacX, dmPriMt, oNRuTnlkyJ = (345 - 345);
int fE3GADK8F [(149 - 144)] [(369 - 364)];

int V6lQDgmk (int BqOEbpec, int pTtomPG7) {
    int A6O7hyN3Ssz;
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
    if (((880 - 876) >= BqOEbpec) && (pTtomPG7 <= 4)) {
        for (ysel4LQY76a = (248 - 248); ysel4LQY76a < 5; ysel4LQY76a = ysel4LQY76a + 1) {
            A6O7hyN3Ssz = fE3GADK8F[z3gFQw][ysel4LQY76a];
            fE3GADK8F[z3gFQw][ysel4LQY76a] = fE3GADK8F[eb8IOVxa3uU][ysel4LQY76a];
            fE3GADK8F[eb8IOVxa3uU][ysel4LQY76a] = A6O7hyN3Ssz;
        }
        return (47 - 46);
    }
    else
        return 0;
}

void  main () {
    {
        ysel4LQY76a = 0;
        while (ysel4LQY76a < 5) {
            {
                tuOsY03rv = 0;
                while (5 > tuOsY03rv) {
                    scanf ("%d", &fE3GADK8F[ysel4LQY76a][tuOsY03rv]);
                    tuOsY03rv = tuOsY03rv + 1;
                };
            }
            ysel4LQY76a = ysel4LQY76a + 1;
        };
    }
    scanf ("%d %d", &z3gFQw, &eb8IOVxa3uU);
    dWRYC3e = V6lQDgmk (z3gFQw, eb8IOVxa3uU);
    if (dWRYC3e == 0) {
        printf ("error");
    }
    else {
        for (MnkacX = 0; MnkacX < 5; MnkacX = MnkacX +1) {
            for (dmPriMt = 0; dmPriMt < 5; dmPriMt = dmPriMt + 1) {
                if (dmPriMt == 0)
                    printf ("%d", fE3GADK8F[MnkacX][dmPriMt]);
                else
                    printf (" %d", fE3GADK8F[MnkacX][dmPriMt]);
            };
        };
    };
}

