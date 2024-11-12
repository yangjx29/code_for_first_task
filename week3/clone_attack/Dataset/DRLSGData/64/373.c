int main () {
    int HBOsLTx5S [50];
    int R4oP6glsLu0F [10];
    int P6UPfxJHvN [10];
    int lzyq6UQ3Hsf0 [10];
    int tH4wlgqk;
    int m;
    int kjvd3OU;
    int ZKIdtl;
    int ig1fKF9zBDuS [50];
    int g [50];
    double  e;
    int BSaT4i3;
    int o [50];
    int p [50];
    int gshRD9f [50];
    double  CwZro9ptv1X0 [50];
    int HuhVZ9OF7gk;
    scanf ("%d", &kjvd3OU);
    for (BSaT4i3 = 0; BSaT4i3 < kjvd3OU; BSaT4i3 = BSaT4i3 +1) {
        scanf ("%d %d %d", &lzyq6UQ3Hsf0[BSaT4i3], &P6UPfxJHvN[BSaT4i3], &R4oP6glsLu0F[BSaT4i3]);
    }
    ZKIdtl = 0;
    {
        BSaT4i3 = 0;
        while (BSaT4i3 < kjvd3OU) {
            {
                m = BSaT4i3 +1;
                while (m < kjvd3OU) {
                    e = (lzyq6UQ3Hsf0[BSaT4i3] - lzyq6UQ3Hsf0[m]) * (lzyq6UQ3Hsf0[BSaT4i3] - lzyq6UQ3Hsf0[m]) + (P6UPfxJHvN[BSaT4i3] - P6UPfxJHvN[m]) * (P6UPfxJHvN[BSaT4i3] - P6UPfxJHvN[m]) + (R4oP6glsLu0F[BSaT4i3] - R4oP6glsLu0F[m]) * (R4oP6glsLu0F[BSaT4i3] - R4oP6glsLu0F[m]);
                    CwZro9ptv1X0[ZKIdtl] = sqrt (e);
                    ig1fKF9zBDuS[ZKIdtl] = lzyq6UQ3Hsf0[BSaT4i3];
                    g[ZKIdtl] = P6UPfxJHvN[BSaT4i3];
                    gshRD9f[ZKIdtl] = R4oP6glsLu0F[BSaT4i3];
                    HBOsLTx5S[ZKIdtl] = lzyq6UQ3Hsf0[m];
                    o[ZKIdtl] = P6UPfxJHvN[m];
                    p[ZKIdtl] = R4oP6glsLu0F[m];
                    m = m + 1;
                    ZKIdtl = ZKIdtl +1;
                }
            }
            BSaT4i3 = BSaT4i3 +1;
        }
    }
    {
        HuhVZ9OF7gk = 1;
        while (HuhVZ9OF7gk <= ZKIdtl) {
            {
                BSaT4i3 = 0;
                while (ZKIdtl -HuhVZ9OF7gk > BSaT4i3) {
                    if (CwZro9ptv1X0[BSaT4i3] < CwZro9ptv1X0[BSaT4i3 +1]) {
                        e = CwZro9ptv1X0[BSaT4i3 +1];
                        CwZro9ptv1X0[BSaT4i3 +1] = CwZro9ptv1X0[BSaT4i3];
                        CwZro9ptv1X0[BSaT4i3] = e;
                        tH4wlgqk = ig1fKF9zBDuS[BSaT4i3 +1];
                        ig1fKF9zBDuS[BSaT4i3 +1] = ig1fKF9zBDuS[BSaT4i3];
                        ig1fKF9zBDuS[BSaT4i3] = tH4wlgqk;
                        tH4wlgqk = g[BSaT4i3 +1];
                        g[BSaT4i3 +1] = g[BSaT4i3];
                        g[BSaT4i3] = tH4wlgqk;
                        tH4wlgqk = gshRD9f[BSaT4i3 +1];
                        gshRD9f[BSaT4i3 +1] = gshRD9f[BSaT4i3];
                        gshRD9f[BSaT4i3] = tH4wlgqk;
                        tH4wlgqk = HBOsLTx5S[BSaT4i3 +1];
                        HBOsLTx5S[BSaT4i3 +1] = HBOsLTx5S[BSaT4i3];
                        HBOsLTx5S[BSaT4i3] = tH4wlgqk;
                        tH4wlgqk = o[BSaT4i3 +1];
                        o[BSaT4i3 +1] = o[BSaT4i3];
                        o[BSaT4i3] = tH4wlgqk;
                        tH4wlgqk = p[BSaT4i3 +1];
                        p[BSaT4i3 +1] = p[BSaT4i3];
                        p[BSaT4i3] = tH4wlgqk;
                    }
                    BSaT4i3 = BSaT4i3 +1;
                }
            }
            HuhVZ9OF7gk = HuhVZ9OF7gk +1;
        }
    }
    {
        BSaT4i3 = 0;
        while (BSaT4i3 < ZKIdtl) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", ig1fKF9zBDuS[BSaT4i3], g[BSaT4i3], gshRD9f[BSaT4i3], HBOsLTx5S[BSaT4i3], o[BSaT4i3], p[BSaT4i3], CwZro9ptv1X0[BSaT4i3]);
            BSaT4i3 = BSaT4i3 +1;
        }
    }
    return 0;
}

