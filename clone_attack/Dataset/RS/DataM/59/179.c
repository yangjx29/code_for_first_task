int main () {
    int yBNmwD2ko;
    char a [(1056 - 956)] [100] [100];
    int X0NCogSZmjD;
    int PoaFKOqkfuz;
    PoaFKOqkfuz = 0;
    cin >> yBNmwD2ko;
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
    for (int wEVbqe = 0;
    yBNmwD2ko > wEVbqe; wEVbqe = wEVbqe + 1)
        for (int Vvd5riNE = 0;
        Vvd5riNE < yBNmwD2ko; Vvd5riNE++)
            cin >> a[0][wEVbqe][Vvd5riNE];
    cin >> X0NCogSZmjD;
    for (int S43WSjEiGRsM = 1;
    S43WSjEiGRsM < X0NCogSZmjD; S43WSjEiGRsM = S43WSjEiGRsM +1)
        for (int wEVbqe = 0;
        wEVbqe < yBNmwD2ko; wEVbqe++) {
            int Vvd5riNE = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (Vvd5riNE < yBNmwD2ko) {
                a[S43WSjEiGRsM][wEVbqe][Vvd5riNE] = a[0][wEVbqe][Vvd5riNE];
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
                Vvd5riNE++;
            };
        }
    for (int S43WSjEiGRsM = 1;
    S43WSjEiGRsM < X0NCogSZmjD; S43WSjEiGRsM++)
        for (int wEVbqe = 0;
        wEVbqe < yBNmwD2ko; wEVbqe++)
            for (int Vvd5riNE = 0;
            Vvd5riNE < yBNmwD2ko; Vvd5riNE++) {
                if (a[S43WSjEiGRsM -1][wEVbqe][Vvd5riNE] == '@') {
                    if (yBNmwD2ko >= wEVbqe + 1)
                        if (a[S43WSjEiGRsM -1][wEVbqe + 1][Vvd5riNE] != '#')
                            a[S43WSjEiGRsM][wEVbqe + 1][Vvd5riNE] = '@';
                    if (wEVbqe - 1 >= 0)
                        if (a[S43WSjEiGRsM -1][wEVbqe - 1][Vvd5riNE] != '#')
                            a[S43WSjEiGRsM][wEVbqe - 1][Vvd5riNE] = '@';
                    if (Vvd5riNE +1 <= yBNmwD2ko)
                        if (a[S43WSjEiGRsM -1][wEVbqe][Vvd5riNE +1] != '#')
                            a[S43WSjEiGRsM][wEVbqe][Vvd5riNE +1] = '@';
                    if (Vvd5riNE -1 >= 0)
                        if (a[S43WSjEiGRsM -1][wEVbqe][Vvd5riNE -1] != '#')
                            a[S43WSjEiGRsM][wEVbqe][Vvd5riNE -1] = '@';
                };
            }
    for (int wEVbqe = 0;
    wEVbqe < yBNmwD2ko; wEVbqe++) {
        int Vvd5riNE = 0;
        while (Vvd5riNE < yBNmwD2ko) {
            if (a[X0NCogSZmjD -1][wEVbqe][Vvd5riNE] == '@')
                PoaFKOqkfuz += 1;
            Vvd5riNE++;
        };
    }
    cout << PoaFKOqkfuz << endl;
    return 0;
}

