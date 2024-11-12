char rAg6mljb2 [(756 - 655)];

void  IKsVRIQCPW5 (char CbBRCKAQ7feF []) {
    int qqAvCfKrtH;
    int L9h7cLwyIYk;
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
    char YTAU8FYO;
    L9h7cLwyIYk = strlen (CbBRCKAQ7feF);
    {
        qqAvCfKrtH = 932 - 932;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qqAvCfKrtH < L9h7cLwyIYk) {
            rAg6mljb2[qqAvCfKrtH] = CbBRCKAQ7feF[L9h7cLwyIYk -qqAvCfKrtH - (882 - 881)];
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
            qqAvCfKrtH = qqAvCfKrtH + 1;
        };
    };
}

int main () {
    int qqAvCfKrtH;
    int LMDCwN4q3bcZ;
    int DM8xOa6TD;
    int TA1ZS5s;
    int js7T2Qp6d;
    int mn8BbwOt9JuU;
    int G5EyTiCQql;
    int VUgJv1 [101];
    char MFvLCgOc [(607 - 506)] [101];
    char JsquaxMJWFm [101] [101];
    char pr6mWaYI;
    cin >> js7T2Qp6d;
    {
        qqAvCfKrtH = 656 - 655;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (qqAvCfKrtH <= js7T2Qp6d) {
            cin >> MFvLCgOc[qqAvCfKrtH] >> JsquaxMJWFm[qqAvCfKrtH];
            qqAvCfKrtH = qqAvCfKrtH + 1;
        };
    }
    {
        qqAvCfKrtH = 1;
        while (qqAvCfKrtH <= js7T2Qp6d) {
            IKsVRIQCPW5 (MFvLCgOc [qqAvCfKrtH]);
            IKsVRIQCPW5 (JsquaxMJWFm [qqAvCfKrtH]);
            mn8BbwOt9JuU = strlen (MFvLCgOc[qqAvCfKrtH]);
            G5EyTiCQql = strlen (JsquaxMJWFm[qqAvCfKrtH]);
            for (LMDCwN4q3bcZ = (517 - 517); LMDCwN4q3bcZ < mn8BbwOt9JuU; LMDCwN4q3bcZ = LMDCwN4q3bcZ +1)
                MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ] = rAg6mljb2[LMDCwN4q3bcZ];
            {
                LMDCwN4q3bcZ = 0;
                while (LMDCwN4q3bcZ < G5EyTiCQql) {
                    JsquaxMJWFm[qqAvCfKrtH][LMDCwN4q3bcZ] = rAg6mljb2[LMDCwN4q3bcZ];
                    LMDCwN4q3bcZ = LMDCwN4q3bcZ +1;
                };
            }
            for (LMDCwN4q3bcZ = G5EyTiCQql; LMDCwN4q3bcZ < mn8BbwOt9JuU; LMDCwN4q3bcZ++)
                JsquaxMJWFm[qqAvCfKrtH][LMDCwN4q3bcZ] = '0';
            {
                LMDCwN4q3bcZ = 0;
                while (LMDCwN4q3bcZ < mn8BbwOt9JuU) {
                    if (MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ] < JsquaxMJWFm[qqAvCfKrtH][LMDCwN4q3bcZ]) {
                        MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ] = MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ] + 10;
                        MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ +1] -= 1;
                    }
                    VUgJv1[LMDCwN4q3bcZ] = MFvLCgOc[qqAvCfKrtH][LMDCwN4q3bcZ] - JsquaxMJWFm[qqAvCfKrtH][LMDCwN4q3bcZ];
                    LMDCwN4q3bcZ = LMDCwN4q3bcZ +1;
                };
            }
            {
                DM8xOa6TD = mn8BbwOt9JuU - 1;
                while (DM8xOa6TD >= 0) {
                    if (VUgJv1[DM8xOa6TD] != 0)
                        break;
                    DM8xOa6TD = DM8xOa6TD -1;
                };
            }
            qqAvCfKrtH = qqAvCfKrtH + 1;
            if (DM8xOa6TD == -1)
                cout << 0;
            else {
                TA1ZS5s = DM8xOa6TD;
                while (TA1ZS5s >= 0) {
                    cout << VUgJv1[TA1ZS5s];
                    TA1ZS5s = TA1ZS5s -1;
                };
            }
            cout << endl;
        };
    }
    return (0);
}

