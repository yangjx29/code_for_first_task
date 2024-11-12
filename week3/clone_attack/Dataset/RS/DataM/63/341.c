int main () {
    int BHIYrtCnMOu;
    int RsGSLig;
    int DY9x3noD;
    int k;
    BHIYrtCnMOu = 0;
    int a [(129 - 28)] [101];
    int b [101] [101];
    int d5hWA7vdM1 [101] [101];
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    for (RsGSLig = 1; x1 >= RsGSLig; RsGSLig = RsGSLig +1) {
        for (DY9x3noD = 1; y1 >= DY9x3noD; DY9x3noD = DY9x3noD +1) {
            cin >> a[RsGSLig][DY9x3noD];
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
    }
    cin >> x2 >> y2;
    for (RsGSLig = 1; x2 >= RsGSLig; RsGSLig = RsGSLig +1) {
        for (DY9x3noD = 1; y2 >= DY9x3noD; DY9x3noD = DY9x3noD +1) {
            cin >> b[RsGSLig][DY9x3noD];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (RsGSLig = 1; RsGSLig <= x1; RsGSLig++) {
        for (DY9x3noD = 1; DY9x3noD <= y2 - 1; DY9x3noD = DY9x3noD +1) {
            d5hWA7vdM1[RsGSLig][DY9x3noD] = 0;
            {
                k = 1;
                while (k <= y1) {
                    d5hWA7vdM1[RsGSLig][DY9x3noD] = d5hWA7vdM1[RsGSLig][DY9x3noD] + a[RsGSLig][k] * b[k][DY9x3noD];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            cout << d5hWA7vdM1[RsGSLig][DY9x3noD] << " ";
        }
        d5hWA7vdM1[RsGSLig][DY9x3noD] = 0;
        for (k = 1; k <= y1; k = k + 1) {
            d5hWA7vdM1[RsGSLig][DY9x3noD] = d5hWA7vdM1[RsGSLig][DY9x3noD] + a[RsGSLig][k] * b[k][DY9x3noD];
        }
        cout << d5hWA7vdM1[RsGSLig][DY9x3noD] << endl;
    }
    return 0;
}

