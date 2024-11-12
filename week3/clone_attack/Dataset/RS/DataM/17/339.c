int main () {
    char ThIMZvw [120];
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
    while (cin >> ThIMZvw) {
        int TqanulBfSjD0 [120];
        int W0SXtDaRqH;
        W0SXtDaRqH = (231 - 231);
        int lens;
        char lvkeGHuJML [120];
        lens = strlen (ThIMZvw);
        {
            int S6yDO7F2 = 0;
            while (lens > S6yDO7F2) {
                lvkeGHuJML[S6yDO7F2] = ' ';
                S6yDO7F2 = S6yDO7F2 +1;
            };
        }
        {
            int S6yDO7F2 = 1;
            while (120 > S6yDO7F2) {
                TqanulBfSjD0[S6yDO7F2] = -1;
                S6yDO7F2++;
            };
        }
        {
            int S6yDO7F2 = 0;
            while (lens > S6yDO7F2) {
                if (!('(' != ThIMZvw[S6yDO7F2]))
                    TqanulBfSjD0[++W0SXtDaRqH] = S6yDO7F2;
                if (ThIMZvw[S6yDO7F2] == ')') {
                    if (!(0 != W0SXtDaRqH))
                        lvkeGHuJML[S6yDO7F2] = '?';
                    else {
                        TqanulBfSjD0[W0SXtDaRqH] = -1;
                        W0SXtDaRqH = W0SXtDaRqH -1;
                    };
                }
                S6yDO7F2++;
            };
        }
        {
            int S6yDO7F2 = 1;
            while (S6yDO7F2 <= W0SXtDaRqH) {
                lvkeGHuJML[TqanulBfSjD0[S6yDO7F2]] = '$';
                S6yDO7F2++;
            };
        }
        {
            int S6yDO7F2 = 0;
            while (S6yDO7F2 < lens) {
                cout << ThIMZvw[S6yDO7F2];
                S6yDO7F2++;
            };
        }
        cout << endl;
        {
            int S6yDO7F2 = 0;
            while (S6yDO7F2 < lens) {
                cout << lvkeGHuJML[S6yDO7F2];
                S6yDO7F2++;
            };
        }
        cout << endl;
    }
    return 0;
}

