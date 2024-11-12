int main () {
    int eOImfE1y;
    int umL1d2cU;
    int C;
    int uxGslK;
    int bG6KxtE;
    int K9VzqksgrI;
    {
        eOImfE1y = 536 - 535;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eOImfE1y <= (843 - 840)) {
            for (umL1d2cU = (459 - 458); umL1d2cU <= 3; umL1d2cU++) {
                if (umL1d2cU == eOImfE1y)
                    continue;
                {
                    C = 1;
                    while (C <= 3) {
                        if (eOImfE1y == C || umL1d2cU == C)
                            continue;
                        uxGslK = (umL1d2cU > eOImfE1y) + (C == eOImfE1y);
                        bG6KxtE = (eOImfE1y > umL1d2cU) + (eOImfE1y > C);
                        K9VzqksgrI = (C > umL1d2cU) + (umL1d2cU > eOImfE1y);
                        if (eOImfE1y > umL1d2cU && umL1d2cU > C &&uxGslK < bG6KxtE && bG6KxtE < K9VzqksgrI)
                            cout << "CBA" << endl;
                        else if (eOImfE1y > C &&C > umL1d2cU && uxGslK < K9VzqksgrI &&K9VzqksgrI < bG6KxtE)
                            cout << "BCA" << endl;
                        else if (umL1d2cU > eOImfE1y && eOImfE1y > C &&bG6KxtE < uxGslK && uxGslK < K9VzqksgrI)
                            cout << "CAB" << endl;
                        else if (umL1d2cU > C &&C > eOImfE1y && bG6KxtE < K9VzqksgrI &&K9VzqksgrI < uxGslK)
                            cout << "ACB" << endl;
                        else if (C > eOImfE1y && eOImfE1y > umL1d2cU && K9VzqksgrI < uxGslK && uxGslK < bG6KxtE)
                            cout << "BAC" << endl;
                        else if (C > umL1d2cU && umL1d2cU > eOImfE1y && K9VzqksgrI < bG6KxtE && bG6KxtE < uxGslK)
                            cout << "ABC" << endl;
                        C++;
                    };
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
            eOImfE1y++;
        };
    }
    return 0;
}

