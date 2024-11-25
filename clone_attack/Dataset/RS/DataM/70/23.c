int main () {
    double  x [9999], qJRQIwXTYp [9999], gIebsYMHR, m;
    int Ltr7MTn2xJ;
    int OzQCRTMaSctD;
    int VwRm4fdxG;
    scanf ("%d", &Ltr7MTn2xJ);
    {
        OzQCRTMaSctD = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ltr7MTn2xJ >= OzQCRTMaSctD) {
            scanf ("%lf%lf", &x[OzQCRTMaSctD], &qJRQIwXTYp[OzQCRTMaSctD]);
            OzQCRTMaSctD = OzQCRTMaSctD +1;
        };
    }
    gIebsYMHR = sqrt ((x[1] - x[2]) * (x[1] - x[2]) + (qJRQIwXTYp[1] - qJRQIwXTYp[2]) * (qJRQIwXTYp[1] - qJRQIwXTYp[2]));
    for (OzQCRTMaSctD = 1; Ltr7MTn2xJ >= OzQCRTMaSctD; OzQCRTMaSctD++) {
        VwRm4fdxG = OzQCRTMaSctD +1;
        while (VwRm4fdxG <= Ltr7MTn2xJ) {
            m = sqrt ((x[OzQCRTMaSctD] - x[VwRm4fdxG]) * (x[OzQCRTMaSctD] - x[VwRm4fdxG]) + (qJRQIwXTYp[OzQCRTMaSctD] - qJRQIwXTYp[VwRm4fdxG]) * (qJRQIwXTYp[OzQCRTMaSctD] - qJRQIwXTYp[VwRm4fdxG]));
            VwRm4fdxG = VwRm4fdxG +1;
            if (m > gIebsYMHR)
                gIebsYMHR = m;
        };
    }
    printf ("%.4lf\n", gIebsYMHR);
    return 0;
}

