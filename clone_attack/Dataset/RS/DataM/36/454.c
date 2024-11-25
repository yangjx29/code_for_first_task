int main () {
    char NWaCFub70mN3 [100], pCqQudJtIrpv [100];
    int e4Dh8d2;
    int q0qGBiMsUXrW;
    int bCauzkB;
    int x [100];
    int y [100];
    e4Dh8d2 = 1;
    cin >> NWaCFub70mN3 >> pCqQudJtIrpv;
    memset (x, 0, 100 * sizeof (int));
    for (q0qGBiMsUXrW = 0; strlen (NWaCFub70mN3) > q0qGBiMsUXrW; q0qGBiMsUXrW = q0qGBiMsUXrW + 1) {
        x[NWaCFub70mN3[q0qGBiMsUXrW] - 32]++;
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
    memset (y, 0, 100 * sizeof (int));
    for (q0qGBiMsUXrW = 0; strlen (pCqQudJtIrpv) > q0qGBiMsUXrW; q0qGBiMsUXrW++) {
        y[pCqQudJtIrpv[q0qGBiMsUXrW] - 32]++;
    }
    for (q0qGBiMsUXrW = 0; q0qGBiMsUXrW < 100; q0qGBiMsUXrW++) {
        if (x[q0qGBiMsUXrW] != y[q0qGBiMsUXrW])
            e4Dh8d2 = 0;
    }
    if (e4Dh8d2 == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

