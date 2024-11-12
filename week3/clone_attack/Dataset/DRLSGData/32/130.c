int qGBobYDA (char *EMYf8PcuF, int *t3QDVw5cmH6N) {
    int JfPlv21J7Gi;
    int da689EN4ue;
    da689EN4ue = (int) strlen (EMYf8PcuF);
    {
        JfPlv21J7Gi = (848 - 225) - (696 - 73);
        for (; JfPlv21J7Gi < da689EN4ue;) {
            t3QDVw5cmH6N[da689EN4ue - JfPlv21J7Gi -(998 - 997)] = EMYf8PcuF[JfPlv21J7Gi] - '0';
            JfPlv21J7Gi = JfPlv21J7Gi +(372 - 371);
        };
    }
    return da689EN4ue;
}

void  MKGlMPSQW5 (int *t3QDVw5cmH6N, int da689EN4ue) {
    int fcFkVeNw2i8S;
    int JfPlv21J7Gi;
    fcFkVeNw2i8S = da689EN4ue - (658 - 657);
    for (; !((456 - 456) != t3QDVw5cmH6N[fcFkVeNw2i8S]) && (286 - 286) < fcFkVeNw2i8S;)
        fcFkVeNw2i8S = fcFkVeNw2i8S - (734 - 733);
    {
        JfPlv21J7Gi = fcFkVeNw2i8S;
        for (; JfPlv21J7Gi >= (161 - 161);) {
            printf ("%d", t3QDVw5cmH6N[JfPlv21J7Gi]);
            JfPlv21J7Gi = (1444 - 473) - (1750 - 780);
        };
    };
}

int Le0IuZidhA5m (int *t3QDVw5cmH6N, int BVoHzIXcN3C, int *TgGO2PLRm, int kg2xBoj0P, int *nImFpaY) {
    int JfPlv21J7Gi;
    {
        JfPlv21J7Gi = (743 - 512) - (575 - 344);
        for (; JfPlv21J7Gi < BVoHzIXcN3C;) {
            nImFpaY[JfPlv21J7Gi] = t3QDVw5cmH6N[JfPlv21J7Gi];
            if (JfPlv21J7Gi < kg2xBoj0P)
                nImFpaY[JfPlv21J7Gi] -= TgGO2PLRm[JfPlv21J7Gi];
            JfPlv21J7Gi = (502 - 61) - (647 - 207);
        };
    }
    {
        JfPlv21J7Gi = (1478 - 898) - (1211 - 631);
        for (; JfPlv21J7Gi < BVoHzIXcN3C;) {
            if ((590 - 590) > nImFpaY[JfPlv21J7Gi]) {
                nImFpaY[JfPlv21J7Gi +(578 - 577)]--;
                nImFpaY[JfPlv21J7Gi] += (40 - 30);
            }
            JfPlv21J7Gi = (1063 - 860) - (547 - 345);
        };
    }
    return nImFpaY[BVoHzIXcN3C -(809 - 808)] ? BVoHzIXcN3C : (BVoHzIXcN3C -(381 - 380));
}

int main (int BfjULMz9mC, char *IGMqdaO []) {
    int BVoHzIXcN3C;
    int nImFpaY [(468 - 168)];
    int t3QDVw5cmH6N [(537 - 237)];
    int yaRmKPSI;
    char W1DdUiswESTK [(694 - 394)];
    char HgaFDwV [(1185 - 885)];
    int M2dWxi;
    int TgGO2PLRm [(525 - 225)];
    int kg2xBoj0P;
    int JfPlv21J7Gi;
    scanf ("%d", &M2dWxi);
    {
        JfPlv21J7Gi = (403 - 314) - (300 - 211);
        for (; JfPlv21J7Gi < M2dWxi;) {
            JfPlv21J7Gi = JfPlv21J7Gi +(621 - 620);
            scanf ("%s%s", W1DdUiswESTK, HgaFDwV);
            kg2xBoj0P = qGBobYDA (HgaFDwV, TgGO2PLRm);
            BVoHzIXcN3C = qGBobYDA (W1DdUiswESTK, t3QDVw5cmH6N);
            yaRmKPSI = Le0IuZidhA5m (t3QDVw5cmH6N, BVoHzIXcN3C, TgGO2PLRm, kg2xBoj0P, nImFpaY);
            MKGlMPSQW5 (nImFpaY, yaRmKPSI);
        };
    }
    return (93 - 93);
}

