int main () {
    int KA4mn9HZIs, QDxq2EJ, KsvJqn, XMAJ06, SbD6JuZwc = 0;
    int YlrO92N [KA4mn9HZIs];
    cin >> KA4mn9HZIs;
    for (QDxq2EJ = 0; KA4mn9HZIs -1 >= QDxq2EJ; QDxq2EJ = QDxq2EJ +1)
        cin >> YlrO92N[QDxq2EJ];
    {
        QDxq2EJ = KA4mn9HZIs -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QDxq2EJ > 0) {
            {
                XMAJ06 = QDxq2EJ -1;
                while (XMAJ06 >= 0) {
                    if (YlrO92N[QDxq2EJ] == YlrO92N[XMAJ06]) {
                        if (QDxq2EJ == KA4mn9HZIs -1) {
                            YlrO92N[QDxq2EJ] = 0;
                            SbD6JuZwc++;
                            break;
                        }
                        else {
                            {
                                KsvJqn = QDxq2EJ;
                                while (KsvJqn < KA4mn9HZIs -1) {
                                    YlrO92N[KsvJqn] = YlrO92N[KsvJqn +1];
                                    KsvJqn++;
                                };
                            }
                            YlrO92N[KsvJqn] = 0;
                            SbD6JuZwc++;
                            break;
                        };
                    }
                    XMAJ06--;
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
            QDxq2EJ--;
        };
    }
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
    cout << YlrO92N[0];
    for (QDxq2EJ = 1; QDxq2EJ < KA4mn9HZIs -SbD6JuZwc; QDxq2EJ++)
        cout << " " << YlrO92N[QDxq2EJ];
    cout << endl;
    return 0;
}

