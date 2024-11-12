int main () {
    struct   zuobiao {
        int x [2];
        int z2dX6K [2];
        int z [2];
        float nFOZ2SN;
    }
    cojekfD [100];
    struct   zuobiao {
        int x [2];
        int z2dX6K [2];
        int z [2];
        float nFOZ2SN;
    }
    RuBc5ygh3;
    int tj7QbFD3lO [10], b [10], HpmoHuc4NC [10];
    int a3jQwFbomHP;
    int hyazFUwqrVR;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> a3jQwFbomHP;
    for (hyazFUwqrVR = 0; a3jQwFbomHP > hyazFUwqrVR; hyazFUwqrVR++)
        cin >> tj7QbFD3lO[hyazFUwqrVR] >> b[hyazFUwqrVR] >> HpmoHuc4NC[hyazFUwqrVR];
    {
        hyazFUwqrVR = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a3jQwFbomHP > hyazFUwqrVR) {
            {
                j = hyazFUwqrVR + 1;
                while (a3jQwFbomHP > j) {
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].x[0] = tj7QbFD3lO[hyazFUwqrVR];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].x[1] = tj7QbFD3lO[j];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].z2dX6K[0] = b[hyazFUwqrVR];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].z2dX6K[1] = b[j];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].z[0] = HpmoHuc4NC[hyazFUwqrVR];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].z[1] = HpmoHuc4NC[j];
                    cojekfD[(((a3jQwFbomHP - 1) + (a3jQwFbomHP - hyazFUwqrVR)) * hyazFUwqrVR / 2) + j - hyazFUwqrVR].nFOZ2SN = sqrt ((tj7QbFD3lO[hyazFUwqrVR] - tj7QbFD3lO[j]) * (tj7QbFD3lO[hyazFUwqrVR] - tj7QbFD3lO[j]) + (b[hyazFUwqrVR] - b[j]) * (b[hyazFUwqrVR] - b[j]) + (HpmoHuc4NC[hyazFUwqrVR] - HpmoHuc4NC[j]) * (HpmoHuc4NC[hyazFUwqrVR] - HpmoHuc4NC[j]));
                    j++;
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
            hyazFUwqrVR++;
        };
    }
    for (hyazFUwqrVR = 1; (a3jQwFbomHP - 1) * a3jQwFbomHP / 2 >= hyazFUwqrVR; hyazFUwqrVR++) {
        j = 1;
        while ((a3jQwFbomHP - 1) * a3jQwFbomHP / 2 - hyazFUwqrVR >= j) {
            if (cojekfD[j].nFOZ2SN < cojekfD[j + 1].nFOZ2SN) {
                RuBc5ygh3 = cojekfD[j];
                cojekfD[j] = cojekfD[j + 1];
                cojekfD[j + 1] = RuBc5ygh3;
            }
            j++;
        };
    }
    {
        hyazFUwqrVR = 1;
        while (hyazFUwqrVR <= (a3jQwFbomHP - 1) * a3jQwFbomHP / 2) {
            cout << "(" << cojekfD[hyazFUwqrVR].x[0] << "," << cojekfD[hyazFUwqrVR].z2dX6K[0] << "," << cojekfD[hyazFUwqrVR].z[0] << ")-(" << cojekfD[hyazFUwqrVR].x[1] << "," << cojekfD[hyazFUwqrVR].z2dX6K[1] << "," << cojekfD[hyazFUwqrVR].z[1] << ")=" << fixed << setprecision (2) << cojekfD[hyazFUwqrVR].nFOZ2SN << endl;
            hyazFUwqrVR++;
        };
    }
    return 0;
}

