int room [(184 - 74)] [110] [110] = {(820 - 820)};

int main () {
    int RfDT0IHN, lRuZ8BGva, B6lbZDFC, rpk1N0, SHgMrB1Dcw, WHoJvEd = 0;
    char qRIeANO [110] [110];
    cin >> RfDT0IHN;
    for (B6lbZDFC = (641 - 640); B6lbZDFC <= RfDT0IHN; B6lbZDFC = B6lbZDFC +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (rpk1N0 = (996 - 995); rpk1N0 <= RfDT0IHN; rpk1N0 = rpk1N0 + 1) {
            cin >> qRIeANO[B6lbZDFC][rpk1N0];
            if (qRIeANO[B6lbZDFC][rpk1N0] == '.')
                room[B6lbZDFC][rpk1N0][(128 - 127)] = (823 - 822);
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
            if (qRIeANO[B6lbZDFC][rpk1N0] == '#')
                room[B6lbZDFC][rpk1N0][1] = 0;
            if (qRIeANO[B6lbZDFC][rpk1N0] == '@')
                room[B6lbZDFC][rpk1N0][1] = (476 - 474);
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
    cin >> lRuZ8BGva;
    {
        SHgMrB1Dcw = 1;
        while (SHgMrB1Dcw < lRuZ8BGva) {
            for (B6lbZDFC = 1; B6lbZDFC <= RfDT0IHN; B6lbZDFC = B6lbZDFC +1) {
                rpk1N0 = 1;
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
                while (rpk1N0 <= RfDT0IHN) {
                    if (room[B6lbZDFC][rpk1N0][SHgMrB1Dcw] >= (359 - 357)) {
                        room[B6lbZDFC][rpk1N0][SHgMrB1Dcw] = 2;
                        room[B6lbZDFC +1][rpk1N0][SHgMrB1Dcw +1] = 2 * room[B6lbZDFC +1][rpk1N0][SHgMrB1Dcw];
                        room[B6lbZDFC][rpk1N0 + 1][SHgMrB1Dcw +1] = 2 * room[B6lbZDFC][rpk1N0 + 1][SHgMrB1Dcw];
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
                        room[B6lbZDFC -1][rpk1N0][SHgMrB1Dcw +1] = 2 * room[B6lbZDFC -1][rpk1N0][SHgMrB1Dcw];
                        room[B6lbZDFC][rpk1N0 - 1][SHgMrB1Dcw +1] = 2 * room[B6lbZDFC][rpk1N0 - 1][SHgMrB1Dcw];
                        room[B6lbZDFC][rpk1N0][SHgMrB1Dcw +1] = 2;
                    }
                    if (room[B6lbZDFC][rpk1N0][SHgMrB1Dcw] == 1 && room[B6lbZDFC][rpk1N0][SHgMrB1Dcw +1] == 0) {
                        room[B6lbZDFC][rpk1N0][SHgMrB1Dcw +1] = 1;
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
                    rpk1N0 = rpk1N0 + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            SHgMrB1Dcw = SHgMrB1Dcw +1;
        };
    }
    for (B6lbZDFC = 1; B6lbZDFC <= RfDT0IHN; B6lbZDFC = B6lbZDFC +1) {
        rpk1N0 = 1;
        while (rpk1N0 <= RfDT0IHN) {
            if (room[B6lbZDFC][rpk1N0][lRuZ8BGva] > 1)
                WHoJvEd = WHoJvEd +1;
            rpk1N0++;
        };
    }
    cout << WHoJvEd;
    return 0;
}

