int main (int tL5fd6zS1cue, char *argv []) {
    int o;
    int t;
    int uaXuCpv;
    int *X1mYjHC6c;
    int *s3ePiExY52;
    int *n8CiSbMnLKv;
    int *lfl43B7Q;
    int Wwtjgy3Pfbo;
    int aor6AeD;
    o = (572 - 572);
    t = (867 - 867);
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
    scanf ("%d", &uaXuCpv);
    X1mYjHC6c = (int *) malloc (sizeof (int) * uaXuCpv);
    s3ePiExY52 = (int *) malloc (sizeof (int) * uaXuCpv);
    n8CiSbMnLKv = (int *) malloc (sizeof (int) * uaXuCpv);
    lfl43B7Q = (int *) malloc (sizeof (int) * uaXuCpv);
    {
        Wwtjgy3Pfbo = 0;
        while (uaXuCpv > Wwtjgy3Pfbo) {
            scanf ("%d %d %d", &X1mYjHC6c[Wwtjgy3Pfbo], &s3ePiExY52[Wwtjgy3Pfbo], &n8CiSbMnLKv[Wwtjgy3Pfbo]);
            lfl43B7Q[Wwtjgy3Pfbo] = s3ePiExY52[Wwtjgy3Pfbo] + n8CiSbMnLKv[Wwtjgy3Pfbo];
            Wwtjgy3Pfbo = Wwtjgy3Pfbo +1;
        };
    }
    {
        aor6AeD = 0;
        while (3 > aor6AeD) {
            aor6AeD = aor6AeD + 1;
            {
                Wwtjgy3Pfbo = 0;
                while (uaXuCpv - (462 - 461) > Wwtjgy3Pfbo) {
                    if (lfl43B7Q[Wwtjgy3Pfbo] >= lfl43B7Q[Wwtjgy3Pfbo +1]) {
                        o = lfl43B7Q[Wwtjgy3Pfbo];
                        lfl43B7Q[Wwtjgy3Pfbo] = lfl43B7Q[Wwtjgy3Pfbo +1];
                        t = X1mYjHC6c[Wwtjgy3Pfbo];
                        X1mYjHC6c[Wwtjgy3Pfbo] = X1mYjHC6c[Wwtjgy3Pfbo +1];
                        X1mYjHC6c[Wwtjgy3Pfbo +1] = t;
                        lfl43B7Q[Wwtjgy3Pfbo +1] = o;
                    }
                    Wwtjgy3Pfbo++;
                };
            };
        };
    }
    printf ("%d %d\n", X1mYjHC6c[uaXuCpv - 1], lfl43B7Q[uaXuCpv - 1]);
    printf ("%d %d\n", X1mYjHC6c[uaXuCpv - 2], lfl43B7Q[uaXuCpv - 2]);
    printf ("%d %d\n", X1mYjHC6c[uaXuCpv - 3], lfl43B7Q[uaXuCpv - 3]);
    return 0;
}

