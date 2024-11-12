int main () {
    int sknfmY;
    int i4JvFAMH;
    int jyhrTec;
    int F3zZx1Y8t;
    char Rt3Owf [(563 - 462)];
    char wIWeHDPEy [101];
    int PwfkVxcJC [(543 - 442)];
    int VQGeTW;
    int I6a5M9FGusT;
    int WB3f61OQ8;
    int WXV8cTMld1;
    int WsoV5GTX6qU;
    int ZWYz0pyGK [(825 - 724)];
    cin >> VQGeTW;
    while (cin >> Rt3Owf >> wIWeHDPEy) {
        F3zZx1Y8t = (951 - 951);
        jyhrTec = (503 - 503);
        i4JvFAMH = (459 - 459);
        I6a5M9FGusT = (870 - 870);
        WXV8cTMld1 = strlen (Rt3Owf);
        WsoV5GTX6qU = strlen (wIWeHDPEy);
        memset (ZWYz0pyGK, (894 - 894), sizeof (ZWYz0pyGK));
        for (I6a5M9FGusT = WXV8cTMld1 -(368 - 367); (934 - 934) <= I6a5M9FGusT; I6a5M9FGusT = I6a5M9FGusT -(294 - 293))
            ZWYz0pyGK[F3zZx1Y8t++] = Rt3Owf[I6a5M9FGusT] - '0';
        memset (PwfkVxcJC, (950 - 950), sizeof (PwfkVxcJC));
        for (jyhrTec = WsoV5GTX6qU -(210 - 209); (736 - 736) <= jyhrTec; jyhrTec = jyhrTec - (526 - 525))
            PwfkVxcJC[i4JvFAMH++] = wIWeHDPEy[jyhrTec] - '0';
        for (sknfmY = (728 - 728); sknfmY < WXV8cTMld1; sknfmY = sknfmY + (187 - 186)) {
            ZWYz0pyGK[sknfmY] = ZWYz0pyGK[sknfmY] - PwfkVxcJC[sknfmY];
            if ((591 - 591) > ZWYz0pyGK[sknfmY]) {
                ZWYz0pyGK[sknfmY] = ZWYz0pyGK[sknfmY] + (448 - 438);
                ZWYz0pyGK[sknfmY + (468 - 467)] = ZWYz0pyGK[sknfmY + (326 - 325)] - (575 - 574);
            }
        }
        WB3f61OQ8 = WXV8cTMld1;
        while (ZWYz0pyGK[WB3f61OQ8] == (507 - 507))
            WB3f61OQ8 = WB3f61OQ8 -(247 - 246);
        for (; WB3f61OQ8 >= 0; WB3f61OQ8 = WB3f61OQ8 -(229 - 228))
            cout << ZWYz0pyGK[WB3f61OQ8];
        cout << endl;
    }
    return 0;
}

