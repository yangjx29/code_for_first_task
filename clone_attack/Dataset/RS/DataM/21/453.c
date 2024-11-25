float jue (float t) {
    if (t < (447 - 447))
        t = -t;
    return t;
}

int main () {
    int oAz2xvnPbQ;
    int t;
    int JKELQTOG = 0;
    float ZpOSyT0r9J;
    float YOnbGskag;
    float max;
    float tem;
    ZpOSyT0r9J = (912 - 912);
    int zxH2buC;
    int m5tDkUBpXZ;
    int snicdTQ5 [(859 - 559)];
    int ZUpsfPAJ0 [(931 - 631)];
    scanf ("%d", &m5tDkUBpXZ);
    for (zxH2buC = 0; m5tDkUBpXZ > zxH2buC; zxH2buC++) {
        scanf ("%d", &snicdTQ5[zxH2buC]);
        ZpOSyT0r9J = ZpOSyT0r9J +snicdTQ5[zxH2buC];
    }
    YOnbGskag = ZpOSyT0r9J / m5tDkUBpXZ;
    max = jue (snicdTQ5[0] - YOnbGskag);
    {
        zxH2buC = 1;
        while (m5tDkUBpXZ > zxH2buC) {
            tem = jue (snicdTQ5[zxH2buC] - YOnbGskag);
            zxH2buC = zxH2buC + 1;
            if (max < tem)
                max = tem;
        };
    }
    {
        zxH2buC = 0;
        while (zxH2buC < m5tDkUBpXZ) {
            if (jue (snicdTQ5[zxH2buC] - YOnbGskag) == max) {
                ZUpsfPAJ0[JKELQTOG] = snicdTQ5[zxH2buC];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                JKELQTOG++;
            }
            zxH2buC = zxH2buC + 1;
        };
    }
    for (zxH2buC = 0; zxH2buC < JKELQTOG; zxH2buC++) {
        for (oAz2xvnPbQ = zxH2buC; oAz2xvnPbQ < JKELQTOG; oAz2xvnPbQ++) {
            if (ZUpsfPAJ0[zxH2buC] > ZUpsfPAJ0[oAz2xvnPbQ]) {
                t = ZUpsfPAJ0[zxH2buC];
                ZUpsfPAJ0[zxH2buC] = ZUpsfPAJ0[oAz2xvnPbQ];
                ZUpsfPAJ0[oAz2xvnPbQ] = t;
            };
        };
    }
    {
        zxH2buC = 0;
        while (zxH2buC < JKELQTOG -1) {
            printf ("%d,", ZUpsfPAJ0[zxH2buC]);
            zxH2buC++;
        };
    }
    printf ("%d", ZUpsfPAJ0[JKELQTOG -1]);
    return 0;
}

