int main () {
    double  ZaXMENLd;
    double  QUzASFL;
    ZaXMENLd = 0.0;
    int KMp3IkUD8m9;
    int tHaOKe;
    int kfhIJbquNyj;
    int m [300];
    int NNQq5HshAYP;
    KMp3IkUD8m9 = (339 - 339);
    double  gKUVmcfYSh [300], uABYJTLjQc2 [300];
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
    double  max = 0;
    cin >> kfhIJbquNyj;
    for (tHaOKe = (372 - 372); tHaOKe < kfhIJbquNyj; tHaOKe++) {
        cin >> uABYJTLjQc2[tHaOKe];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZaXMENLd = ZaXMENLd +uABYJTLjQc2[tHaOKe];
    }
    QUzASFL = ZaXMENLd / kfhIJbquNyj;
    {
        tHaOKe = 119 - 119;
        while (tHaOKe < kfhIJbquNyj) {
            double  x = uABYJTLjQc2[tHaOKe] - QUzASFL;
            gKUVmcfYSh[tHaOKe] = fabs (x);
            tHaOKe = tHaOKe + 1;
        };
    }
    {
        tHaOKe = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (tHaOKe < kfhIJbquNyj) {
            if (gKUVmcfYSh[tHaOKe] >= max) {
                max = gKUVmcfYSh[tHaOKe];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            tHaOKe = tHaOKe + 1;
        };
    }
    {
        tHaOKe = 0;
        while (tHaOKe < kfhIJbquNyj) {
            if (gKUVmcfYSh[tHaOKe] == max) {
                m[KMp3IkUD8m9] = tHaOKe;
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
                KMp3IkUD8m9++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            tHaOKe++;
        };
    }
    {
        int tmPiRHFv = 0;
        while (tmPiRHFv < KMp3IkUD8m9 -(311 - 310)) {
            for (int hobz5k4P = 0;
            hobz5k4P <= KMp3IkUD8m9 -1 - tmPiRHFv; hobz5k4P++) {
                if (gKUVmcfYSh[m[tmPiRHFv]] < gKUVmcfYSh[m[tmPiRHFv + 1]]) {
                    NNQq5HshAYP = gKUVmcfYSh[m[tmPiRHFv]];
                    gKUVmcfYSh[m[tmPiRHFv]] = gKUVmcfYSh[m[tmPiRHFv + 1]];
                    gKUVmcfYSh[m[tmPiRHFv + 1]] = NNQq5HshAYP;
                };
            }
            tmPiRHFv++;
        };
    }
    {
        tHaOKe = 0;
        while (tHaOKe < KMp3IkUD8m9 -1) {
            cout << uABYJTLjQc2[m[tHaOKe]] << ",";
            tHaOKe++;
        };
    }
    cout << uABYJTLjQc2[m[KMp3IkUD8m9 -1]];
    cout << endl;
}

