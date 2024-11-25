int main () {
    float d8eTfGAi, VIYxrREL [50000], i7xrhnB2Le5z [50000], tBwP9Qd = 0, djZNR3x1, max;
    int SZAwiUj;
    cin >> SZAwiUj;
    cin >> VIYxrREL[0] >> i7xrhnB2Le5z[0];
    max = i7xrhnB2Le5z[0];
    djZNR3x1 = VIYxrREL[0];
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
    {
        int gmZCrXsbvn = (955 - 954);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gmZCrXsbvn < SZAwiUj) {
            cin >> VIYxrREL[gmZCrXsbvn] >> i7xrhnB2Le5z[gmZCrXsbvn];
            djZNR3x1 = VIYxrREL[gmZCrXsbvn] > djZNR3x1 ? djZNR3x1 : VIYxrREL[gmZCrXsbvn];
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
            max = max < i7xrhnB2Le5z[gmZCrXsbvn] ? i7xrhnB2Le5z[gmZCrXsbvn] : max;
            gmZCrXsbvn++;
        };
    }
    d8eTfGAi = djZNR3x1;
    for (float Ulpk1qFo8jO = djZNR3x1;
    max >= Ulpk1qFo8jO; Ulpk1qFo8jO = Ulpk1qFo8jO +0.5) {
        for (int gmZCrXsbvn = 0;
        gmZCrXsbvn < SZAwiUj; gmZCrXsbvn++) {
            if (VIYxrREL[gmZCrXsbvn] <= Ulpk1qFo8jO &&Ulpk1qFo8jO <= i7xrhnB2Le5z[gmZCrXsbvn])
                tBwP9Qd++;
        }
        if (tBwP9Qd == 0)
            break;
        d8eTfGAi = d8eTfGAi + 0.5;
        tBwP9Qd = 0;
    }
    if (d8eTfGAi == max + 0.5)
        cout << djZNR3x1 << " " << max << endl;
    else
        cout << "no" << endl;
    return 0;
}

