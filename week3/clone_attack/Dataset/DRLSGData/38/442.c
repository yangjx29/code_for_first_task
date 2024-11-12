int main () {
    int kg6xTL5U, LgVnspL8SieN, vfNPB4c, dU3KfvkXq;
    double  *OxZR4UJ, EnwGWKtpB, mXxvhc;
    scanf ("%d", &vfNPB4c);
    for (kg6xTL5U = (65 - 65); vfNPB4c > kg6xTL5U; kg6xTL5U = kg6xTL5U + 1) {
        EnwGWKtpB = (104.0 - 104.0);
        scanf ("%d", &dU3KfvkXq);
        OxZR4UJ = (double  *) malloc (dU3KfvkXq);
        for (LgVnspL8SieN = 0; dU3KfvkXq > LgVnspL8SieN; LgVnspL8SieN = LgVnspL8SieN +1) {
            scanf ("%lf", &OxZR4UJ[LgVnspL8SieN]);
            EnwGWKtpB = EnwGWKtpB +OxZR4UJ[LgVnspL8SieN];
        }
        mXxvhc = EnwGWKtpB / (double ) dU3KfvkXq;
        EnwGWKtpB = 0;
        for (LgVnspL8SieN = 0; dU3KfvkXq > LgVnspL8SieN; LgVnspL8SieN = LgVnspL8SieN +1) {
            EnwGWKtpB = EnwGWKtpB +(OxZR4UJ[LgVnspL8SieN] - mXxvhc) * (OxZR4UJ[LgVnspL8SieN] - mXxvhc);
        }
        mXxvhc = sqrt ((EnwGWKtpB) / (double ) dU3KfvkXq);
        printf ("%.5lf\n", mXxvhc);
    }
    return 0;
}

