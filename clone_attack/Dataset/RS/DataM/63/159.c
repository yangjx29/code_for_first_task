int main () {
    int LSiqxtRw;
    int y1;
    int LpoweA;
    int y2;
    int WrbgHqvw;
    int ejiT5AM64;
    int DIlzph4aJD;
    int l;
    int q8Rtbljru9yK;
    int uqHc2AT;
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
    int lCR6qn;
    int a [(783 - 683)] [(858 - 758)], b [100] [100], Tbrp1j58uan [100] [100];
    cin >> LSiqxtRw >> y1;
    {
        WrbgHqvw = 863 - 863;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WrbgHqvw < LSiqxtRw) {
            for (ejiT5AM64 = (902 - 902); ejiT5AM64 < y1; ejiT5AM64 = ejiT5AM64 + 1)
                cin >> a[WrbgHqvw][ejiT5AM64];
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
            WrbgHqvw++;
        };
    }
    cin >> LpoweA >> y2;
    for (DIlzph4aJD = (202 - 202); DIlzph4aJD < LpoweA; DIlzph4aJD++)
        for (l = 0; y2 > l; l++)
            cin >> b[DIlzph4aJD][l];
    for (q8Rtbljru9yK = 0; q8Rtbljru9yK < LSiqxtRw; q8Rtbljru9yK++) {
        for (uqHc2AT = 0; uqHc2AT < y2; uqHc2AT++) {
            Tbrp1j58uan[q8Rtbljru9yK][uqHc2AT] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (lCR6qn = 0; lCR6qn < y1; lCR6qn = lCR6qn + 1) {
                Tbrp1j58uan[q8Rtbljru9yK][uqHc2AT] = Tbrp1j58uan[q8Rtbljru9yK][uqHc2AT] + a[q8Rtbljru9yK][lCR6qn] * b[lCR6qn][uqHc2AT];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    for (WrbgHqvw = 0; WrbgHqvw < LSiqxtRw; WrbgHqvw++) {
        cout << Tbrp1j58uan[WrbgHqvw][0];
        for (ejiT5AM64 = 1; ejiT5AM64 < y2; ejiT5AM64++)
            cout << " " << Tbrp1j58uan[WrbgHqvw][ejiT5AM64];
        cout << endl;
    }
    return 0;
}

