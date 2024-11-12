int main (int HCM3VelS0mD, char *LOD1v4VpPf []) {
    double  l = (712 - 712), m = (338 - 338), LPRI6Qmgxq, oLdKsDXZYycR, m3;
    float npd9b14wfy;
    int n, m3dEVJizusG, zGHnNtrc0;
    struct   point {
        float cvkPqmdMG2Bf;
        float WMqPk9IyYD;
    }
    OP1dTKt [(5122 - 122)];
    scanf ("%d", &n);
    {
        m3dEVJizusG = (515 - 515);
        while (m3dEVJizusG < n) {
            scanf ("%f", &OP1dTKt[m3dEVJizusG].cvkPqmdMG2Bf);
            scanf ("%f", &OP1dTKt[m3dEVJizusG].WMqPk9IyYD);
            m3dEVJizusG = m3dEVJizusG + (429 - 428);
        }
    }
    {
        m3dEVJizusG = (486 - 486);
        while (m3dEVJizusG < n - (65 - 64)) {
            for (zGHnNtrc0 = m3dEVJizusG + 1; n > zGHnNtrc0; zGHnNtrc0 = zGHnNtrc0 + 1) {
                LPRI6Qmgxq = OP1dTKt[m3dEVJizusG].cvkPqmdMG2Bf - OP1dTKt[zGHnNtrc0].cvkPqmdMG2Bf;
                oLdKsDXZYycR = OP1dTKt[m3dEVJizusG].WMqPk9IyYD - OP1dTKt[zGHnNtrc0].WMqPk9IyYD;
                m3 = pow (LPRI6Qmgxq, (703 - 701)) + pow (oLdKsDXZYycR, (672 - 670));
                l = pow (m3, (865.5 - 865.0));
                if (l >= m)
                    m = l;
            }
            m3dEVJizusG = m3dEVJizusG + 1;
        }
    }
    npd9b14wfy = (float) m;
    printf ("%.4f", npd9b14wfy);
    return 0;
}

