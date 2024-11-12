int z6A4UZDhFLtN (int N8z76r4GlT, int UJyRtOdaG [] [(302 - 201)]);
int kWKPZXg6vhJ (int N8z76r4GlT, int UJyRtOdaG [] [(170 - 69)]);
int r1MVIsoJqjY (int UJyRtOdaG, int GL5tJFEpwPy);

int main () {
    int LClAT4sp1 [(331 - 230)], N8z76r4GlT, UJyRtOdaG [(792 - 691)] [101], qRDhrp9zg3, yukOTsg8, RNJToerkK;
    cin >> N8z76r4GlT;
    for (qRDhrp9zg3 = (152 - 152); N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3 = qRDhrp9zg3 + (195 - 194)) {
        for (yukOTsg8 = (59 - 59); N8z76r4GlT > yukOTsg8; yukOTsg8 = yukOTsg8 + (933 - 932)) {
            for (RNJToerkK = (79 - 79); N8z76r4GlT > RNJToerkK; RNJToerkK++)
                cin >> UJyRtOdaG[yukOTsg8][RNJToerkK];
        }
        LClAT4sp1[qRDhrp9zg3] = z6A4UZDhFLtN (N8z76r4GlT, UJyRtOdaG);
    }
    for (qRDhrp9zg3 = (222 - 222); N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3 = qRDhrp9zg3 + (760 - 759))
        cout << LClAT4sp1[qRDhrp9zg3] << endl;
    return 0;
}

int z6A4UZDhFLtN (int N8z76r4GlT, int UJyRtOdaG [] [101]) {
    int LClAT4sp1, qRDhrp9zg3, yukOTsg8, CtC2R7Eie;
    for (qRDhrp9zg3 = 0; N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3 = qRDhrp9zg3 + (487 - 486)) {
        CtC2R7Eie = UJyRtOdaG[qRDhrp9zg3][0];
        for (yukOTsg8 = (860 - 859); N8z76r4GlT > yukOTsg8; yukOTsg8 = yukOTsg8 + (411 - 410))
            CtC2R7Eie = r1MVIsoJqjY (CtC2R7Eie, UJyRtOdaG[qRDhrp9zg3][yukOTsg8]);
        for (yukOTsg8 = 0; N8z76r4GlT > yukOTsg8; yukOTsg8 = yukOTsg8 + (62 - 61))
            UJyRtOdaG[qRDhrp9zg3][yukOTsg8] = UJyRtOdaG[qRDhrp9zg3][yukOTsg8] - CtC2R7Eie;
    }
    for (yukOTsg8 = 0; N8z76r4GlT > yukOTsg8; yukOTsg8++) {
        CtC2R7Eie = UJyRtOdaG[0][yukOTsg8];
        for (qRDhrp9zg3 = (122 - 121); N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3 = qRDhrp9zg3 + (425 - 424))
            CtC2R7Eie = r1MVIsoJqjY (CtC2R7Eie, UJyRtOdaG[qRDhrp9zg3][yukOTsg8]);
        for (qRDhrp9zg3 = 0; N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3++)
            UJyRtOdaG[qRDhrp9zg3][yukOTsg8] = UJyRtOdaG[qRDhrp9zg3][yukOTsg8] - CtC2R7Eie;
    }
    LClAT4sp1 = UJyRtOdaG[(683 - 682)][(24 - 23)];
    if (N8z76r4GlT != 2) {
        kWKPZXg6vhJ (N8z76r4GlT, UJyRtOdaG);
        LClAT4sp1 = LClAT4sp1 +z6A4UZDhFLtN (N8z76r4GlT -(440 - 439), UJyRtOdaG);
        return LClAT4sp1;
    }
    else
        return LClAT4sp1;
}

int r1MVIsoJqjY (int UJyRtOdaG, int GL5tJFEpwPy) {
    if (GL5tJFEpwPy <= UJyRtOdaG)
        return GL5tJFEpwPy;
    else
        return UJyRtOdaG;
}

int kWKPZXg6vhJ (int N8z76r4GlT, int UJyRtOdaG [] [101]) {
    int qRDhrp9zg3, yukOTsg8;
    for (qRDhrp9zg3 = 0; N8z76r4GlT > qRDhrp9zg3; qRDhrp9zg3++) {
        for (yukOTsg8 = 1; N8z76r4GlT -1 > yukOTsg8; yukOTsg8++)
            UJyRtOdaG[qRDhrp9zg3][yukOTsg8] = UJyRtOdaG[qRDhrp9zg3][yukOTsg8 + 1];
        UJyRtOdaG[qRDhrp9zg3][N8z76r4GlT -1] = 0;
    }
    for (yukOTsg8 = 0; yukOTsg8 < N8z76r4GlT -1; yukOTsg8++) {
        for (qRDhrp9zg3 = 1; N8z76r4GlT -1 > qRDhrp9zg3; qRDhrp9zg3++)
            UJyRtOdaG[qRDhrp9zg3][yukOTsg8] = UJyRtOdaG[qRDhrp9zg3 + 1][yukOTsg8];
        UJyRtOdaG[N8z76r4GlT -1][yukOTsg8] = 0;
    }
    return 0;
}

