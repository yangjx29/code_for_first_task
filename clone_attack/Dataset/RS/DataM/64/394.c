int main () {
    struct   point {
        int HRrqfNmTb;
        int VNMfJjUKrtiB;
        int z;
    }
    orz1D2cIH [11];
    double  d [(326 - 225)] [101];
    int YpiLn6Da;
    int kueQRoq;
    int i;
    int j;
    int k;
    int b1rhu2ETD;
    int t;
    YpiLn6Da = (472 - 472);
    cin >> kueQRoq;
    for (i = 0; kueQRoq - (608 - 607) >= i; i = i + 1) {
        cin >> orz1D2cIH[i].HRrqfNmTb >> orz1D2cIH[i].VNMfJjUKrtiB >> orz1D2cIH[i].z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; kueQRoq > i; i++) {
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
        for (j = i + 1; kueQRoq > j; j = j + 1) {
            d[i][j] = sqrt ((orz1D2cIH[i].HRrqfNmTb - orz1D2cIH[j].HRrqfNmTb) * (orz1D2cIH[i].HRrqfNmTb - orz1D2cIH[j].HRrqfNmTb) + (orz1D2cIH[i].VNMfJjUKrtiB - orz1D2cIH[j].VNMfJjUKrtiB) * (orz1D2cIH[i].VNMfJjUKrtiB - orz1D2cIH[j].VNMfJjUKrtiB) + (orz1D2cIH[i].z - orz1D2cIH[j].z) * (orz1D2cIH[i].z - orz1D2cIH[j].z));
        };
    }
    for (t = 0; t < (kueQRoq * (kueQRoq + 1)) / 2; t++) {
        for (i = 0; i < kueQRoq; i++) {
            for (j = i + 1; j < kueQRoq; j++) {
                YpiLn6Da = 0;
                for (k = 0; k < kueQRoq; k++) {
                    b1rhu2ETD = k + 1;
                    while (b1rhu2ETD <= kueQRoq) {
                        if (d[i][j] < d[k][b1rhu2ETD])
                            YpiLn6Da = YpiLn6Da +1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        b1rhu2ETD = b1rhu2ETD + 1;
                    };
                }
                if (YpiLn6Da == t) {
                    cout << "(" << orz1D2cIH[i].HRrqfNmTb << "," << orz1D2cIH[i].VNMfJjUKrtiB << "," << orz1D2cIH[i].z << ")" << "-" << "(" << orz1D2cIH[j].HRrqfNmTb << "," << orz1D2cIH[j].VNMfJjUKrtiB << "," << orz1D2cIH[j].z << ")" << "=" << fixed << setprecision (2) << d[i][j] << endl;
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
                    };
                };
            };
        };
    }
    return 0;
}

