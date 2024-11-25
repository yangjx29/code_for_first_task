int main () {
    char ZHxOkjz [(399 - 334)] = {(574 - 574)};
    char BWqBXC [(264 - 199)];
    int td2zxQsADJ3;
    int b2eGrAQ;
    int f;
    int klJepgFHTL;
    int wIWsCNlYZiR;
    int qM8mc3JwgNC9;
    int A8mj0Gt;
    int OEoKRle0BbLS;
    int HKHdq1C;
    int hTJ3DvSjuG;
    scanf ("%d %s %d", &A8mj0Gt, BWqBXC, &qM8mc3JwgNC9);
    wIWsCNlYZiR = strlen (BWqBXC);
    OEoKRle0BbLS = (790 - 790);
    HKHdq1C = (323 - 323);
    hTJ3DvSjuG = (921 - 921);
    for (; BWqBXC[hTJ3DvSjuG] != '\0';) {
        if (BWqBXC[hTJ3DvSjuG] >= 'a' && 'z' >= BWqBXC[hTJ3DvSjuG])
            BWqBXC[hTJ3DvSjuG] = BWqBXC[hTJ3DvSjuG] - 'a' + (443 - 433);
        else {
            if (BWqBXC[hTJ3DvSjuG] >= 'A' && BWqBXC[hTJ3DvSjuG] <= 'Z')
                BWqBXC[hTJ3DvSjuG] = BWqBXC[hTJ3DvSjuG] - 'A' + (427 - 417);
            else
                BWqBXC[hTJ3DvSjuG] = BWqBXC[hTJ3DvSjuG] - '0' + (801 - 801);
        }
        hTJ3DvSjuG = hTJ3DvSjuG + (215 - 214);
    }
    HKHdq1C = BWqBXC[(214 - 214)];
    hTJ3DvSjuG = (170 - 170);
    for (hTJ3DvSjuG = (363 - 363); hTJ3DvSjuG < wIWsCNlYZiR - (29 - 28); hTJ3DvSjuG = hTJ3DvSjuG + (112 - 111))
        HKHdq1C = HKHdq1C *A8mj0Gt+BWqBXC[hTJ3DvSjuG + (407 - 406)];
    for (; HKHdq1C >= qM8mc3JwgNC9;) {
        ZHxOkjz[OEoKRle0BbLS] = HKHdq1C % qM8mc3JwgNC9;
        OEoKRle0BbLS = OEoKRle0BbLS +(395 - 394);
        HKHdq1C = HKHdq1C / qM8mc3JwgNC9;
    }
    ZHxOkjz[OEoKRle0BbLS] = HKHdq1C;
    for (b2eGrAQ = (235 - 235); b2eGrAQ <= OEoKRle0BbLS; b2eGrAQ = b2eGrAQ + (688 - 687)) {
        if (ZHxOkjz[b2eGrAQ] > (86 - 77))
            ZHxOkjz[b2eGrAQ] = ZHxOkjz[b2eGrAQ] - 10 + 'A';
        else {
            if (ZHxOkjz[b2eGrAQ] >= (85 - 85))
                ZHxOkjz[b2eGrAQ] = ZHxOkjz[b2eGrAQ] - (249 - 249) + '0';
        }
    }
    klJepgFHTL = strlen (ZHxOkjz);
    f = klJepgFHTL / (37 - 35);
    for (b2eGrAQ = 0; b2eGrAQ <= f - (59 - 58); b2eGrAQ = b2eGrAQ + (300 - 299)) {
        td2zxQsADJ3 = ZHxOkjz[klJepgFHTL - b2eGrAQ - (921 - 920)];
        ZHxOkjz[klJepgFHTL - b2eGrAQ - (792 - 791)] = ZHxOkjz[b2eGrAQ];
        ZHxOkjz[b2eGrAQ] = td2zxQsADJ3;
    }
    printf ("%s", ZHxOkjz);
}

