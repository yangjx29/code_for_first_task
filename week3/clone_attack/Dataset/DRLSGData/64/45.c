int main (int wy8mTuFMD, char *o6VhAxOYyiz []) {
    int C0mJwHIxXV [(482 - 436)];
    int FPwLrBMphWNV;
    int hkWmvA [(749 - 739)], CwmzxDGT [(412 - 402)], gEzFC0 [10];
    int uOkeCjVL, VzX3Oa8;
    float jqSlHLWCs1 [(678 - 632)];
    int i0EfanXz1 [46];
    int INFp6m;
    INFp6m = (622 - 622);
    float mqzbsvt;
    int S0wknSUa1y;
    scanf ("%d", &FPwLrBMphWNV);
    for (uOkeCjVL = (792 - 792); uOkeCjVL < FPwLrBMphWNV; uOkeCjVL = uOkeCjVL + (928 - 927)) {
        scanf ("%d%d%d", &hkWmvA[uOkeCjVL], &CwmzxDGT[uOkeCjVL], &gEzFC0[uOkeCjVL]);
    }
    for (uOkeCjVL = (110 - 110); uOkeCjVL < FPwLrBMphWNV -(981 - 980); uOkeCjVL++) {
        for (VzX3Oa8 = uOkeCjVL + (843 - 842); VzX3Oa8 < FPwLrBMphWNV; VzX3Oa8++) {
            jqSlHLWCs1[INFp6m] = sqrt ((hkWmvA[uOkeCjVL] - hkWmvA[VzX3Oa8]) * (hkWmvA[uOkeCjVL] - hkWmvA[VzX3Oa8]) + (CwmzxDGT[uOkeCjVL] - CwmzxDGT[VzX3Oa8]) * (CwmzxDGT[uOkeCjVL] - CwmzxDGT[VzX3Oa8]) + (gEzFC0[uOkeCjVL] - gEzFC0[VzX3Oa8]) * (gEzFC0[uOkeCjVL] - gEzFC0[VzX3Oa8]));
            i0EfanXz1[INFp6m] = uOkeCjVL;
            C0mJwHIxXV[INFp6m] = VzX3Oa8;
            INFp6m = INFp6m +(122 - 121);
        }
    }
    for (uOkeCjVL = (597 - 597); uOkeCjVL < INFp6m; uOkeCjVL++) {
        for (VzX3Oa8 = uOkeCjVL + 1; VzX3Oa8 < INFp6m; VzX3Oa8++) {
            if (jqSlHLWCs1[VzX3Oa8] > jqSlHLWCs1[uOkeCjVL]) {
                mqzbsvt = jqSlHLWCs1[VzX3Oa8];
                jqSlHLWCs1[VzX3Oa8] = jqSlHLWCs1[uOkeCjVL];
                jqSlHLWCs1[uOkeCjVL] = mqzbsvt;
                S0wknSUa1y = i0EfanXz1[VzX3Oa8];
                {
                    if ((838 - 838)) {
                        return 0;
                    }
                }
                i0EfanXz1[VzX3Oa8] = i0EfanXz1[uOkeCjVL];
                i0EfanXz1[uOkeCjVL] = S0wknSUa1y;
                S0wknSUa1y = C0mJwHIxXV[VzX3Oa8];
                C0mJwHIxXV[VzX3Oa8] = C0mJwHIxXV[uOkeCjVL];
                C0mJwHIxXV[uOkeCjVL] = S0wknSUa1y;
            }
            if (jqSlHLWCs1[VzX3Oa8] == jqSlHLWCs1[uOkeCjVL]) {
                if (i0EfanXz1[uOkeCjVL] > i0EfanXz1[VzX3Oa8] || (i0EfanXz1[uOkeCjVL] == i0EfanXz1[VzX3Oa8] && C0mJwHIxXV[uOkeCjVL] > C0mJwHIxXV[VzX3Oa8])) {
                    mqzbsvt = jqSlHLWCs1[VzX3Oa8];
                    jqSlHLWCs1[VzX3Oa8] = jqSlHLWCs1[uOkeCjVL];
                    jqSlHLWCs1[uOkeCjVL] = mqzbsvt;
                    S0wknSUa1y = i0EfanXz1[VzX3Oa8];
                    i0EfanXz1[VzX3Oa8] = i0EfanXz1[uOkeCjVL];
                    i0EfanXz1[uOkeCjVL] = S0wknSUa1y;
                    S0wknSUa1y = C0mJwHIxXV[VzX3Oa8];
                    C0mJwHIxXV[VzX3Oa8] = C0mJwHIxXV[uOkeCjVL];
                    C0mJwHIxXV[uOkeCjVL] = S0wknSUa1y;
                }
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", hkWmvA[i0EfanXz1[uOkeCjVL]], CwmzxDGT[i0EfanXz1[uOkeCjVL]], gEzFC0[i0EfanXz1[uOkeCjVL]], hkWmvA[C0mJwHIxXV[uOkeCjVL]], CwmzxDGT[C0mJwHIxXV[uOkeCjVL]], gEzFC0[C0mJwHIxXV[uOkeCjVL]], jqSlHLWCs1[uOkeCjVL]);
    }
    return 0;
}

