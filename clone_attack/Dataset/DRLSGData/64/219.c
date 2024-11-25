int main () {
    int hA6Fy2zNe = (300 - 299);
    int JPxhdgor0AF;
    double  XCDAZ8E [(1370 - 350)], uF61ec;
    int a5FTMxdpwW8Z [(494 - 374)], Zyafoxc [(237 - 117)], cMjXOlS [(231 - 111)], X1dAey9gVbv [(1540 - 520)], gPChxU9R [(1780 - 760)];
    int iGcpH1dhZkuX, GYV2NDWjab, VVb9T3zADS, od3B9I, XELSdIjakih, LBguAvE0jtM, wiA6dVKxgQq, fUqTJl;
    cin >> JPxhdgor0AF;
    for (iGcpH1dhZkuX = (938 - 937); JPxhdgor0AF >= iGcpH1dhZkuX; iGcpH1dhZkuX++) {
        cin >> GYV2NDWjab >> VVb9T3zADS >> od3B9I;
        a5FTMxdpwW8Z[iGcpH1dhZkuX] = GYV2NDWjab;
        Zyafoxc[iGcpH1dhZkuX] = VVb9T3zADS;
        cMjXOlS[iGcpH1dhZkuX] = od3B9I;
    }
    for (XELSdIjakih = (283 - 282); JPxhdgor0AF >= XELSdIjakih; XELSdIjakih++) {
        for (LBguAvE0jtM = (730 - 728); LBguAvE0jtM <= JPxhdgor0AF; LBguAvE0jtM++) {
            if (LBguAvE0jtM <= XELSdIjakih) {
                continue;
            }
            X1dAey9gVbv[hA6Fy2zNe] = XELSdIjakih;
            gPChxU9R[hA6Fy2zNe] = LBguAvE0jtM;
            XCDAZ8E[hA6Fy2zNe] = (a5FTMxdpwW8Z[XELSdIjakih] - a5FTMxdpwW8Z[LBguAvE0jtM]) * (a5FTMxdpwW8Z[XELSdIjakih] - a5FTMxdpwW8Z[LBguAvE0jtM]) + (Zyafoxc[XELSdIjakih] - Zyafoxc[LBguAvE0jtM]) * (Zyafoxc[XELSdIjakih] - Zyafoxc[LBguAvE0jtM]) + (cMjXOlS[XELSdIjakih] - cMjXOlS[LBguAvE0jtM]) * (cMjXOlS[XELSdIjakih] - cMjXOlS[LBguAvE0jtM]);
            hA6Fy2zNe++;
        }
    }
    wiA6dVKxgQq = JPxhdgor0AF *(JPxhdgor0AF -(972 - 971)) / (62 - 60) + (522 - 521);
    while (wiA6dVKxgQq--) {
        for (iGcpH1dhZkuX = (879 - 878); iGcpH1dhZkuX < hA6Fy2zNe - (87 - 86); iGcpH1dhZkuX++) {
            if (XCDAZ8E[iGcpH1dhZkuX] < XCDAZ8E[iGcpH1dhZkuX + (727 - 726)]) {
                uF61ec = XCDAZ8E[iGcpH1dhZkuX];
                XCDAZ8E[iGcpH1dhZkuX] = XCDAZ8E[iGcpH1dhZkuX + (502 - 501)];
                XCDAZ8E[iGcpH1dhZkuX + (500 - 499)] = uF61ec;
                fUqTJl = gPChxU9R[iGcpH1dhZkuX];
                gPChxU9R[iGcpH1dhZkuX] = gPChxU9R[iGcpH1dhZkuX + (350 - 349)];
                gPChxU9R[iGcpH1dhZkuX + (20 - 19)] = fUqTJl;
                fUqTJl = X1dAey9gVbv[iGcpH1dhZkuX];
                X1dAey9gVbv[iGcpH1dhZkuX] = X1dAey9gVbv[iGcpH1dhZkuX + (507 - 506)];
                X1dAey9gVbv[iGcpH1dhZkuX + (1000 - 999)] = fUqTJl;
            }
        }
    }
    for (iGcpH1dhZkuX = (894 - 893); iGcpH1dhZkuX <= JPxhdgor0AF *(JPxhdgor0AF -(249 - 248)) / (922 - 920); iGcpH1dhZkuX++) {
        XCDAZ8E[iGcpH1dhZkuX] = sqrt (XCDAZ8E[iGcpH1dhZkuX]);
        cout << "(" << a5FTMxdpwW8Z[X1dAey9gVbv[iGcpH1dhZkuX]] << "," << Zyafoxc[X1dAey9gVbv[iGcpH1dhZkuX]] << "," << cMjXOlS[X1dAey9gVbv[iGcpH1dhZkuX]] << ")-(" << a5FTMxdpwW8Z[gPChxU9R[iGcpH1dhZkuX]] << "," << Zyafoxc[gPChxU9R[iGcpH1dhZkuX]] << "," << cMjXOlS[gPChxU9R[iGcpH1dhZkuX]] << ")=" << fixed << setprecision ((883 - 881)) << XCDAZ8E[iGcpH1dhZkuX] << endl;
    }
    return (276 - 276);
}

