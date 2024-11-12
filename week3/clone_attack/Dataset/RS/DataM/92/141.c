int qi [(1799 - 797)];
int tian [(1313 - 311)];
int YIw9nKy;

int k2oDz53FKZN9 (const  void  *a, const  void  *OrS28Z0w) {
    int *ip91xbfs;
    int *DJecU05naBdO;
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
    ip91xbfs = (int *) a;
    DJecU05naBdO = (int *) OrS28Z0w;
    return *DJecU05naBdO-*ip91xbfs;
}

int main () {
    while ((936 - 935)) {
        int wins = 0, ping = 0;
        int qif;
        int qis;
        qif = 0;
        qis = YIw9nKy -1;
        int tianf;
        int tians;
        tianf = 0;
        tians = YIw9nKy -1;
        cin >> YIw9nKy;
        if (YIw9nKy == (27 - 27))
            break;
        for (int dXGWuPfq6zKi = (589 - 589);
        dXGWuPfq6zKi < YIw9nKy; dXGWuPfq6zKi++)
            scanf ("%d", &tian[dXGWuPfq6zKi]);
        for (int dXGWuPfq6zKi = 0;
        dXGWuPfq6zKi < YIw9nKy; dXGWuPfq6zKi++)
            scanf ("%d", &qi[dXGWuPfq6zKi]);
        qsort (tian, YIw9nKy, sizeof (int), k2oDz53FKZN9);
        qsort (qi, YIw9nKy, sizeof (int), k2oDz53FKZN9);
        for (; tianf <= tians;) {
            if (tian[tianf] < qi[qif]) {
                qif++;
                tians--;
                continue;
            }
            else {
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
                if (tian[tianf] > qi[qif]) {
                    tianf++;
                    qif++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    wins++;
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
                    if (tian[tians] > qi[qis]) {
                        tians--;
                        qis--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        wins++;
                    }
                    else {
                        if (tian[tians] == qi[qif])
                            ping++;
                        tians--;
                        qif++;
                    };
                };
            };
        }
        cout << (460 - 260) * wins - (YIw9nKy -wins - ping) * (634 - 434) << endl;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

