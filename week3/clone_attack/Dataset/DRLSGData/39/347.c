int main () {
    char yafUPAeV [(959 - 759)] [(167 - 127)];
    int EtDnNcTC, gxm36kb, s7qvkAzBm3R [(771 - 571)], f5Jv3l [(881 - 681)], yMPeFNy [(392 - 192)], m [(1190 - 990)], d5yNde1Q = (53 - 53), PHWFJUO, maxj;
    char OPyon8wX40d [(1128 - 928)];
    char VUY02M [(1035 - 835)];
    scanf ("%d", &EtDnNcTC);
    {
        gxm36kb = (911 - 911);
        while (gxm36kb < EtDnNcTC) {
            scanf ("%s%d%d %c %c %d", yafUPAeV[gxm36kb], &s7qvkAzBm3R[gxm36kb], &f5Jv3l[gxm36kb], &VUY02M[gxm36kb], &OPyon8wX40d[gxm36kb], &yMPeFNy[gxm36kb]);
            gxm36kb = gxm36kb + (733 - 732);
        }
    }
    for (gxm36kb = (373 - 373); gxm36kb < EtDnNcTC; gxm36kb = gxm36kb + 1) {
        m[gxm36kb] = (989 - 989);
        if (s7qvkAzBm3R[gxm36kb] > (438 - 358) && yMPeFNy[gxm36kb] > 0) {
            m[gxm36kb] += (8326 - 326);
        }
        if (s7qvkAzBm3R[gxm36kb] > 85 && 80 < f5Jv3l[gxm36kb]) {
            m[gxm36kb] += 4000;
        }
        if (s7qvkAzBm3R[gxm36kb] > (338 - 248)) {
            m[gxm36kb] += (2309 - 309);
        }
        if (s7qvkAzBm3R[gxm36kb] > 85 && OPyon8wX40d[gxm36kb] == 'Y') {
            m[gxm36kb] += (1299 - 299);
        }
        if (f5Jv3l[gxm36kb] > 80 && VUY02M[gxm36kb] == 'Y') {
            m[gxm36kb] += 850;
        }
    }
    for (gxm36kb = 0; gxm36kb < EtDnNcTC; gxm36kb = gxm36kb + 1) {
        d5yNde1Q += m[gxm36kb];
    }
    PHWFJUO = m[0];
    maxj = 0;
    {
        gxm36kb = 1;
        while (gxm36kb < EtDnNcTC) {
            if (m[gxm36kb] > PHWFJUO) {
                PHWFJUO = m[gxm36kb];
                maxj = gxm36kb;
            }
            gxm36kb++;
        }
    }
    printf ("%s\n%d\n%d", yafUPAeV[maxj], PHWFJUO, d5yNde1Q);
    return 0;
}

