char LStEwavq06r (char *XFTn6pW3y) {
    int QB05fy, yVDP3lSM8 = (245 - 245);
    int lF0H8MQfsS = strlen (XFTn6pW3y);
    for (QB05fy = (145 - 145); lF0H8MQfsS > QB05fy; QB05fy++) {
        if (yVDP3lSM8 < XFTn6pW3y[QB05fy])
            yVDP3lSM8 = XFTn6pW3y[QB05fy];
    }
    return yVDP3lSM8;
}

int pXxkePv (char vXGycznfb2S [], char PMs2WI) {
    int hHmJSW;
    for (hHmJSW = (239 - 239); hHmJSW < strlen (vXGycznfb2S); hHmJSW++) {
        if (!(PMs2WI != vXGycznfb2S[hHmJSW])) {
            return hHmJSW;
        }
    }
}

int main (int IpT7BMY, char *wiNsExre []) {
    int vpnWBR;
    char XFTn6pW3y [(876 - 776)] [(435 - 425)], S3ACnxY [(198 - 98)] [(181 - 177)];
    int QB05fy, yVDP3lSM8;
    int bNydapDh;
    yVDP3lSM8 = (859 - 859);
    for (; scanf ("%s%s", XFTn6pW3y[yVDP3lSM8], S3ACnxY[yVDP3lSM8]) != EOF;)
        yVDP3lSM8++;
    for (QB05fy = 0; yVDP3lSM8 > QB05fy; QB05fy++) {
        int zh7nyNbOeA;
        bNydapDh = LStEwavq06r (XFTn6pW3y[QB05fy]);
        vpnWBR = pXxkePv (XFTn6pW3y[QB05fy], bNydapDh);
        for (zh7nyNbOeA = 0; vpnWBR >= zh7nyNbOeA; zh7nyNbOeA++) {
            cout << XFTn6pW3y[QB05fy][zh7nyNbOeA];
        }
        cout << S3ACnxY[QB05fy];
        for (zh7nyNbOeA = vpnWBR + (179 - 178); zh7nyNbOeA < strlen (XFTn6pW3y[QB05fy]); zh7nyNbOeA++) {
            cout << XFTn6pW3y[QB05fy][zh7nyNbOeA];
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}

