int main () {
    double  JcOg3b1NWQiZ [10], a7Xrop = 0;
    int WaLovc;
    int UO0dftAbBhu3;
    int cuGPph8WeJ [2] [(962 - 952)];
    int hBLs3XdN;
    int mCUaQ5F3m8q;
    WaLovc = 0;
    scanf ("%d", &UO0dftAbBhu3);
    {
        hBLs3XdN = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hBLs3XdN < 2) {
            {
                mCUaQ5F3m8q = 0;
                while (mCUaQ5F3m8q < UO0dftAbBhu3) {
                    scanf ("%d", &cuGPph8WeJ[hBLs3XdN][mCUaQ5F3m8q]);
                    mCUaQ5F3m8q = mCUaQ5F3m8q + 1;
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
            hBLs3XdN = hBLs3XdN + 1;
        };
    }
    {
        hBLs3XdN = 0;
        while (hBLs3XdN < UO0dftAbBhu3) {
            if (cuGPph8WeJ[1][hBLs3XdN] >= 90 && cuGPph8WeJ[1][hBLs3XdN] <= 100)
                JcOg3b1NWQiZ[hBLs3XdN] = 4.0;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 85 && cuGPph8WeJ[1][hBLs3XdN] <= 89)
                JcOg3b1NWQiZ[hBLs3XdN] = 3.7;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 82 && cuGPph8WeJ[1][hBLs3XdN] <= 84)
                JcOg3b1NWQiZ[hBLs3XdN] = 3.3;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 78 && cuGPph8WeJ[1][hBLs3XdN] <= 81)
                JcOg3b1NWQiZ[hBLs3XdN] = 3.0;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 75 && cuGPph8WeJ[1][hBLs3XdN] <= 77)
                JcOg3b1NWQiZ[hBLs3XdN] = 2.7;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 72 && cuGPph8WeJ[1][hBLs3XdN] <= 74)
                JcOg3b1NWQiZ[hBLs3XdN] = 2.3;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 68 && cuGPph8WeJ[1][hBLs3XdN] <= 71)
                JcOg3b1NWQiZ[hBLs3XdN] = 2.0;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 64 && cuGPph8WeJ[1][hBLs3XdN] <= 67)
                JcOg3b1NWQiZ[hBLs3XdN] = 1.5;
            if (cuGPph8WeJ[1][hBLs3XdN] >= 60 && cuGPph8WeJ[1][hBLs3XdN] <= 63)
                JcOg3b1NWQiZ[hBLs3XdN] = 1.0;
            if (cuGPph8WeJ[1][hBLs3XdN] < 60)
                JcOg3b1NWQiZ[hBLs3XdN] = 0;
            hBLs3XdN = hBLs3XdN + 1;
        };
    }
    {
        hBLs3XdN = 0;
        while (hBLs3XdN < UO0dftAbBhu3) {
            WaLovc = WaLovc +cuGPph8WeJ[0][hBLs3XdN];
            a7Xrop = a7Xrop + JcOg3b1NWQiZ[hBLs3XdN] * cuGPph8WeJ[0][hBLs3XdN];
            hBLs3XdN++;
        };
    }
    printf ("%.2lf", a7Xrop / WaLovc);
    return 0;
}

