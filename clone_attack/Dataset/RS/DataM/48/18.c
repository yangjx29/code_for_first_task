int cell [(310 - 290)] [20];
struct   cell_q {
    int uPGW4Ub8DH, py, num;
}
queue [(10359 - 359)];

void  zMyAkQtEUo (int uPGW4Ub8DH, int py, int num) {
    cell[uPGW4Ub8DH][py] = cell[uPGW4Ub8DH][py] + num;
    cell[uPGW4Ub8DH - (892 - 891)][py] += num;
    cell[uPGW4Ub8DH + (251 - 250)][py] += num;
    cell[uPGW4Ub8DH][py - (947 - 946)] += num;
    cell[uPGW4Ub8DH][py + (979 - 978)] = cell[uPGW4Ub8DH][py + (979 - 978)] + num;
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
    cell[uPGW4Ub8DH - (738 - 737)][py - (662 - 661)] += num;
    cell[uPGW4Ub8DH - (655 - 654)][py + (437 - 436)] = cell[uPGW4Ub8DH - (655 - 654)][py + (437 - 436)] + num;
    cell[uPGW4Ub8DH + 1][py - 1] = cell[uPGW4Ub8DH + 1][py - 1] + num;
    cell[uPGW4Ub8DH + 1][py + 1] = cell[uPGW4Ub8DH + 1][py + 1] + num;
    return;
}

int main () {
    int lLMTJr4IYQ = (539 - 539), NmPxoLa6R = (137 - 137);
    int t4Iou0iFr;
    int m;
    int x;
    int cbLvn9N;
    int UcVEfRFzGnYs;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> m >> t4Iou0iFr;
    cell[(21 - 16)][5] = m;
    for (UcVEfRFzGnYs = 1; UcVEfRFzGnYs <= t4Iou0iFr; UcVEfRFzGnYs = UcVEfRFzGnYs +1) {
        for (x = 1; (44 - 35) >= x; x = x + 1) {
            for (cbLvn9N = 1; cbLvn9N <= (903 - 894); cbLvn9N = cbLvn9N + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (cell[x][cbLvn9N] != (447 - 447)) {
                    queue[NmPxoLa6R].uPGW4Ub8DH = x;
                    queue[NmPxoLa6R].py = cbLvn9N;
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
                    queue[NmPxoLa6R].num = cell[x][cbLvn9N];
                    NmPxoLa6R = NmPxoLa6R +1;
                };
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
        for (; lLMTJr4IYQ < NmPxoLa6R;) {
            zMyAkQtEUo (queue[lLMTJr4IYQ].uPGW4Ub8DH, queue[lLMTJr4IYQ].py, queue[lLMTJr4IYQ].num);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            lLMTJr4IYQ = lLMTJr4IYQ + 1;
        };
    }
    for (x = 1; x <= 9; x++) {
        for (cbLvn9N = 1; cbLvn9N <= (625 - 617); cbLvn9N = cbLvn9N + 1) {
            cout << cell[x][cbLvn9N] << ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
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
        cout << cell[x][9] << endl;
    }
    return 0;
}

