int AeNd85XsC1iF;
char tVPkZ7a6Le3A [(116 - 15)] [(453 - 352)];

void  U4y0e6dQr (int xSJrO6p, int lH3M2T) {
    {
        int iHgo3CVvf;
        iHgo3CVvf = -(719 - 718);
        while ((978 - 977) >= iHgo3CVvf) {
            if ((xSJrO6p + iHgo3CVvf >= (405 - 405)) && (xSJrO6p + iHgo3CVvf < AeNd85XsC1iF) && (!('.' != tVPkZ7a6Le3A[xSJrO6p + iHgo3CVvf][lH3M2T])))
                tVPkZ7a6Le3A[xSJrO6p + iHgo3CVvf][lH3M2T] = '$';
            if (((945 - 945) <= lH3M2T + iHgo3CVvf) && (lH3M2T + iHgo3CVvf < AeNd85XsC1iF) && (!('.' != tVPkZ7a6Le3A[xSJrO6p][lH3M2T + iHgo3CVvf])))
                tVPkZ7a6Le3A[xSJrO6p][lH3M2T + iHgo3CVvf] = '$';
            iHgo3CVvf = iHgo3CVvf + (955 - 953);
        }
    }
}

int main () {
    int m, pu4GvwWJFirP = (407 - 407), xSJrO6p, lH3M2T, vqivzrP5cb;
    {
        if ((474 - 474)) {
            return (760 - 760);
        }
    }
    cin >> AeNd85XsC1iF;
    {
        xSJrO6p = (297 - 297);
        while (AeNd85XsC1iF > xSJrO6p) {
            {
                lH3M2T = (256 - 256);
                while (AeNd85XsC1iF > lH3M2T) {
                    cin >> tVPkZ7a6Le3A[xSJrO6p][lH3M2T];
                    lH3M2T = lH3M2T + (781 - 780);
                }
            }
            xSJrO6p = xSJrO6p + (744 - 743);
        }
    }
    cin >> m;
    {
        vqivzrP5cb = (242 - 241);
        while (vqivzrP5cb <= m) {
            vqivzrP5cb = vqivzrP5cb + (237 - 236);
            {
                xSJrO6p = (303 - 303);
                while (xSJrO6p < AeNd85XsC1iF) {
                    lH3M2T = (609 - 609);
                    while (lH3M2T < AeNd85XsC1iF) {
                        if (tVPkZ7a6Le3A[xSJrO6p][lH3M2T] == '$')
                            tVPkZ7a6Le3A[xSJrO6p][lH3M2T] = '@';
                        lH3M2T = lH3M2T + (584 - 583);
                    }
                    xSJrO6p = xSJrO6p + 1;
                }
            }
            {
                xSJrO6p = (643 - 643);
                while (xSJrO6p < AeNd85XsC1iF) {
                    {
                        lH3M2T = (622 - 622);
                        while (lH3M2T < AeNd85XsC1iF) {
                            if (tVPkZ7a6Le3A[xSJrO6p][lH3M2T] == '@') {
                                U4y0e6dQr (xSJrO6p, lH3M2T);
                                tVPkZ7a6Le3A[xSJrO6p][lH3M2T] = '#';
                                pu4GvwWJFirP = pu4GvwWJFirP + 1;
                            }
                            lH3M2T++;
                        }
                    }
                    xSJrO6p = xSJrO6p + 1;
                }
            }
        }
    }
    cout << pu4GvwWJFirP;
    return 0;
}

