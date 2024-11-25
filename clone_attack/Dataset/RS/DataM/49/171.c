int main () {
    int TAK1bTxX0n, EfU80q6TdxK, j, rJBOmKT7;
    char GjrZtxygADlO [500];
    cin >> GjrZtxygADlO;
    TAK1bTxX0n = strlen (GjrZtxygADlO);
    {
        EfU80q6TdxK = 2;
        while (EfU80q6TdxK <= TAK1bTxX0n) {
            for (j = 0; TAK1bTxX0n -EfU80q6TdxK >= j; j++) {
                for (rJBOmKT7 = 0; EfU80q6TdxK / 2 > rJBOmKT7; rJBOmKT7++) {
                    if (GjrZtxygADlO[j + rJBOmKT7] != GjrZtxygADlO[j + EfU80q6TdxK -1 - rJBOmKT7]) {
                        rJBOmKT7 = -1;
                        break;
                    };
                }
                if (rJBOmKT7 != -1) {
                    {
                        rJBOmKT7 = j;
                        while (rJBOmKT7 < j + EfU80q6TdxK) {
                            cout << GjrZtxygADlO[rJBOmKT7];
                            rJBOmKT7++;
                        };
                    }
                    cout << endl;
                };
            }
            EfU80q6TdxK++;
        };
    }
    return 0;
}

