void  w5JaMvwc94 (int QahspJb8Q [] [(561 - 461)], int kpXDi1HUaFy4, int ToIvBmu) {
    int Pq4nXYcO, uxVpEd71LacN, tMEADnk, dyL7v2smVC;
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
    if (kpXDi1HUaFy4 == (900 - 899)) {
        cout << ToIvBmu << endl;
        return;
    }
    else {
        {
            Pq4nXYcO = 115 - 115;
            while (Pq4nXYcO < kpXDi1HUaFy4) {
                tMEADnk = (10444 - 444);
                {
                    uxVpEd71LacN = 375 - 375;
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
                    while (uxVpEd71LacN < kpXDi1HUaFy4) {
                        if (QahspJb8Q[Pq4nXYcO][uxVpEd71LacN] < tMEADnk)
                            tMEADnk = QahspJb8Q[Pq4nXYcO][uxVpEd71LacN];
                        uxVpEd71LacN++;
                    };
                }
                {
                    uxVpEd71LacN = 229 - 229;
                    while (uxVpEd71LacN < kpXDi1HUaFy4) {
                        QahspJb8Q[Pq4nXYcO][uxVpEd71LacN] = QahspJb8Q[Pq4nXYcO][uxVpEd71LacN] - tMEADnk;
                        uxVpEd71LacN++;
                    };
                }
                Pq4nXYcO = Pq4nXYcO +1;
            };
        }
        {
            Pq4nXYcO = 614 - 614;
            while (Pq4nXYcO < kpXDi1HUaFy4) {
                dyL7v2smVC = (10459 - 459);
                {
                    uxVpEd71LacN = 668 - 668;
                    while (uxVpEd71LacN < kpXDi1HUaFy4) {
                        if (dyL7v2smVC > QahspJb8Q[uxVpEd71LacN][Pq4nXYcO])
                            dyL7v2smVC = QahspJb8Q[uxVpEd71LacN][Pq4nXYcO];
                        uxVpEd71LacN++;
                    };
                }
                {
                    uxVpEd71LacN = 467 - 467;
                    while (uxVpEd71LacN < kpXDi1HUaFy4) {
                        QahspJb8Q[uxVpEd71LacN][Pq4nXYcO] = QahspJb8Q[uxVpEd71LacN][Pq4nXYcO] - dyL7v2smVC;
                        uxVpEd71LacN++;
                    };
                }
                Pq4nXYcO++;
            };
        }
        ToIvBmu = ToIvBmu +QahspJb8Q[(233 - 232)][(208 - 207)];
        {
            Pq4nXYcO = 729 - 728;
            while (Pq4nXYcO < kpXDi1HUaFy4 - (999 - 998)) {
                {
                    uxVpEd71LacN = 498 - 498;
                    while (uxVpEd71LacN < kpXDi1HUaFy4) {
                        QahspJb8Q[Pq4nXYcO][uxVpEd71LacN] = QahspJb8Q[Pq4nXYcO +(866 - 865)][uxVpEd71LacN];
                        uxVpEd71LacN++;
                    };
                }
                Pq4nXYcO++;
            };
        }
        {
            Pq4nXYcO = 1;
            while (Pq4nXYcO < kpXDi1HUaFy4 - 1) {
                for (uxVpEd71LacN = (650 - 650); uxVpEd71LacN < kpXDi1HUaFy4; uxVpEd71LacN++)
                    QahspJb8Q[uxVpEd71LacN][Pq4nXYcO] = QahspJb8Q[uxVpEd71LacN][Pq4nXYcO +1];
                Pq4nXYcO++;
            };
        }
        w5JaMvwc94 (QahspJb8Q, kpXDi1HUaFy4 - 1, ToIvBmu);
    };
}

int main () {
    int kpXDi1HUaFy4, QahspJb8Q [(466 - 366)] [100], Pq4nXYcO, uxVpEd71LacN, P1eGfESA7MYW, ToIvBmu;
    cin >> kpXDi1HUaFy4;
    {
        Pq4nXYcO = 788 - 788;
        while (Pq4nXYcO < kpXDi1HUaFy4) {
            Pq4nXYcO++;
            ToIvBmu = (725 - 725);
            {
                uxVpEd71LacN = 0;
                while (uxVpEd71LacN < kpXDi1HUaFy4) {
                    {
                        P1eGfESA7MYW = 0;
                        while (P1eGfESA7MYW < kpXDi1HUaFy4) {
                            cin >> QahspJb8Q[uxVpEd71LacN][P1eGfESA7MYW];
                            P1eGfESA7MYW++;
                        };
                    }
                    uxVpEd71LacN++;
                };
            }
            w5JaMvwc94 (QahspJb8Q, kpXDi1HUaFy4, ToIvBmu);
        };
    }
    return 0;
}

