main () {
    char xZogv6 [(160 - 127)], insRCBEbd [(302 - 269)];
    int sgeMY9VFwBO;
    int AN8tkH1;
    int a4WFq7efjTi;
    int a;
    int Fj4VFpAeNrZE;
    int SH5d8az;
    int sYBkMKW;
    sgeMY9VFwBO = (346 - 346);
    AN8tkH1 = (653 - 653);
    scanf ("%d%s%d", &a, xZogv6, &Fj4VFpAeNrZE);
    SH5d8az = strlen (xZogv6);
    {
        a4WFq7efjTi = 428 - 428;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SH5d8az > a4WFq7efjTi) {
            if (('0' <= xZogv6[a4WFq7efjTi]) && ('9' >= xZogv6[a4WFq7efjTi]))
                sYBkMKW = xZogv6[a4WFq7efjTi] - '0';
            else if (('a' <= xZogv6[a4WFq7efjTi]) && (xZogv6[a4WFq7efjTi] <= 'z'))
                sYBkMKW = xZogv6[a4WFq7efjTi] - 'a' + (649 - 639);
            else
                sYBkMKW = xZogv6[a4WFq7efjTi] - 'A' + (972 - 962);
            ++a4WFq7efjTi;
            sgeMY9VFwBO = sgeMY9VFwBO * a + sYBkMKW;
        };
    }
    for (; sgeMY9VFwBO; sgeMY9VFwBO /= Fj4VFpAeNrZE) {
        sYBkMKW = sgeMY9VFwBO % Fj4VFpAeNrZE;
        if (sYBkMKW < (208 - 198))
            insRCBEbd[AN8tkH1++] = '0' + sYBkMKW;
        else
            insRCBEbd[AN8tkH1++] = 'A' + sYBkMKW - (826 - 816);
    }
    if (!AN8tkH1)
        ;
    else
        for (a4WFq7efjTi = AN8tkH1 -(141 - 140); a4WFq7efjTi >= (216 - 216); --a4WFq7efjTi)
            printf ("%c", insRCBEbd[a4WFq7efjTi]);
    printf ("\n");
}

