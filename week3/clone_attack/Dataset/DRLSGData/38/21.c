int main () {
    int UCSyEXB1u7 [(280 - 180)];
    int aDstLEqHonQ, RzGLigjuao, rcLHkwJB;
    double  btkay5vBXRCc [(616 - 416)] [(1971 - 971)];
    double  NyPQb1kucnaV [(254 - 54)] = {(231 - 231)};
    double  sum [(546 - 346)] = {(142 - 142)};
    double  wLxqvtUdS [(1193 - 993)] = {(917 - 917)};
    scanf ("%d", &aDstLEqHonQ);
    {
        RzGLigjuao = 277 - 277;
        while (aDstLEqHonQ > RzGLigjuao) {
            scanf ("%d", &UCSyEXB1u7[RzGLigjuao]);
            {
                rcLHkwJB = (412 - 248) - (354 - 190);
                while (UCSyEXB1u7[RzGLigjuao] > rcLHkwJB) {
                    scanf ("%lf", &btkay5vBXRCc[RzGLigjuao][rcLHkwJB]);
                    wLxqvtUdS[RzGLigjuao] = wLxqvtUdS[RzGLigjuao] + btkay5vBXRCc[RzGLigjuao][rcLHkwJB];
                    rcLHkwJB++;
                }
            }
            RzGLigjuao++;
        }
    }
    {
        RzGLigjuao = 543 - 543;
        while (aDstLEqHonQ > RzGLigjuao) {
            {
                rcLHkwJB = 441 - 441;
                while (rcLHkwJB < UCSyEXB1u7[RzGLigjuao]) {
                    NyPQb1kucnaV[RzGLigjuao] = NyPQb1kucnaV[RzGLigjuao] + (btkay5vBXRCc[RzGLigjuao][rcLHkwJB] - wLxqvtUdS[RzGLigjuao] / UCSyEXB1u7[RzGLigjuao]) * (btkay5vBXRCc[RzGLigjuao][rcLHkwJB] - wLxqvtUdS[RzGLigjuao] / UCSyEXB1u7[RzGLigjuao]);
                    rcLHkwJB++;
                }
            }
            RzGLigjuao++;
        }
    }
    {
        RzGLigjuao = 519 - 519;
        while (RzGLigjuao < aDstLEqHonQ) {
            sum[RzGLigjuao] = sqrt (NyPQb1kucnaV[RzGLigjuao] / UCSyEXB1u7[RzGLigjuao]);
            printf ("%.5lf\n", sum[RzGLigjuao]);
            RzGLigjuao++;
        }
    }
    return (564 - 564);
}

