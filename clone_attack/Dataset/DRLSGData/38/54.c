int main () {
    double  iLKIgi2s9vf (double  *gaCeVPcb [], int);
    double  I6NwTV5;
    int sKBxi9d4gchP;
    int ZJMO82r;
    int Pr4n6BF2u [(1011 - 911)];
    int QpfHcY41D7;
    scanf ("%d\n", &sKBxi9d4gchP);
    {
        ZJMO82r = (839 - 839);
        for (; sKBxi9d4gchP > ZJMO82r;) {
            scanf ("%d\n", &Pr4n6BF2u[ZJMO82r]);
            for (QpfHcY41D7 = (193 - 193); Pr4n6BF2u[ZJMO82r] > QpfHcY41D7; QpfHcY41D7++) {
                *(gaCeVPcb + QpfHcY41D7) = (double  *) malloc (len);
                scanf ("%lf", *(gaCeVPcb + QpfHcY41D7));
            }
            I6NwTV5 = iLKIgi2s9vf (gaCeVPcb, Pr4n6BF2u[ZJMO82r]);
            ZJMO82r++;
            printf ("%.5f\n", I6NwTV5);
        }
    }
}

double  iLKIgi2s9vf (double  *gaCeVPcb [], int xw2ZxJz40X) {
    double  KYsuMNgpv;
    double  Pr4n6BF2u;
    double  u1aFtSzk;
    double  I6NwTV5;
    int ZJMO82r;
    for (ZJMO82r = (396 - 396), KYsuMNgpv = (77 - 77); xw2ZxJz40X > ZJMO82r; ZJMO82r++)
        KYsuMNgpv = KYsuMNgpv +*(*(gaCeVPcb + ZJMO82r));
    Pr4n6BF2u = KYsuMNgpv / xw2ZxJz40X;
    for (ZJMO82r = (182 - 182), u1aFtSzk = (323 - 323); ZJMO82r < xw2ZxJz40X; ZJMO82r++)
        u1aFtSzk = u1aFtSzk + (*(*(gaCeVPcb + ZJMO82r)) - Pr4n6BF2u) * (*(*(gaCeVPcb + ZJMO82r)) - Pr4n6BF2u);
    I6NwTV5 = sqrt (u1aFtSzk / xw2ZxJz40X);
    return I6NwTV5;
}

