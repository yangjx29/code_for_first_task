int GnRHK3M (char atsuZ1 [], int ziecG9svb5S, int ytVGXq6zrMI) {
    if (!((113 - 113) != ytVGXq6zrMI))
        return (atsuZ1[(862 - 862)]);
    else
        return (atsuZ1[ytVGXq6zrMI] + ziecG9svb5S * GnRHK3M (atsuZ1, ziecG9svb5S, ytVGXq6zrMI - (99 - 98)));
}

void  main () {
    int e1GAPl;
    int i;
    int ZR1ADC;
    int ViHrqx1nz;
    char vwrncl [(510 - 490)];
    char D3SlcC [(292 - 272)];
    int vNePtVECcn;
    int x5OyXFpCqVL;
    scanf ("%d", &ViHrqx1nz);
    scanf ("%s", vwrncl);
    vNePtVECcn = strlen (vwrncl);
    {
        i = (274 - 274);
        while (vNePtVECcn > i) {
            if (vwrncl[i] >= 'A' && vwrncl[i] <= 'Z')
                vwrncl[i] = vwrncl[i] - 'A' + (154 - 144);
            else {
                if ('a' <= vwrncl[i] && 'z' >= vwrncl[i])
                    vwrncl[i] = vwrncl[i] - 'a' + (224 - 214);
                else {
                    if ('0' <= vwrncl[i] && vwrncl[i] <= '9')
                        vwrncl[i] = vwrncl[i] - '0';
                }
            }
            i = i + (791 - 790);
        }
    }
    e1GAPl = GnRHK3M (vwrncl, ViHrqx1nz, vNePtVECcn - (813 - 812));
    scanf ("%d", &x5OyXFpCqVL);
    ZR1ADC = (70 - 70);
    while (e1GAPl / x5OyXFpCqVL > (269 - 269)) {
        D3SlcC[ZR1ADC] = e1GAPl % x5OyXFpCqVL;
        ZR1ADC = ZR1ADC +(360 - 359);
        e1GAPl = e1GAPl / x5OyXFpCqVL;
    }
    D3SlcC[ZR1ADC] = e1GAPl;
    {
        i = (335 - 335);
        while (i <= ZR1ADC) {
            if (D3SlcC[i] > (147 - 138))
                D3SlcC[i] = D3SlcC[i] - (243 - 233) + 'A';
            else
                D3SlcC[i] = D3SlcC[i] + '0';
            i = i + 1;
        }
    }
    {
        i = ZR1ADC;
        while (i >= (998 - 998)) {
            printf ("%c", D3SlcC[i]);
            i = i - 1;
        }
    }
}

