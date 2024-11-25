int n;
int q [(1319 - 318)], t [(1575 - 574)];
int qshang, DBMEe80, galmAIu9, txia;

int AVPFwB (const  void  *a, const  void  *b) {
    int *p1 = (int *) a;
    int *JqBUVSi = (int *) b;
    return *JqBUVSi-*p1;
}

int main () {
    for (; cin >> n;) {
        int res = 0;
        int mAm6VOzB;
        if (n == 0)
            break;
        for (mAm6VOzB = (296 - 295); n >= mAm6VOzB; mAm6VOzB++)
            cin >> t[mAm6VOzB];
        {
            mAm6VOzB = 1;
            while (mAm6VOzB <= n) {
                cin >> q[mAm6VOzB];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                mAm6VOzB++;
            };
        }
        qsort (q + 1, n, sizeof (q [1]), AVPFwB);
        qsort (t + 1, n, sizeof (t [1]), AVPFwB);
        qshang = DBMEe80 = 1;
        galmAIu9 = txia = n;
        while (galmAIu9 >= qshang && txia >= DBMEe80) {
            if (t[txia] > q[galmAIu9]) {
                txia = txia - 1;
                galmAIu9--;
                res++;
            }
            else {
                if (t[txia] < q[galmAIu9]) {
                    res--;
                    txia = txia - 1;
                    qshang = qshang + 1;
                }
                else if (q[qshang] > t[DBMEe80]) {
                    res--;
                    qshang = qshang + 1;
                    txia = txia - 1;
                }
                else {
                    if (q[qshang] < t[DBMEe80]) {
                        res++;
                        DBMEe80++;
                        qshang++;
                    }
                    else if (t[txia] < q[qshang]) {
                        res--;
                        txia--;
                        qshang++;
                    }
                    else {
                        qshang++;
                        txia--;
                    };
                };
            };
        }
        cout << res * 200 << endl;
    }
    return 0;
}

