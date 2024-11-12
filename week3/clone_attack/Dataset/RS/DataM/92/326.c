int vP063dNwXH9 (const  void  *afounTFYD, const  void  *iJDjstuIA36) {
    int *Xp4uNd = (int *) iJDjstuIA36;
    int *ZWAYN2mXLta = (int *) afounTFYD;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    return (*Xp4uNd) - (*ZWAYN2mXLta);
}

int main () {
    int sytbziN;
    int DKIkrc1Pv0Y;
    int Vg0i74ahVtru;
    int CWlQL9qGNk1;
    int e1lOq52uFJQ;
    int TyfkCdVJG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int vaoZuyPSE;
    int a [(1197 - 187)];
    int xgXsyqohJN [1010];
    for (; cin >> sytbziN;) {
        if (!(0 != sytbziN))
            break;
        CWlQL9qGNk1 = TyfkCdVJG = 0;
        Vg0i74ahVtru = 0;
        {
            DKIkrc1Pv0Y = 0;
            while (sytbziN > DKIkrc1Pv0Y) {
                cin >> a[DKIkrc1Pv0Y];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                DKIkrc1Pv0Y++;
            };
        }
        for (DKIkrc1Pv0Y = 0; sytbziN > DKIkrc1Pv0Y; DKIkrc1Pv0Y++)
            cin >> xgXsyqohJN[DKIkrc1Pv0Y];
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
        qsort (a, sytbziN, sizeof (int), vP063dNwXH9);
        qsort (xgXsyqohJN, sytbziN, sizeof (int), vP063dNwXH9);
        e1lOq52uFJQ = vaoZuyPSE = sytbziN - 1;
        for (; e1lOq52uFJQ >= CWlQL9qGNk1;) {
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
            if (xgXsyqohJN[CWlQL9qGNk1] < a[TyfkCdVJG]) {
                Vg0i74ahVtru += 200;
                CWlQL9qGNk1++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                TyfkCdVJG++;
            }
            else {
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
                if (a[TyfkCdVJG] == xgXsyqohJN[CWlQL9qGNk1]) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (TyfkCdVJG <= vaoZuyPSE) {
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
                        if (a[vaoZuyPSE] > xgXsyqohJN[e1lOq52uFJQ]) {
                            e1lOq52uFJQ--;
                            vaoZuyPSE--;
                            Vg0i74ahVtru += 200;
                        }
                        else {
                            if (a[vaoZuyPSE] < xgXsyqohJN[CWlQL9qGNk1])
                                Vg0i74ahVtru -= 200;
                            CWlQL9qGNk1++;
                            vaoZuyPSE--;
                            break;
                        };
                    };
                }
                else {
                    CWlQL9qGNk1++;
                    vaoZuyPSE--;
                    Vg0i74ahVtru -= 200;
                };
            };
        }
        cout << Vg0i74ahVtru << endl;
    }
    return 0;
}

