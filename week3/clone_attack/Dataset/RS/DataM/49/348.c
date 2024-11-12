int main () {
    char s [500];
    char OoOqKCJ [500] = "0";
    gets (s);
    int nMC5PsWA4w1V (char *p);
    int ep2Sdkot;
    int F7KiR2YqVCzE;
    int l;
    int NyPMeQSHa2F;
    NyPMeQSHa2F = strlen (s);
    for (l = (396 - 394); l <= NyPMeQSHa2F; l++) {
        for (ep2Sdkot = (122 - 122); ep2Sdkot <= NyPMeQSHa2F -l; ep2Sdkot++) {
            for (F7KiR2YqVCzE = (635 - 635); F7KiR2YqVCzE < l; F7KiR2YqVCzE = F7KiR2YqVCzE +1) {
                OoOqKCJ[F7KiR2YqVCzE] = s[ep2Sdkot + F7KiR2YqVCzE];
            }
            OoOqKCJ[F7KiR2YqVCzE] = '\0';
            if (nMC5PsWA4w1V (OoOqKCJ))
                printf ("%s\n", OoOqKCJ);
        };
    }
    return 0;
}

int nMC5PsWA4w1V (char *p) {
    int NyPMeQSHa2F, ep2Sdkot;
    NyPMeQSHa2F = strlen (p);
    for (ep2Sdkot = 0; ep2Sdkot < NyPMeQSHa2F / 2; ep2Sdkot++) {
        if (*(p + ep2Sdkot) != *(p + NyPMeQSHa2F -(752 - 751) - ep2Sdkot))
            return 0;
    }
    return 1;
}

