int main (int AbEVTcu, char *CAjOiYRZ []) {
    float *XOTnV07t;
    float *a;
    int LWRKnfVkr7q, X0A3TGf, FsqbB0azu;
    double  o0f37Q = (869.0 - 869.0), IbPVruM;
    scanf ("%d", &LWRKnfVkr7q);
    a = (float *) malloc (sizeof (float) * LWRKnfVkr7q);
    XOTnV07t = (float *) malloc (sizeof (float) * LWRKnfVkr7q);
    for (X0A3TGf = (316 - 316); X0A3TGf < LWRKnfVkr7q; X0A3TGf = X0A3TGf +1) {
        scanf ("%f%f", &a[X0A3TGf], &XOTnV07t[X0A3TGf]);
    }
    for (X0A3TGf = (928 - 928); X0A3TGf < LWRKnfVkr7q; X0A3TGf = X0A3TGf +1)
        for (FsqbB0azu = 0; LWRKnfVkr7q > FsqbB0azu; FsqbB0azu++) {
            IbPVruM = (double ) sqrt ((a[X0A3TGf] - a[FsqbB0azu]) * (a[X0A3TGf] - a[FsqbB0azu]) + (XOTnV07t[X0A3TGf] - XOTnV07t[FsqbB0azu]) * (XOTnV07t[X0A3TGf] - XOTnV07t[FsqbB0azu]));
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
            }
            if (IbPVruM > o0f37Q)
                o0f37Q = IbPVruM;
        }
    printf ("%.4lf", o0f37Q);
    return 0;
}

