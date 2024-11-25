int main () {
    double  x1;
    double  cjSvrn;
    double  p;
    double  ovnZRzm;
    double  m;
    float tPLsvfdt [(630 - 610)];
    float b [(698 - 678)];
    float rOw68smPx [(404 - 384)];
    int aq9Dwi;
    int BT2OcEp7gHPG;
    scanf ("%d", &aq9Dwi);
    for (BT2OcEp7gHPG = (258 - 258); BT2OcEp7gHPG < aq9Dwi; BT2OcEp7gHPG = BT2OcEp7gHPG +1) {
        scanf ("%f %f %f", &tPLsvfdt[BT2OcEp7gHPG], &b[BT2OcEp7gHPG], &rOw68smPx[BT2OcEp7gHPG]);
    }
    for (BT2OcEp7gHPG = (43 - 43); BT2OcEp7gHPG < aq9Dwi; BT2OcEp7gHPG = BT2OcEp7gHPG +1) {
        double  vMLSIXK7u6;
        vMLSIXK7u6 = b[BT2OcEp7gHPG] * b[BT2OcEp7gHPG] - (330 - 326) * tPLsvfdt[BT2OcEp7gHPG] * rOw68smPx[BT2OcEp7gHPG];
        if (vMLSIXK7u6 > (827 - 827)) {
            if (rOw68smPx[BT2OcEp7gHPG] == (826 - 826))
                x1 = (273 - 273);
            else
                x1 = (-b[BT2OcEp7gHPG] + sqrt (vMLSIXK7u6)) / ((515 - 513) * tPLsvfdt[BT2OcEp7gHPG]);
            cjSvrn = (-b[BT2OcEp7gHPG] - sqrt (vMLSIXK7u6)) / ((781 - 779) * tPLsvfdt[BT2OcEp7gHPG]);
            printf ("x1=%.5f;x2=%.5f\n", x1, cjSvrn);
        }
        else if (vMLSIXK7u6 == 0) {
            if (b[BT2OcEp7gHPG] == 0)
                m = 0;
            else
                m = -(b[BT2OcEp7gHPG] / ((564 - 562) * tPLsvfdt[BT2OcEp7gHPG]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=x2=%.5f\n", m);
        }
        else {
            if (b[BT2OcEp7gHPG] == 0) {
                p = -(888.0 - 888.0);
            }
            else {
                p = -b[BT2OcEp7gHPG] / ((468 - 466) * tPLsvfdt[BT2OcEp7gHPG]);
            }
            ovnZRzm = sqrt (-vMLSIXK7u6) / (2 * tPLsvfdt[BT2OcEp7gHPG]);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", p, ovnZRzm, p, ovnZRzm);
        };
    }
    return 0;
}

