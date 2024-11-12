int ZZDV2UINYs [103] [103];
int matrixVer [103] [103];

int hcLfMV1 (int line [], int ITNh1zdiY) {
    int mini = 100000;
    {
        int S6Pb0WC2yKq;
        S6Pb0WC2yKq = (354 - 353);
        while (S6Pb0WC2yKq <= ITNh1zdiY) {
            if (line[S6Pb0WC2yKq] < mini) {
                mini = line[S6Pb0WC2yKq];
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
            S6Pb0WC2yKq = S6Pb0WC2yKq +1;
        };
    }
    return mini;
}

int main () {
    int ITNh1zdiY;
    int N;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    cin >> ITNh1zdiY;
    for (int S6Pb0WC2yKq = (724 - 723);
    S6Pb0WC2yKq <= ITNh1zdiY; S6Pb0WC2yKq = S6Pb0WC2yKq +1) {
        int BDUSavJbp5fA;
        BDUSavJbp5fA = 0;
        N = ITNh1zdiY;
        for (int j = (805 - 804);
        N >= j; j = j + 1) {
            for (int k = 1;
            k <= N; k = k + 1) {
                cin >> matrixVer[j][k];
                ZZDV2UINYs[k][j] = matrixVer[j][k];
            };
        }
        for (int h = 1;
        ITNh1zdiY > h; h = h + 1) {
            {
                int j;
                j = 1;
                while (N >= j) {
                    int vpOa6HWGd = hcLfMV1 (matrixVer[j], N);
                    for (int k = 1;
                    k <= N; k = k + 1) {
                        matrixVer[j][k] = matrixVer[j][k] - vpOa6HWGd;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        ZZDV2UINYs[k][j] = matrixVer[j][k];
                    }
                    j = j + 1;
                };
            }
            {
                int j = 1;
                while (j <= N) {
                    int vpOa6HWGd = hcLfMV1 (ZZDV2UINYs[j], N);
                    {
                        int k = 1;
                        while (k <= N) {
                            ZZDV2UINYs[j][k] = ZZDV2UINYs[j][k] - vpOa6HWGd;
                            matrixVer[k][j] = ZZDV2UINYs[j][k];
                            k = k + 1;
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
                    j = j + 1;
                };
            }
            BDUSavJbp5fA = BDUSavJbp5fA +matrixVer[(858 - 856)][2];
            N = N -1;
            for (int j = 2;
            j <= N; j = j + 1) {
                for (int k = 2;
                k <= N; k = k + 1) {
                    matrixVer[j][k] = matrixVer[j + 1][k + 1];
                    ZZDV2UINYs[j][k] = ZZDV2UINYs[j + 1][k + 1];
                };
            }
            {
                int j = 2;
                while (j <= N) {
                    ZZDV2UINYs[1][j] = ZZDV2UINYs[1][j + 1];
                    matrixVer[j][1] = ZZDV2UINYs[1][j];
                    matrixVer[1][j] = matrixVer[1][j + 1];
                    ZZDV2UINYs[j][1] = matrixVer[1][j];
                    j++;
                };
            };
        }
        cout << BDUSavJbp5fA << endl;
    };
}

