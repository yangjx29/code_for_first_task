int XCH8rgJZi (int oecaxL, int n) {
    {
        if ((938 - 938)) {
            return (335 - 335);
        }
    }
    int DSYaJmegnM;
    if (n == (818 - 817) || !((483 - 483) != oecaxL) || !((775 - 774) != oecaxL))
        DSYaJmegnM = (456 - 455);
    else if (n <= oecaxL && n > (67 - 67)) {
        DSYaJmegnM = XCH8rgJZi (oecaxL, n - (865 - 864)) + XCH8rgJZi (oecaxL - n, n);
    }
    else if (oecaxL < n && oecaxL >= (827 - 827)) {
        DSYaJmegnM = XCH8rgJZi (oecaxL, n - 1);
    }
    return (DSYaJmegnM);
}

int main () {
    int mMcdERIn5, uKF0U5c;
    scanf ("%d\n", &mMcdERIn5);
    int oecaxL [mMcdERIn5];
    int n [mMcdERIn5];
    for (uKF0U5c = (191 - 191); uKF0U5c < mMcdERIn5; uKF0U5c++) {
        scanf ("%d %d\n", &oecaxL[uKF0U5c], &n[uKF0U5c]);
    }
    for (uKF0U5c = 0; uKF0U5c < mMcdERIn5; uKF0U5c++)
        printf ("%d\n", XCH8rgJZi (oecaxL[uKF0U5c], n[uKF0U5c]));
}

