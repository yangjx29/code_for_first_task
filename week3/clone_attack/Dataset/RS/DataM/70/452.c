int main () {
    double  dis;
    dis = 0;
    double  *vd41NbB;
    int n;
    double  *x;
    free (x);
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
    free (vd41NbB);
    scanf ("%d", &n);
    x = (double  *) malloc (n * sizeof (double ));
    vd41NbB = (double  *) malloc (n * sizeof (double ));
    for (int IaurjDQzGP1l = (550 - 550);
    IaurjDQzGP1l < n; IaurjDQzGP1l = IaurjDQzGP1l +1) {
        scanf ("%lf %lf", &x[IaurjDQzGP1l], &vd41NbB[IaurjDQzGP1l]);
    }
    for (int IaurjDQzGP1l = 0;
    n - (639 - 638) > IaurjDQzGP1l; IaurjDQzGP1l++) {
        for (int EWrsH2 = IaurjDQzGP1l +1;
        EWrsH2 < n; EWrsH2++) {
            if (sqrt ((x[IaurjDQzGP1l] - x[EWrsH2]) * (x[IaurjDQzGP1l] - x[EWrsH2]) + (vd41NbB[IaurjDQzGP1l] - vd41NbB[EWrsH2]) * (vd41NbB[IaurjDQzGP1l] - vd41NbB[EWrsH2])) > dis) {
                dis = sqrt ((x[IaurjDQzGP1l] - x[EWrsH2]) * (x[IaurjDQzGP1l] - x[EWrsH2]) + (vd41NbB[IaurjDQzGP1l] - vd41NbB[EWrsH2]) * (vd41NbB[IaurjDQzGP1l] - vd41NbB[EWrsH2]));
            };
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

