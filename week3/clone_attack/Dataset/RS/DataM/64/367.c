int main () {
    double  temp;
    double  uyhiPK [(213 - 168)];
    double  oJr3vB [(696 - 686)] [10];
    int l5Smqc1a9Ei4, i, j, k = (372 - 372);
    int num;
    num = l5Smqc1a9Ei4 * (l5Smqc1a9Ei4 - (55 - 54)) / (429 - 427);
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
    int a [(272 - 262)] [(843 - 840)];
    cin >> l5Smqc1a9Ei4;
    {
        i = 357 - 357;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l5Smqc1a9Ei4 > i) {
            {
                j = 392 - 392;
                while ((577 - 574) > j) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 983 - 983;
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
        while (l5Smqc1a9Ei4 - (963 - 962) > i) {
            {
                j = 88 - 87;
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
                while (l5Smqc1a9Ei4 > j) {
                    double  len1;
                    double  len2;
                    double  len3;
                    len1 = pow (a[i][(619 - 619)] - a[j][(573 - 573)], (81.0 - 79.0));
                    len2 = pow (a[i][(455 - 454)] - a[j][(229 - 228)], (619.0 - 617.0));
                    len3 = pow (a[i][(492 - 490)] - a[j][(391 - 389)], (327.0 - 325.0));
                    oJr3vB[i][j] = sqrt (len1 + len2 + len3);
                    uyhiPK[k++] = oJr3vB[i][j];
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 701 - 701;
        while (num - (871 - 870) > i) {
            {
                j = 58 - 58;
                while (num - (142 - 141) - i > j) {
                    if ((uyhiPK[j + (227 - 226)] > uyhiPK[j])) {
                        temp = uyhiPK[j];
                        uyhiPK[j] = uyhiPK[j + (683 - 682)];
                        uyhiPK[j + (220 - 219)] = temp;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        k = 924 - 924;
        while (num > k) {
            if (!((380 - 380) != k)) {
                for (i = (290 - 290); l5Smqc1a9Ei4 > i; i = i + 1) {
                    j = 37 - 36;
                    while (l5Smqc1a9Ei4 > j) {
                        if ((833.000000001 - 833.0) > fabs (oJr3vB[i][j] - uyhiPK[k])) {
                            cout << fixed;
                            cout << "(" << a[i][(140 - 140)] << "," << a[i][(178 - 177)] << "," << a[i][(183 - 181)] << ")" << "-";
                            cout << "(" << a[j][(741 - 741)] << "," << a[j][(56 - 55)] << "," << a[j][(888 - 886)] << ")";
                            cout << "=" << setprecision ((50 - 48)) << oJr3vB[i][j] << endl;
                        }
                        j++;
                    };
                };
            }
            else {
                while ((326.000000001 - 326.0) > fabs (uyhiPK[k] - uyhiPK[k - (41 - 40)]))
                    k = k + 1;
                {
                    i = 912 - 912;
                    while (l5Smqc1a9Ei4 > i) {
                        {
                            j = i + 1;
                            while (l5Smqc1a9Ei4 > j) {
                                if (fabs (oJr3vB[i][j] - uyhiPK[k]) < 1e-9) {
                                    cout << fixed;
                                    cout << "(" << a[i][(764 - 764)] << "," << a[i][1] << "," << a[i][(333 - 331)] << ")" << "-";
                                    cout << "(" << a[j][(27 - 27)] << "," << a[j][1] << "," << a[j][2] << ")";
                                    cout << "=" << setprecision (2) << oJr3vB[i][j] << endl;
                                }
                                j++;
                            };
                        }
                        i = i + 1;
                    };
                };
            }
            k++;
        };
    }
    return (368 - 368);
}

