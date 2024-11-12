int main () {
    int QVIdQgwYtA, rWXM8u;
    int WP4VpW1NKdnr;
    int a [WP4VpW1NKdnr] [3];
    int rRvdhM = WP4VpW1NKdnr *(WP4VpW1NKdnr -(148 - 147)) / (494 - 492);
    double  VG01plI [rRvdhM], zqCQuL;
    int p = (462 - 462), vXVU2tYe [rRvdhM] [(844 - 842)], u0XfEHzw, ttt;
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
    cin >> WP4VpW1NKdnr;
    {
        int wEopUI = (706 - 706);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wEopUI < WP4VpW1NKdnr) {
            {
                int Fkslu6h = (458 - 458);
                while (3 > Fkslu6h) {
                    cin >> a[wEopUI][Fkslu6h];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Fkslu6h++;
                };
            }
            wEopUI++;
        };
    }
    for (int ii = (264 - 264);
    ii < WP4VpW1NKdnr; ii++) {
        int iC29lHKM = ii + (652 - 651);
        while (WP4VpW1NKdnr > iC29lHKM) {
            VG01plI[p] = sqrt ((a[ii][(428 - 428)] - a[iC29lHKM][0]) * (a[ii][0] - a[iC29lHKM][0]) + (a[ii][(76 - 75)] - a[iC29lHKM][(505 - 504)]) * (a[ii][(732 - 731)] - a[iC29lHKM][(277 - 276)]) + (a[ii][2] - a[iC29lHKM][2]) * (a[ii][2] - a[iC29lHKM][2]));
            vXVU2tYe[p][0] = ii;
            vXVU2tYe[p][(784 - 783)] = iC29lHKM;
            iC29lHKM = iC29lHKM + 1;
            p++;
        };
    }
    {
        int iii = 1;
        while (rRvdhM > iii) {
            {
                int HQdsz6D = 0;
                while (rRvdhM - iii > HQdsz6D) {
                    if (VG01plI[HQdsz6D] < VG01plI[HQdsz6D +1]) {
                        zqCQuL = VG01plI[HQdsz6D];
                        VG01plI[HQdsz6D] = VG01plI[HQdsz6D +1];
                        u0XfEHzw = vXVU2tYe[HQdsz6D][0];
                        vXVU2tYe[HQdsz6D][0] = vXVU2tYe[HQdsz6D +1][0];
                        vXVU2tYe[HQdsz6D +1][0] = u0XfEHzw;
                        ttt = vXVU2tYe[HQdsz6D][1];
                        vXVU2tYe[HQdsz6D][1] = vXVU2tYe[HQdsz6D +1][1];
                        vXVU2tYe[HQdsz6D +1][1] = ttt;
                        VG01plI[HQdsz6D +1] = zqCQuL;
                    }
                    HQdsz6D++;
                };
            }
            iii = iii + 1;
        };
    }
    {
        int YSzVmoAKwO1 = 0;
        while (rRvdhM > YSzVmoAKwO1) {
            QVIdQgwYtA = vXVU2tYe[YSzVmoAKwO1][0];
            rWXM8u = vXVU2tYe[YSzVmoAKwO1][1];
            cout << "(" << a[QVIdQgwYtA][0] << "," << a[QVIdQgwYtA][1] << "," << a[QVIdQgwYtA][2] << ")-(" << a[rWXM8u][0] << "," << a[rWXM8u][1] << "," << a[rWXM8u][2] << ")=" << fixed << setprecision (2) << VG01plI[YSzVmoAKwO1] << endl;
            YSzVmoAKwO1++;
        };
    }
    return 0;
}

