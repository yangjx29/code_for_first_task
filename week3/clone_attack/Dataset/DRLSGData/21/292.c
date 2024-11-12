int main () {
    int Z4f9QR;
    double  cEF1n6hWB = (321.0 - 321.0), aYBm7ghZ = 0.0, uBpWhOsI;
    int AgwZY1a0HWc6;
    int u2t5fF;
    int t0WbZ1dVywS [300];
    scanf ("%d", &Z4f9QR);
    {
        AgwZY1a0HWc6 = 0;
        for (; AgwZY1a0HWc6 < Z4f9QR;) {
            scanf ("%d", &t0WbZ1dVywS[AgwZY1a0HWc6]);
            cEF1n6hWB += t0WbZ1dVywS[AgwZY1a0HWc6];
            AgwZY1a0HWc6++;
        }
    }
    cEF1n6hWB /= Z4f9QR;
    u2t5fF = (674 - 674);
    {
        AgwZY1a0HWc6 = 0;
        while (AgwZY1a0HWc6 < Z4f9QR) {
            uBpWhOsI = t0WbZ1dVywS[AgwZY1a0HWc6] - cEF1n6hWB;
            AgwZY1a0HWc6++;
            if (fabs (aYBm7ghZ) < fabs (uBpWhOsI)) {
                aYBm7ghZ = uBpWhOsI;
                u2t5fF = 0;
            }
            else {
                if (fabs (uBpWhOsI) == fabs (aYBm7ghZ))
                    u2t5fF++;
            }
        }
    }
    if (u2t5fF == 0)
        printf ("%d", (int) (aYBm7ghZ + cEF1n6hWB));
    else
        printf ("%d,%d", (int) (cEF1n6hWB - fabs (aYBm7ghZ)), (int) (cEF1n6hWB + fabs (aYBm7ghZ)));
}

