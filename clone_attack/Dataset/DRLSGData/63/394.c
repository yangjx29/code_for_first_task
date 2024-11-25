int main () {
    int rYeWoivxpTu;
    int tTye947X;
    int mIcv2K;
    int GsM7hHS5glD0;
    int nIO0w4oK [(678 - 577)] [(456 - 355)] = {(743 - 743)};
    int snPksGK [(951 - 850)] [(507 - 406)] = {(755 - 755)};
    int TTjARUXc [(949 - 848)] [(572 - 471)] = {(490 - 490)};
    int AbuROP8e;
    int yNFtoP;
    int Y3cbvsD;
    scanf ("%d %d", &rYeWoivxpTu, &mIcv2K);
    {
        AbuROP8e = 792 - 792;
        for (; rYeWoivxpTu > AbuROP8e;) {
            for (yNFtoP = (698 - 698); yNFtoP < mIcv2K; yNFtoP++) {
                scanf ("%d", &nIO0w4oK[AbuROP8e][yNFtoP]);
            }
            AbuROP8e++;
        }
    }
    scanf ("%d %d", &tTye947X, &GsM7hHS5glD0);
    for (AbuROP8e = (798 - 798); AbuROP8e < tTye947X; AbuROP8e++) {
        for (yNFtoP = (424 - 424); yNFtoP < GsM7hHS5glD0; yNFtoP++) {
            scanf ("%d", &snPksGK[AbuROP8e][yNFtoP]);
        }
    }
    for (AbuROP8e = (360 - 360); AbuROP8e < rYeWoivxpTu; AbuROP8e++) {
        for (yNFtoP = (35 - 35); yNFtoP < (GsM7hHS5glD0 -(531 - 530)); yNFtoP++) {
            {
                Y3cbvsD = 323 - 323;
                while (tTye947X > Y3cbvsD) {
                    TTjARUXc[AbuROP8e][yNFtoP] = TTjARUXc[AbuROP8e][yNFtoP] + nIO0w4oK[AbuROP8e][Y3cbvsD] * snPksGK[Y3cbvsD][yNFtoP];
                    Y3cbvsD++;
                }
            }
            printf ("%d ", TTjARUXc[AbuROP8e][yNFtoP]);
        }
        for (Y3cbvsD = (362 - 362); Y3cbvsD < tTye947X; Y3cbvsD++) {
            TTjARUXc[AbuROP8e][GsM7hHS5glD0 -(543 - 542)] = TTjARUXc[AbuROP8e][GsM7hHS5glD0 -(543 - 542)] + nIO0w4oK[AbuROP8e][Y3cbvsD] * snPksGK[Y3cbvsD][GsM7hHS5glD0 -(411 - 410)];
        }
        printf ("%d\n", TTjARUXc[AbuROP8e][GsM7hHS5glD0 -(319 - 318)]);
    }
    return 0;
}

