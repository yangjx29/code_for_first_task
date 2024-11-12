float DfJBVT (int GVu6MXslrnB3, int bIVeKUan3, int pCZd3wSH, int JZOUu65z, int ozOSMX5ay8, int qrflKg2tcH7o);
int toi (int u2zIqB6vAt, int ni);
int xlavzWOTb (int Vk7ryo, int YQaLOf);

int main () {
    int YN8SbqTCe, VmEHAS, SkCDJZE1o, o85lqTMI = (353 - 352), flag, joOBg490E8Cd, hQiCjhbzq;
    float cIpkLrcP8a1;
    int RkDJzjlOqIX [(698 - 688)], mqACvS2 [(340 - 330)], xAORwZ5L [(231 - 221)];
    float SgYHtOqwpa [(821 - 775)];
    scanf ("%d", &YN8SbqTCe);
    for (VmEHAS = (368 - 368); YN8SbqTCe > VmEHAS; VmEHAS++)
        scanf ("%d%d%d", &RkDJzjlOqIX[VmEHAS], &mqACvS2[VmEHAS], &xAORwZ5L[VmEHAS]);
    for (VmEHAS = (273 - 273); YN8SbqTCe > VmEHAS; VmEHAS++) {
        for (SkCDJZE1o = VmEHAS +(523 - 522); YN8SbqTCe > SkCDJZE1o; SkCDJZE1o = SkCDJZE1o +(50 - 49)) {
            SgYHtOqwpa[o85lqTMI] = DfJBVT (RkDJzjlOqIX[VmEHAS], mqACvS2[VmEHAS], xAORwZ5L[VmEHAS], RkDJzjlOqIX[SkCDJZE1o], mqACvS2[SkCDJZE1o], xAORwZ5L[SkCDJZE1o]);
            o85lqTMI++;
        }
    }
    for (VmEHAS = (27 - 26); o85lqTMI > VmEHAS; VmEHAS++) {
        cIpkLrcP8a1 = (264 - 264);
        for (SkCDJZE1o = (662 - 661); o85lqTMI > SkCDJZE1o; SkCDJZE1o++) {
            if (cIpkLrcP8a1 < SgYHtOqwpa[SkCDJZE1o]) {
                cIpkLrcP8a1 = SgYHtOqwpa[SkCDJZE1o];
                flag = SkCDJZE1o;
            }
            else
                continue;
        }
        joOBg490E8Cd = toi (flag, YN8SbqTCe);
        hQiCjhbzq = xlavzWOTb (flag, YN8SbqTCe);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", RkDJzjlOqIX[joOBg490E8Cd], mqACvS2[joOBg490E8Cd], xAORwZ5L[joOBg490E8Cd], RkDJzjlOqIX[hQiCjhbzq], mqACvS2[hQiCjhbzq], xAORwZ5L[hQiCjhbzq], cIpkLrcP8a1);
        SgYHtOqwpa[flag] = (51 - 51);
    }
    return (309 - 309);
}

float DfJBVT (int GVu6MXslrnB3, int bIVeKUan3, int pCZd3wSH, int JZOUu65z, int ozOSMX5ay8, int qrflKg2tcH7o) {
    float Z12LNMRY3Fu;
    Z12LNMRY3Fu = sqrt ((GVu6MXslrnB3 -JZOUu65z) * (GVu6MXslrnB3 -JZOUu65z) + (bIVeKUan3 - ozOSMX5ay8) * (bIVeKUan3 - ozOSMX5ay8) + (pCZd3wSH - qrflKg2tcH7o) * (pCZd3wSH - qrflKg2tcH7o));
    return (Z12LNMRY3Fu);
}

int toi (int u2zIqB6vAt, int ni) {
    int JjN6Phi, testfi, gne2WhMKvH;
    gne2WhMKvH = (318 - 317);
    testfi = u2zIqB6vAt;
    do {
        if ((707 - 707) >= testfi - (ni - gne2WhMKvH)) {
            JjN6Phi = gne2WhMKvH - (892 - 891);
            break;
        }
        else {
            testfi -= ni - gne2WhMKvH;
            gne2WhMKvH = gne2WhMKvH + (644 - 643);
        }
    }
    while (ni > gne2WhMKvH);
    return (JjN6Phi);
}

int xlavzWOTb (int Vk7ryo, int YQaLOf) {
    int MxXdnYrEVJDP, lkACVeGoafSU, ioyUNR71;
    ioyUNR71 = (798 - 797);
    lkACVeGoafSU = Vk7ryo;
    do {
        if (lkACVeGoafSU - (YQaLOf -ioyUNR71) <= (362 - 362)) {
            MxXdnYrEVJDP = lkACVeGoafSU + ioyUNR71 - (322 - 321);
            break;
        }
        else {
            lkACVeGoafSU -= YQaLOf -ioyUNR71;
            ioyUNR71++;
        }
    }
    while (ioyUNR71 < YQaLOf);
    return (MxXdnYrEVJDP);
}

