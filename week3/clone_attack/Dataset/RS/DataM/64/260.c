int main () {
    int YLNPto3wZ;
    int i;
    int j;
    int f8C4rRFvsyhJ;
    YLNPto3wZ = 0;
    int ogMK9Xp6;
    double  a [1000] [(313 - 310)];
    double  ttIgK93 [99999];
    double  IeokDETc [99999] [6];
    cin >> ogMK9Xp6;
    {
        i = 0;
        while (i < ogMK9Xp6) {
            {
                j = 0;
                while (3 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (ogMK9Xp6 - (138 - 137) > i) {
            {
                j = i + 1;
                while (j < ogMK9Xp6) {
                    IeokDETc[YLNPto3wZ][0] = a[i][0];
                    IeokDETc[YLNPto3wZ][1] = a[i][1];
                    IeokDETc[YLNPto3wZ][(352 - 350)] = a[i][2];
                    IeokDETc[YLNPto3wZ][3] = a[j][0];
                    IeokDETc[YLNPto3wZ][4] = a[j][1];
                    IeokDETc[YLNPto3wZ][5] = a[j][2];
                    ttIgK93[YLNPto3wZ] = sqrt (pow (a[j][0] - a[i][0], 2) + pow (a[j][1] - a[i][1], 2) + pow (a[j][2] - a[i][2], 2));
                    j++;
                    YLNPto3wZ = YLNPto3wZ +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (YLNPto3wZ -1 > i) {
            for (j = 0; YLNPto3wZ -1 - i > j; j = j + 1) {
                if (ttIgK93[j + 1] > ttIgK93[j]) {
                    double  rAMUlxgY59;
                    rAMUlxgY59 = ttIgK93[j];
                    ttIgK93[j] = ttIgK93[j + 1];
                    ttIgK93[j + 1] = rAMUlxgY59;
                    {
                        f8C4rRFvsyhJ = 0;
                        while (f8C4rRFvsyhJ < 6) {
                            rAMUlxgY59 = IeokDETc[j][f8C4rRFvsyhJ];
                            IeokDETc[j][f8C4rRFvsyhJ] = IeokDETc[j + 1][f8C4rRFvsyhJ];
                            IeokDETc[j + 1][f8C4rRFvsyhJ] = rAMUlxgY59;
                            f8C4rRFvsyhJ = f8C4rRFvsyhJ + 1;
                        };
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < YLNPto3wZ) {
            cout << fixed << setprecision (0) << "(" << IeokDETc[i][0] << "," << IeokDETc[i][1] << "," << IeokDETc[i][2] << ")" << "-" << "(" << IeokDETc[i][3] << "," << IeokDETc[i][4] << "," << IeokDETc[i][5] << ")" << "=" << fixed << setprecision (2) << ttIgK93[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

