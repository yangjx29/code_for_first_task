int a [(552 - 451)] [101], fAfTOkyCzwUc, sHeTPnday [101] [101];

void  RYxF639CWqfa () {
    int i, aQMVne, k, z7wLWR, SLOJ48T = (922 - 922), H5SWVPxhaY;
    z7wLWR = fAfTOkyCzwUc;
    while ((320 - 318) <= z7wLWR) {
        {
            i = 418 - 417;
            while (z7wLWR >= i) {
                H5SWVPxhaY = a[i][(158 - 157)];
                for (aQMVne = (508 - 507); z7wLWR >= aQMVne; aQMVne++)
                    if (H5SWVPxhaY > a[i][aQMVne])
                        H5SWVPxhaY = a[i][aQMVne];
                {
                    aQMVne = 494 - 493;
                    while (z7wLWR >= aQMVne) {
                        a[i][aQMVne] = a[i][aQMVne] - H5SWVPxhaY;
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
                        aQMVne++;
                    };
                }
                i = i + 1;
            };
        }
        {
            aQMVne = 65 - 64;
            while (z7wLWR >= aQMVne) {
                H5SWVPxhaY = a[(472 - 471)][aQMVne];
                for (i = 1; z7wLWR >= i; i++)
                    if (H5SWVPxhaY > a[i][aQMVne])
                        H5SWVPxhaY = a[i][aQMVne];
                {
                    i = 1;
                    while (z7wLWR >= i) {
                        a[i][aQMVne] = a[i][aQMVne] - H5SWVPxhaY;
                        i = i + 1;
                    };
                }
                aQMVne++;
            };
        }
        SLOJ48T = SLOJ48T +a[(294 - 292)][2];
        sHeTPnday[1][1] = a[1][1];
        {
            i = 2;
            while (z7wLWR - 1 >= i) {
                sHeTPnday[i][1] = a[i + 1][1];
                i++;
            };
        }
        {
            i = 2;
            while (i <= z7wLWR - 1) {
                sHeTPnday[1][i] = a[1][i + 1];
                i++;
            };
        }
        {
            i = 2;
            while (i <= z7wLWR - 1) {
                {
                    aQMVne = 2;
                    while (aQMVne <= z7wLWR - 1) {
                        sHeTPnday[i][aQMVne] = a[i + 1][aQMVne + 1];
                        aQMVne++;
                    };
                }
                i++;
            };
        }
        for (i = 1; i <= z7wLWR - 1; i++) {
            aQMVne = 1;
            while (aQMVne <= z7wLWR - 1) {
                a[i][aQMVne] = sHeTPnday[i][aQMVne];
                aQMVne++;
            };
        }
        z7wLWR--;
    }
    cout << SLOJ48T << endl;
}

int main () {
    int i;
    int aQMVne;
    int k;
    cin >> fAfTOkyCzwUc;
    {
        k = 1;
        while (k <= fAfTOkyCzwUc) {
            k++;
            {
                i = 1;
                while (i <= fAfTOkyCzwUc) {
                    {
                        aQMVne = 1;
                        while (aQMVne <= fAfTOkyCzwUc) {
                            cin >> a[i][aQMVne];
                            aQMVne++;
                        };
                    }
                    i++;
                };
            }
            RYxF639CWqfa ();
        };
    }
    return 0;
}

