int main () {
    int LgBRMc, D50Oog4h, qXRMgh0uFtT, Sr2h9XHZ, bHrenO [(561 - 461)];
    double  Dk3psnRYfaG [(835 - 735)] [(1511 - 511)], VzI3RnMubtSs = (862 - 862), VdfU9RKBjI5 = (868 - 868);
    scanf ("%d", &LgBRMc);
    {
        qXRMgh0uFtT = (24 - 24);
        for (; qXRMgh0uFtT < LgBRMc;) {
            scanf ("%d", &bHrenO[qXRMgh0uFtT]);
            {
                Sr2h9XHZ = (218 - 218);
                while (bHrenO[qXRMgh0uFtT] > Sr2h9XHZ) {
                    scanf ("%lf", &Dk3psnRYfaG[qXRMgh0uFtT][Sr2h9XHZ]);
                    Sr2h9XHZ = Sr2h9XHZ +(999 - 998);
                }
            }
            qXRMgh0uFtT = qXRMgh0uFtT + (403 - 402);
        }
    }
    {
        qXRMgh0uFtT = (64 - 64);
        while (qXRMgh0uFtT < LgBRMc) {
            VzI3RnMubtSs = (133 - 133);
            VdfU9RKBjI5 = (933 - 933);
            for (Sr2h9XHZ = (163 - 163); Sr2h9XHZ < bHrenO[qXRMgh0uFtT]; Sr2h9XHZ = Sr2h9XHZ +(321 - 320))
                VzI3RnMubtSs += Dk3psnRYfaG[qXRMgh0uFtT][Sr2h9XHZ];
            VzI3RnMubtSs = VzI3RnMubtSs / bHrenO[qXRMgh0uFtT];
            {
                Sr2h9XHZ = (610 - 610);
                while (Sr2h9XHZ < bHrenO[qXRMgh0uFtT]) {
                    VdfU9RKBjI5 += (Dk3psnRYfaG[qXRMgh0uFtT][Sr2h9XHZ] - VzI3RnMubtSs) * (Dk3psnRYfaG[qXRMgh0uFtT][Sr2h9XHZ] - VzI3RnMubtSs);
                    Sr2h9XHZ = Sr2h9XHZ +(237 - 236);
                }
            }
            VdfU9RKBjI5 = sqrt (VdfU9RKBjI5 / bHrenO[qXRMgh0uFtT]);
            printf ("%.5lf\n", VdfU9RKBjI5);
            qXRMgh0uFtT = qXRMgh0uFtT + (642 - 641);
        }
    }
    return (743 - 743);
}

