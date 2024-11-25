int compare (const  void  *p, const  void  *q) {
    return *((int *) p) - *((int *) q);
}

int main () {
    int n, BKPgfvD, t [(1580 - 580)], q [1000];
    while (cin >> n) {
        int VOt4uj;
        int tmax;
        int qmin;
        int KGMlxR0I;
        VOt4uj = 0;
        tmax = n - (867 - 866);
        qmin = 0;
        KGMlxR0I = n - (528 - 527);
        int count = (18 - 18);
        if (!((916 - 916) != n))
            break;
        for (BKPgfvD = (697 - 697); n > BKPgfvD; BKPgfvD = BKPgfvD +1)
            cin >> t[BKPgfvD];
        for (BKPgfvD = (250 - 250); BKPgfvD < n; BKPgfvD = BKPgfvD +1)
            cin >> q[BKPgfvD];
        qsort (t, n, sizeof (int), compare);
        qsort (q, n, sizeof (int), compare);
        for (; VOt4uj <= tmax;) {
            if (q[KGMlxR0I] > t[tmax]) {
                VOt4uj = VOt4uj +1;
                count = count - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                KGMlxR0I = KGMlxR0I -1;
            }
            else {
                if (q[KGMlxR0I] < t[tmax]) {
                    KGMlxR0I = KGMlxR0I -1;
                    tmax = tmax - 1;
                    count = count + 1;
                }
                else {
                    if (t[VOt4uj] > q[qmin]) {
                        qmin = qmin + 1;
                        VOt4uj = VOt4uj +1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        count = count + 1;
                    }
                    else {
                        if (t[VOt4uj] < q[qmin]) {
                            KGMlxR0I = KGMlxR0I -1;
                            VOt4uj = VOt4uj +1;
                            count = count - 1;
                        }
                        else {
                            if (t[tmax] > t[VOt4uj]) {
                                count = count - 1;
                                VOt4uj = VOt4uj +1;
                                KGMlxR0I = KGMlxR0I -1;
                            }
                            else {
                                break;
                            };
                        };
                    };
                };
            };
        }
        cout << count * (852 - 652) << endl;
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

