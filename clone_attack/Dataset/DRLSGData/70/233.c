int main () {
    int ifXqPeJ8Nwl, j, YueRBQx;
    double  lf8FW3bNEHs1 = (740 - 740), P5bdSyx, dkPqWc, cOdVPCtsL, hRdDCEeY, hGuOaK;
    scanf ("%d", &YueRBQx);
    struct   WgdIrofbp {
        float dyQNAV, YmbQDTE;
    }
    *g4zGlr3;
    g4zGlr3 = (struct   WgdIrofbp *) malloc (sizeof (WgdIrofbp) * YueRBQx);
    for (ifXqPeJ8Nwl = (655 - 655); ifXqPeJ8Nwl < YueRBQx; ifXqPeJ8Nwl = ifXqPeJ8Nwl + 1) {
        scanf ("%f%f", &(g4zGlr3 + ifXqPeJ8Nwl)->dyQNAV, &(g4zGlr3 + ifXqPeJ8Nwl)->YmbQDTE);
    }
    for (ifXqPeJ8Nwl = 1; ifXqPeJ8Nwl < YueRBQx; ifXqPeJ8Nwl = ifXqPeJ8Nwl + 1) {
        for (j = (454 - 454); ifXqPeJ8Nwl > j; j = j + 1) {
            dkPqWc = (g4zGlr3 + ifXqPeJ8Nwl)->dyQNAV;
            cOdVPCtsL = (g4zGlr3 + j)->dyQNAV;
            hRdDCEeY = (g4zGlr3 + ifXqPeJ8Nwl)->YmbQDTE;
            hGuOaK = (g4zGlr3 + j)->YmbQDTE;
            P5bdSyx = sqrt ((dkPqWc - cOdVPCtsL) * (dkPqWc - cOdVPCtsL) + (hRdDCEeY - hGuOaK) * (hRdDCEeY - hGuOaK));
            if (P5bdSyx > lf8FW3bNEHs1)
                lf8FW3bNEHs1 = P5bdSyx;
        }
    }
    printf ("%.4f", lf8FW3bNEHs1);
    free (g4zGlr3);
}

