int main () {
    int y5FkJsm1, wHwORfPITA9d, KYyvcL6wi, BEaQVuTszNq;
    int u6DNRx [(824 - 794)] = {(820 - 820)};
    int f [30] = {(809 - 809)};
    int VrTYiyg (int, int);
    cin >> y5FkJsm1;
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
    for (KYyvcL6wi = (720 - 719); y5FkJsm1 >= KYyvcL6wi; KYyvcL6wi = KYyvcL6wi +1)
        cin >> u6DNRx[KYyvcL6wi];
    for (KYyvcL6wi = (548 - 547); y5FkJsm1 >= KYyvcL6wi; KYyvcL6wi++)
        f[KYyvcL6wi] = (853 - 852);
    {
        KYyvcL6wi = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KYyvcL6wi <= y5FkJsm1) {
            for (BEaQVuTszNq = 1; KYyvcL6wi > BEaQVuTszNq; BEaQVuTszNq++)
                if (u6DNRx[BEaQVuTszNq] >= u6DNRx[KYyvcL6wi])
                    f[KYyvcL6wi] = VrTYiyg (f[BEaQVuTszNq] + 1, f[KYyvcL6wi]);
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
            KYyvcL6wi++;
        };
    }
    wHwORfPITA9d = f[1];
    {
        KYyvcL6wi = 2;
        while (KYyvcL6wi <= y5FkJsm1) {
            wHwORfPITA9d = VrTYiyg (wHwORfPITA9d, f[KYyvcL6wi]);
            KYyvcL6wi++;
        };
    }
    cout << wHwORfPITA9d << endl;
    return 0;
}

int VrTYiyg (int u6DNRx, int b) {
    if (u6DNRx > b)
        b = u6DNRx;
    return b;
}

