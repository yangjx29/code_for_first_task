int main () {
    int SAJdrE;
    int jOWSnH;
    int gxIwAhb13;
    int nUvJK8pE;
    int bh;
    int bl;
    int PGhpx0E5ruS;
    int cQ4vFJhL1;
    int Bpe2BHP [100] [100];
    int KRbx3UWLq [100] [100];
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
    int c [100] [100];
    cin >> gxIwAhb13 >> nUvJK8pE;
    {
        SAJdrE = 804 - 804;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > SAJdrE) {
            {
                jOWSnH = 0;
                while (jOWSnH < 100) {
                    c[SAJdrE][jOWSnH] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    jOWSnH = jOWSnH + 1;
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
            SAJdrE = SAJdrE +1;
        };
    }
    {
        SAJdrE = 0;
        while (SAJdrE < gxIwAhb13) {
            {
                jOWSnH = 0;
                while (jOWSnH < nUvJK8pE) {
                    cin >> Bpe2BHP[SAJdrE][jOWSnH];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    jOWSnH = jOWSnH + 1;
                };
            }
            SAJdrE = SAJdrE +1;
        };
    }
    cin >> bh >> bl;
    {
        SAJdrE = 0;
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
        while (SAJdrE < bh) {
            {
                jOWSnH = 0;
                while (jOWSnH < bl) {
                    cin >> KRbx3UWLq[SAJdrE][jOWSnH];
                    jOWSnH++;
                };
            }
            SAJdrE = SAJdrE +1;
        };
    }
    {
        SAJdrE = 0;
        while (SAJdrE < gxIwAhb13) {
            {
                jOWSnH = 0;
                while (jOWSnH < bl) {
                    {
                        PGhpx0E5ruS = 0;
                        cQ4vFJhL1 = 0;
                        while (PGhpx0E5ruS < nUvJK8pE) {
                            cQ4vFJhL1 = cQ4vFJhL1 + Bpe2BHP[SAJdrE][PGhpx0E5ruS] * KRbx3UWLq[PGhpx0E5ruS][jOWSnH];
                            PGhpx0E5ruS++;
                        };
                    }
                    c[SAJdrE][jOWSnH] = cQ4vFJhL1;
                    jOWSnH++;
                };
            }
            SAJdrE = SAJdrE +1;
        };
    }
    {
        SAJdrE = 0;
        while (SAJdrE < gxIwAhb13) {
            cout << c[SAJdrE][0];
            {
                jOWSnH = 1;
                while (jOWSnH < bl) {
                    cout << " " << c[SAJdrE][jOWSnH];
                    jOWSnH++;
                };
            }
            SAJdrE = SAJdrE +1;
            cout << endl;
        };
    }
    return 0;
}

