int main () {
    double  Gfx4Vt;
    int OXUBI2;
    int iYOGLSXInbga;
    double  poM48e0;
    double  MhQLODjxbMlH;
    double  vuMcsVHTU;
    double  AmAZx86EQy21;
    double  xpAB2DrL83iQ;
    double  scQ0hG;
    double  uD84tB76gR0;
    scanf ("%d", &OXUBI2);
    {
        iYOGLSXInbga = 1;
        for (; iYOGLSXInbga <= OXUBI2;) {
            scanf ("%lf %lf %lf", &poM48e0, &MhQLODjxbMlH, &vuMcsVHTU);
            Gfx4Vt = MhQLODjxbMlH *MhQLODjxbMlH-4 * poM48e0 * vuMcsVHTU;
            if (fabs (Gfx4Vt) <= 1e-6) {
                AmAZx86EQy21 = -MhQLODjxbMlH / (2 * poM48e0);
                xpAB2DrL83iQ = -MhQLODjxbMlH / (2 * poM48e0);
                printf ("x1=x2=%7.5f\n", AmAZx86EQy21);
            }
            else {
                if (Gfx4Vt > 1e-6) {
                    AmAZx86EQy21 = (-MhQLODjxbMlH+sqrt (MhQLODjxbMlH *MhQLODjxbMlH-4 * poM48e0 * vuMcsVHTU)) / (2 * poM48e0);
                    xpAB2DrL83iQ = (-MhQLODjxbMlH-sqrt (MhQLODjxbMlH *MhQLODjxbMlH-4 * poM48e0 * vuMcsVHTU)) / (2 * poM48e0);
                    printf ("x1=%7.5f;x2=%7.5f\n", AmAZx86EQy21, xpAB2DrL83iQ);
                }
                else {
                    scQ0hG = -MhQLODjxbMlH / (2 * poM48e0);
                    uD84tB76gR0 = sqrt (-Gfx4Vt) / (2 * poM48e0);
                    if (scQ0hG == 0)
                        printf ("x1=0.00000+%7.5fi;x2=0.00000-%7.5fi\n", uD84tB76gR0, uD84tB76gR0);
                    else
                        printf ("x1=%7.5f+%7.5fi;x2=%7.5f-%7.5fi\n", scQ0hG, uD84tB76gR0, scQ0hG, uD84tB76gR0);
                }
            }
            iYOGLSXInbga++;
        }
    }
    return 0;
}

