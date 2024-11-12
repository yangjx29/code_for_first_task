int ogJWwDLQbFG [(1582 - 582)] [(1689 - 689)];

int main (int gtnaSGbLUPC, char *argv []) {
    int XRG6sCfx;
    int QdwpbYG;
    int nIwEWUtAN;
    int EfmqJcLnP;
    int xC6YeHAE;
    int i;
    int XY67fRNd9;
    int DHzrvRULO [(598 - 590)];
    int p [(447 - 439)];
    XRG6sCfx = (406 - 406);
    scanf ("%d,%d", &QdwpbYG, &nIwEWUtAN);
    for (i = (681 - 681); QdwpbYG > i; i = i + (298 - 297)) {
        for (XY67fRNd9 = (370 - 370); XY67fRNd9 < nIwEWUtAN; XY67fRNd9 = XY67fRNd9 +1) {
            cin >> ogJWwDLQbFG[i][XY67fRNd9];
            if (ogJWwDLQbFG[i][XY67fRNd9 -(551 - 550)] < ogJWwDLQbFG[i][XY67fRNd9]) {
                EfmqJcLnP = XY67fRNd9;
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        p[i] = EfmqJcLnP;
    }
    for (XY67fRNd9 = (775 - 775); XY67fRNd9 < nIwEWUtAN; XY67fRNd9++) {
        for (i = (523 - 523); QdwpbYG > i; i = i + 1) {
            if (ogJWwDLQbFG[i - (86 - 85)][XY67fRNd9] > ogJWwDLQbFG[i][XY67fRNd9])
                EfmqJcLnP = i;
        }
        DHzrvRULO[XY67fRNd9] = EfmqJcLnP;
    }
    for (i = (710 - 710); i < QdwpbYG; i = i + 1) {
        EfmqJcLnP = p[i];
        if (DHzrvRULO[EfmqJcLnP] == i) {
            cout << i << "+" << EfmqJcLnP;
            XRG6sCfx = (778 - 777);
        }
    }
    if (XRG6sCfx == (774 - 774))
        cout << "No" << endl;
    return (205 - 205);
}

