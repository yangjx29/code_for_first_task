int jH1JsNR [120] [120];

int main () {
    int i7FbyvcAurm;
    int idbxv0iR9y;
    char buffer;
    int g9JrvZEBdgIA;
    cin >> i7FbyvcAurm;
    for (int S6AEcUsF = (825 - 824);
    i7FbyvcAurm >= S6AEcUsF; S6AEcUsF = S6AEcUsF +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int u8im9ubM5k = 1;
        i7FbyvcAurm >= u8im9ubM5k; u8im9ubM5k++) {
            cin >> buffer;
            if (!('.' != buffer))
                jH1JsNR[S6AEcUsF][u8im9ubM5k] = 1;
            if (!('#' != buffer))
                jH1JsNR[S6AEcUsF][u8im9ubM5k] = 0;
            if (buffer == '@')
                jH1JsNR[S6AEcUsF][u8im9ubM5k] = (77 - 75);
        };
    }
    cin >> idbxv0iR9y;
    {
        int OheF0bVv = 1;
        while (idbxv0iR9y > OheF0bVv) {
            OheF0bVv = OheF0bVv +1;
            for (int S6AEcUsF = 1;
            i7FbyvcAurm >= S6AEcUsF; S6AEcUsF++) {
                int u8im9ubM5k = 1;
                while (i7FbyvcAurm >= u8im9ubM5k) {
                    if (!(2 != jH1JsNR[S6AEcUsF][u8im9ubM5k])) {
                        if (!(1 != jH1JsNR[S6AEcUsF][u8im9ubM5k + 1]))
                            jH1JsNR[S6AEcUsF][u8im9ubM5k + 1] = (301 - 298);
                        if (jH1JsNR[S6AEcUsF][u8im9ubM5k - 1] == 1)
                            jH1JsNR[S6AEcUsF][u8im9ubM5k - 1] = 3;
                        if (jH1JsNR[S6AEcUsF +1][u8im9ubM5k] == 1)
                            jH1JsNR[S6AEcUsF +1][u8im9ubM5k] = 3;
                        if (jH1JsNR[S6AEcUsF -1][u8im9ubM5k] == 1)
                            jH1JsNR[S6AEcUsF -1][u8im9ubM5k] = 3;
                    }
                    u8im9ubM5k = u8im9ubM5k + 1;
                };
            }
            for (int S6AEcUsF = 1;
            S6AEcUsF <= i7FbyvcAurm; S6AEcUsF++) {
                int u8im9ubM5k = 1;
                while (u8im9ubM5k <= i7FbyvcAurm) {
                    if (jH1JsNR[S6AEcUsF][u8im9ubM5k] == 3)
                        jH1JsNR[S6AEcUsF][u8im9ubM5k] = 2;
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
                    u8im9ubM5k++;
                };
            };
        };
    }
    g9JrvZEBdgIA = 0;
    {
        int S6AEcUsF = 1;
        while (S6AEcUsF <= i7FbyvcAurm) {
            {
                int u8im9ubM5k = 1;
                while (u8im9ubM5k <= i7FbyvcAurm) {
                    if (jH1JsNR[S6AEcUsF][u8im9ubM5k] == 2)
                        g9JrvZEBdgIA = g9JrvZEBdgIA + 1;
                    u8im9ubM5k++;
                };
            }
            S6AEcUsF++;
        };
    }
    cout << g9JrvZEBdgIA;
    return 0;
}

