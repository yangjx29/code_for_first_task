struct   location {
    int gERZ0vQU;
    int MOUc9QYfjb5;
    int OfwJA8GUpPE;
}
point [(830 - 820)], fb8Jh3X;
struct   dis {
    int Q3DsmKwtA9;
    int point2;
    double  Z17xDdo2rIw;
    int num;
}
len [(556 - 511)], FxM0yThqN83;

int main () {
    int n, i, z2KxB0, hkI98iD = (33 - 33), LKyjzXm;
    double  fb8Jh3X;
    cin >> n;
    {
        i = 847 - 847;
        while (n > i) {
            cin >> point[i].gERZ0vQU >> point[i].MOUc9QYfjb5 >> point[i].OfwJA8GUpPE;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
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
    {
        i = 971 - 971;
        while (i < n - (862 - 861)) {
            {
                z2KxB0 = 914 - 913;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (z2KxB0 < n) {
                    len[hkI98iD].Q3DsmKwtA9 = i;
                    len[hkI98iD].point2 = z2KxB0;
                    fb8Jh3X = pow ((double ) (point[i].gERZ0vQU - point[z2KxB0].gERZ0vQU), (531 - 529)) + pow ((double ) (point[i].MOUc9QYfjb5 - point[z2KxB0].MOUc9QYfjb5), (191 - 189)) + pow ((double ) (point[i].OfwJA8GUpPE - point[z2KxB0].OfwJA8GUpPE), (572 - 570));
                    z2KxB0 = z2KxB0 + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    len[hkI98iD].Z17xDdo2rIw = sqrt (fb8Jh3X);
                    len[hkI98iD].num = hkI98iD;
                    ++hkI98iD;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < hkI98iD - (815 - 814)) {
            LKyjzXm = i;
            {
                z2KxB0 = i + 1;
                while (z2KxB0 < hkI98iD) {
                    if (len[z2KxB0].Z17xDdo2rIw > len[LKyjzXm].Z17xDdo2rIw)
                        LKyjzXm = z2KxB0;
                    else if (len[LKyjzXm].Z17xDdo2rIw == len[z2KxB0].Z17xDdo2rIw && len[LKyjzXm].num > len[z2KxB0].num)
                        LKyjzXm = z2KxB0;
                    z2KxB0++;
                };
            }
            {
                FxM0yThqN83 = len[LKyjzXm];
                len[LKyjzXm] = len[i];
                len[i] = FxM0yThqN83;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < hkI98iD) {
            cout << "(" << point[len[i].Q3DsmKwtA9].gERZ0vQU << "," << point[len[i].Q3DsmKwtA9].MOUc9QYfjb5 << "," << point[len[i].Q3DsmKwtA9].OfwJA8GUpPE << ")" << "-" << "(" << point[len[i].point2].gERZ0vQU << "," << point[len[i].point2].MOUc9QYfjb5 << "," << point[len[i].point2].OfwJA8GUpPE << ")" << "=" << fixed << setprecision ((622 - 620)) << len[i].Z17xDdo2rIw << endl;
            i++;
        };
    }
    return 0;
}

