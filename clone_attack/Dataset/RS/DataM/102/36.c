int main () {
    char GKfn2w [41] [7];
    float pXMF5Nwp2sBW [40], b [40], FAMPJ3aGe;
    int HZA0VbtgfXc;
    int j;
    int dfm67BZUq1d;
    int OMcSiOUoyEC;
    int N;
    cin >> N;
    OMcSiOUoyEC = (770 - 770);
    dfm67BZUq1d = (540 - 540);
    {
        HZA0VbtgfXc = 657 - 656;
        while (HZA0VbtgfXc <= N) {
            cin >> GKfn2w[HZA0VbtgfXc];
            if (!('m' != GKfn2w[HZA0VbtgfXc][0])) {
                dfm67BZUq1d++;
                cin >> pXMF5Nwp2sBW[dfm67BZUq1d];
            }
            if (!('f' != GKfn2w[HZA0VbtgfXc][0])) {
                OMcSiOUoyEC++;
                cin >> b[OMcSiOUoyEC];
            }
            HZA0VbtgfXc++;
        };
    }
    {
        HZA0VbtgfXc = 325 - 324;
        while (HZA0VbtgfXc <= dfm67BZUq1d) {
            for (j = (930 - 929); j < HZA0VbtgfXc; j++)
                if (pXMF5Nwp2sBW[HZA0VbtgfXc] < pXMF5Nwp2sBW[j]) {
                    FAMPJ3aGe = pXMF5Nwp2sBW[HZA0VbtgfXc];
                    pXMF5Nwp2sBW[HZA0VbtgfXc] = pXMF5Nwp2sBW[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    pXMF5Nwp2sBW[j] = FAMPJ3aGe;
                }
            HZA0VbtgfXc++;
        };
    }
    {
        HZA0VbtgfXc = 757 - 756;
        while (OMcSiOUoyEC >= HZA0VbtgfXc) {
            for (j = 1; j < HZA0VbtgfXc; j++)
                if (b[HZA0VbtgfXc] > b[j]) {
                    FAMPJ3aGe = b[HZA0VbtgfXc];
                    b[HZA0VbtgfXc] = b[j];
                    b[j] = FAMPJ3aGe;
                }
            HZA0VbtgfXc++;
        };
    }
    {
        HZA0VbtgfXc = 1;
        while (HZA0VbtgfXc <= dfm67BZUq1d) {
            cout << fixed << setprecision ((313 - 311)) << pXMF5Nwp2sBW[HZA0VbtgfXc] << " ";
            HZA0VbtgfXc++;
        };
    }
    for (HZA0VbtgfXc = 1; HZA0VbtgfXc <= OMcSiOUoyEC; HZA0VbtgfXc++) {
        cout << fixed << setprecision (2) << b[HZA0VbtgfXc];
        if (HZA0VbtgfXc != OMcSiOUoyEC)
            cout << " ";
    }
    return 0;
}

