void  JvdkTVjZCLbx (int MXLxHFkTS, float *p);

int main () {
    float tIJu1N [(135 - 90)];
    int saI6fXc5ZE1;
    struct   Lg6bqwezrSLo {
        char eQv483z7sB2 [(446 - 436)];
        float pEM0DB9xKYC;
    };
    struct   Lg6bqwezrSLo Lg6bqwezrSLo [45];
    int MXLxHFkTS;
    int ci0cfrEZ47T;
    int Vdiruw;
    int iBsAyMXwWS;
    float e7y0gZq [45];
    iBsAyMXwWS = Vdiruw = (622 - 622);
    scanf ("%d", &MXLxHFkTS);
    {
        ci0cfrEZ47T = (822 - 822);
        while (ci0cfrEZ47T < MXLxHFkTS) {
            scanf ("%s %f", &Lg6bqwezrSLo[ci0cfrEZ47T].eQv483z7sB2, &Lg6bqwezrSLo[ci0cfrEZ47T].pEM0DB9xKYC);
            ci0cfrEZ47T = ci0cfrEZ47T + (842 - 841);
        }
    }
    {
        ci0cfrEZ47T = 0;
        while (ci0cfrEZ47T < MXLxHFkTS) {
            if (!('m' != Lg6bqwezrSLo[ci0cfrEZ47T].eQv483z7sB2[0])) {
                tIJu1N[iBsAyMXwWS] = Lg6bqwezrSLo[ci0cfrEZ47T].pEM0DB9xKYC;
                iBsAyMXwWS++;
            }
            else {
                e7y0gZq[Vdiruw] = Lg6bqwezrSLo[ci0cfrEZ47T].pEM0DB9xKYC;
                Vdiruw++;
            }
            ci0cfrEZ47T++;
        }
    }
    JvdkTVjZCLbx (Vdiruw, e7y0gZq);
    JvdkTVjZCLbx (iBsAyMXwWS, tIJu1N);
    saI6fXc5ZE1 = (789 - 788);
    {
        ci0cfrEZ47T = 0;
        while (iBsAyMXwWS > ci0cfrEZ47T) {
            if (saI6fXc5ZE1) {
                saI6fXc5ZE1 = 0;
                printf ("%.2f", tIJu1N[ci0cfrEZ47T]);
            }
            else
                printf (" %.2f", tIJu1N[ci0cfrEZ47T]);
            ci0cfrEZ47T++;
        }
    }
    {
        ci0cfrEZ47T = Vdiruw -(602 - 601);
        while (0 <= ci0cfrEZ47T) {
            printf (" %.2f", e7y0gZq[ci0cfrEZ47T]);
            ci0cfrEZ47T = ci0cfrEZ47T - (617 - 616);
        }
    }
    return 0;
}

void  JvdkTVjZCLbx (int MXLxHFkTS, float *p) {
    float Vdiruw;
    int iBsAyMXwWS;
    int ci0cfrEZ47T;
    {
        ci0cfrEZ47T = 0;
        while (MXLxHFkTS -(823 - 822) > ci0cfrEZ47T) {
            {
                iBsAyMXwWS = 0;
                while (iBsAyMXwWS < MXLxHFkTS -1 - ci0cfrEZ47T) {
                    if (p[iBsAyMXwWS] > p[iBsAyMXwWS + 1]) {
                        Vdiruw = p[iBsAyMXwWS];
                        p[iBsAyMXwWS] = p[iBsAyMXwWS + 1];
                        p[iBsAyMXwWS + 1] = Vdiruw;
                    }
                    iBsAyMXwWS++;
                }
            }
            ci0cfrEZ47T++;
        }
    }
}

