int main () {
    double  *x, *QJr64MeduXjV, YLSE5sk4b;
    int eEq9Qcx, GhEweft, cjRqWHdTvl;
    scanf ("%d", &eEq9Qcx);
    x = (double  *) (malloc (eEq9Qcx * sizeof (int)));
    QJr64MeduXjV = (double  *) (malloc (eEq9Qcx * sizeof (int)));
    for (GhEweft = 0; GhEweft < eEq9Qcx; GhEweft = GhEweft +1)
        scanf ("%lf %lf", &x[GhEweft], &QJr64MeduXjV[GhEweft]);
    YLSE5sk4b = pow ((x[1] - x[0]), 2) + pow ((QJr64MeduXjV[1] - QJr64MeduXjV[0]), 2);
    for (GhEweft = 0; eEq9Qcx - 1 > GhEweft; GhEweft = GhEweft +1) {
        for (cjRqWHdTvl = GhEweft +1; eEq9Qcx > cjRqWHdTvl; cjRqWHdTvl++) {
            if (pow ((x[cjRqWHdTvl] - x[GhEweft]), 2) + pow ((QJr64MeduXjV[cjRqWHdTvl] - QJr64MeduXjV[GhEweft]), 2) > YLSE5sk4b)
                YLSE5sk4b = pow ((x[cjRqWHdTvl] - x[GhEweft]), 2) + pow ((QJr64MeduXjV[cjRqWHdTvl] - QJr64MeduXjV[GhEweft]), 2);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    printf ("%.4f\n", sqrt (YLSE5sk4b));
    return 0;
}

