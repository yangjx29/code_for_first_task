char fkTHEUp3Cef [LmjMbHBEGxq];
char szline2 [LmjMbHBEGxq];
int CZbBF2 [LmjMbHBEGxq];
int Vs2zNeBuV9pc [LmjMbHBEGxq];

int main () {
    int len1 = strlen (fkTHEUp3Cef);
    int XMrp1q = strlen (szline2);
    int kxgp13B;
    cin.getline (fkTHEUp3Cef, LmjMbHBEGxq);
    cin.getline (szline2, LmjMbHBEGxq);
    {
        int VGSF5awT = len1 - 1, K9UTiNGI2B = (524 - 524);
        while (0 <= VGSF5awT) {
            CZbBF2[K9UTiNGI2B++] = fkTHEUp3Cef[VGSF5awT] - '0';
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
            VGSF5awT--;
        };
    }
    for (int VGSF5awT = XMrp1q -1, K9UTiNGI2B = 0;
    VGSF5awT >= 0; VGSF5awT--)
        Vs2zNeBuV9pc[K9UTiNGI2B++] = szline2[VGSF5awT] - '0';
    {
        int VGSF5awT = 0;
        while (VGSF5awT < LmjMbHBEGxq) {
            CZbBF2[VGSF5awT] = CZbBF2[VGSF5awT] + Vs2zNeBuV9pc[VGSF5awT];
            if (CZbBF2[VGSF5awT] >= 10) {
                CZbBF2[VGSF5awT] = CZbBF2[VGSF5awT] - 10;
                CZbBF2[VGSF5awT +1]++;
            }
            if (CZbBF2[VGSF5awT])
                kxgp13B = VGSF5awT;
            VGSF5awT = VGSF5awT +1;
        };
    }
    {
        int VGSF5awT = kxgp13B;
        while (VGSF5awT >= 0) {
            cout << CZbBF2[VGSF5awT];
            VGSF5awT--;
        };
    }
    cout << endl;
    return 0;
}

