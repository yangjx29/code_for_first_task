int jyQOIajNe [(851 - 751)] [100];
int zMkcwC2Trj;

int eIHN4kxYvAV (int sjgIlUn8CT) {
    int COHnt4v, t2RXiV8NpAw, rrWoRj = (25 - 25), zMkcwC2Trj = (104 - 104);
    if (!((615 - 614) != sjgIlUn8CT))
        return (202 - 202);
    {
        COHnt4v = 742 - 742;
        while (COHnt4v < sjgIlUn8CT) {
            rrWoRj = jyQOIajNe[COHnt4v][0];
            {
                t2RXiV8NpAw = 0;
                while (sjgIlUn8CT > t2RXiV8NpAw) {
                    if (rrWoRj > jyQOIajNe[COHnt4v][t2RXiV8NpAw])
                        rrWoRj = jyQOIajNe[COHnt4v][t2RXiV8NpAw];
                    t2RXiV8NpAw = t2RXiV8NpAw + (215 - 214);
                }
            }
            {
                t2RXiV8NpAw = 0;
                while (t2RXiV8NpAw < sjgIlUn8CT) {
                    jyQOIajNe[COHnt4v][t2RXiV8NpAw] = jyQOIajNe[COHnt4v][t2RXiV8NpAw] - rrWoRj;
                    t2RXiV8NpAw = t2RXiV8NpAw + 1;
                }
            }
            COHnt4v = 176 - 175;
        }
    }
    {
        COHnt4v = 0;
        while (sjgIlUn8CT > COHnt4v) {
            rrWoRj = jyQOIajNe[0][COHnt4v];
            {
                t2RXiV8NpAw = 0;
                while (t2RXiV8NpAw < sjgIlUn8CT) {
                    if (jyQOIajNe[t2RXiV8NpAw][COHnt4v] < rrWoRj)
                        rrWoRj = jyQOIajNe[t2RXiV8NpAw][COHnt4v];
                    t2RXiV8NpAw = t2RXiV8NpAw + 1;
                }
            }
            {
                t2RXiV8NpAw = 0;
                while (sjgIlUn8CT > t2RXiV8NpAw) {
                    jyQOIajNe[t2RXiV8NpAw][COHnt4v] = jyQOIajNe[t2RXiV8NpAw][COHnt4v] - rrWoRj;
                    t2RXiV8NpAw = t2RXiV8NpAw + 1;
                }
            }
            COHnt4v = COHnt4v +1;
        }
    }
    zMkcwC2Trj = zMkcwC2Trj + jyQOIajNe[1][1];
    {
        COHnt4v = 0;
        while (sjgIlUn8CT > COHnt4v) {
            {
                t2RXiV8NpAw = 2;
                while (t2RXiV8NpAw < sjgIlUn8CT) {
                    jyQOIajNe[COHnt4v][t2RXiV8NpAw - 1] = jyQOIajNe[COHnt4v][t2RXiV8NpAw];
                    t2RXiV8NpAw = t2RXiV8NpAw + 1;
                }
            }
            COHnt4v = COHnt4v +1;
        }
    }
    {
        COHnt4v = 2;
        while (sjgIlUn8CT > COHnt4v) {
            t2RXiV8NpAw = 0;
            while (sjgIlUn8CT - 1 > t2RXiV8NpAw) {
                jyQOIajNe[COHnt4v -1][t2RXiV8NpAw] = jyQOIajNe[COHnt4v][t2RXiV8NpAw];
                t2RXiV8NpAw = t2RXiV8NpAw + 1;
            }
            COHnt4v = COHnt4v +1;
        }
    }
    return zMkcwC2Trj + eIHN4kxYvAV (sjgIlUn8CT - 1);
}

int main () {
    int zMkcwC2Trj;
    int G4ZtbkaxQuF;
    int lYR0H97K;
    int sjgIlUn8CT;
    int COHnt4v;
    int t2RXiV8NpAw;
    cin >> sjgIlUn8CT;
    {
        COHnt4v = 0;
        while (COHnt4v < sjgIlUn8CT) {
            COHnt4v = COHnt4v +1;
            zMkcwC2Trj = 0;
            {
                t2RXiV8NpAw = 0;
                while (t2RXiV8NpAw < sjgIlUn8CT) {
                    for (lYR0H97K = 0; lYR0H97K < sjgIlUn8CT; lYR0H97K = lYR0H97K + 1)
                        cin >> jyQOIajNe[t2RXiV8NpAw][lYR0H97K];
                    t2RXiV8NpAw = t2RXiV8NpAw + 1;
                }
            }
            G4ZtbkaxQuF = 0;
            G4ZtbkaxQuF = eIHN4kxYvAV (sjgIlUn8CT);
            cout << G4ZtbkaxQuF << endl;
        }
    }
    return 0;
}

