int runnian (int AHEh5STX);

int main () {
    int JE2LhyN;
    int k;
    double  AHEh5STX [JE2LhyN] [3];
    double  n7E4vtphzV8f [k] [3];
    int JBey9V2ojFR;
    JBey9V2ojFR = (351 - 351);
    k = JE2LhyN *(JE2LhyN -(892 - 891)) / (312 - 310);
    cin >> JE2LhyN;
    {
        int Yc9AyjLT;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Yc9AyjLT = (676 - 676);
        while (Yc9AyjLT < JE2LhyN) {
            cin >> AHEh5STX[Yc9AyjLT][(387 - 387)] >> AHEh5STX[Yc9AyjLT][(893 - 892)] >> AHEh5STX[Yc9AyjLT][(371 - 369)];
            Yc9AyjLT++;
        };
    }
    {
        int Yc9AyjLT;
        Yc9AyjLT = (115 - 115);
        while (Yc9AyjLT < JE2LhyN -(599 - 598)) {
            for (int HESCrud = Yc9AyjLT +(206 - 205);
            HESCrud < JE2LhyN; HESCrud++) {
                n7E4vtphzV8f[JBey9V2ojFR][1] = Yc9AyjLT;
                n7E4vtphzV8f[JBey9V2ojFR][(239 - 237)] = HESCrud;
                n7E4vtphzV8f[JBey9V2ojFR][0] = sqrt (pow ((AHEh5STX[Yc9AyjLT][0] - AHEh5STX[HESCrud][0]), (302 - 300)) + pow ((AHEh5STX[Yc9AyjLT][1] - AHEh5STX[HESCrud][1]), (620 - 618)) + pow ((AHEh5STX[Yc9AyjLT][(590 - 588)] - AHEh5STX[HESCrud][(812 - 810)]), 2));
                JBey9V2ojFR++;
            }
            Yc9AyjLT++;
        };
    }
    {
        int Yc9AyjLT;
        Yc9AyjLT = 0;
        while (Yc9AyjLT < k - 1) {
            Yc9AyjLT++;
            {
                int HESCrud = 0;
                while (HESCrud < k - 1) {
                    if (n7E4vtphzV8f[HESCrud][0] < n7E4vtphzV8f[HESCrud +1][0]) {
                        double  NVFM8Y3S = n7E4vtphzV8f[HESCrud][0];
                        int jin1OQMVlCy2 = (int) n7E4vtphzV8f[HESCrud][1];
                        int e = (int) n7E4vtphzV8f[HESCrud][2];
                        n7E4vtphzV8f[HESCrud][0] = n7E4vtphzV8f[HESCrud +1][0];
                        n7E4vtphzV8f[HESCrud +1][0] = NVFM8Y3S;
                        n7E4vtphzV8f[HESCrud][1] = n7E4vtphzV8f[HESCrud +1][1];
                        n7E4vtphzV8f[HESCrud +1][1] = jin1OQMVlCy2;
                        n7E4vtphzV8f[HESCrud][2] = n7E4vtphzV8f[HESCrud +1][2];
                        n7E4vtphzV8f[HESCrud +1][2] = e;
                    }
                    HESCrud++;
                };
            };
        };
    }
    {
        int Yc9AyjLT = 0;
        while (Yc9AyjLT < k) {
            cout << "(" << fixed << setprecision (0) << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][1]][0] << "," << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][1]][1] << "," << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][1]][2] << ")-(" << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][2]][0] << "," << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][2]][1] << "," << AHEh5STX[(int) n7E4vtphzV8f[Yc9AyjLT][2]][2] << ")=" << fixed << setprecision (2) << n7E4vtphzV8f[Yc9AyjLT][0];
            if (Yc9AyjLT != k - 1)
                cout << endl;
            Yc9AyjLT++;
        };
    }
    return 0;
}

