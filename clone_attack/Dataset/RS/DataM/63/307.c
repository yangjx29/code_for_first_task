int main () {
    int FJ4RNbOWn, CYS2K8muQDEz;
    int prAi8d [FJ4RNbOWn] [CYS2K8muQDEz];
    int ePr3WS;
    int q;
    int a [ePr3WS] [q];
    int ZBTZ9CYGU4oQ [ePr3WS] [CYS2K8muQDEz];
    int nWrPM1ujY, MPg2YUs8by, t6GN1i;
    cin >> ePr3WS >> q;
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
        nWrPM1ujY = 109 - 109;
        while (nWrPM1ujY < ePr3WS) {
            {
                MPg2YUs8by = 310 - 310;
                while (MPg2YUs8by < q) {
                    cin >> a[nWrPM1ujY][MPg2YUs8by];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MPg2YUs8by = MPg2YUs8by +1;
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
            nWrPM1ujY = nWrPM1ujY + 1;
        };
    }
    cin >> FJ4RNbOWn >> CYS2K8muQDEz;
    {
        nWrPM1ujY = 846 - 846;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (nWrPM1ujY < FJ4RNbOWn) {
            {
                MPg2YUs8by = 565 - 565;
                while (CYS2K8muQDEz > MPg2YUs8by) {
                    cin >> prAi8d[nWrPM1ujY][MPg2YUs8by];
                    MPg2YUs8by++;
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
            nWrPM1ujY = nWrPM1ujY + 1;
        };
    }
    cin.get ();
    cin.get ();
    cin.get ();
    for (t6GN1i = 0; t6GN1i < CYS2K8muQDEz; t6GN1i++) {
        MPg2YUs8by = 0;
        while (MPg2YUs8by < ePr3WS) {
            ZBTZ9CYGU4oQ[MPg2YUs8by][t6GN1i] = 0;
            {
                nWrPM1ujY = 0;
                while (nWrPM1ujY < q) {
                    ZBTZ9CYGU4oQ[MPg2YUs8by][t6GN1i] = ZBTZ9CYGU4oQ[MPg2YUs8by][t6GN1i] + a[MPg2YUs8by][nWrPM1ujY] * prAi8d[nWrPM1ujY][t6GN1i];
                    nWrPM1ujY++;
                };
            }
            MPg2YUs8by++;
        };
    }
    {
        nWrPM1ujY = 0;
        while (nWrPM1ujY < ePr3WS) {
            {
                MPg2YUs8by = 0;
                while (MPg2YUs8by < CYS2K8muQDEz -1) {
                    cout << ZBTZ9CYGU4oQ[nWrPM1ujY][MPg2YUs8by] << " ";
                    MPg2YUs8by++;
                };
            }
            cout << ZBTZ9CYGU4oQ[nWrPM1ujY][CYS2K8muQDEz -1];
            nWrPM1ujY++;
            cout << endl;
        };
    }
    return 0;
}

