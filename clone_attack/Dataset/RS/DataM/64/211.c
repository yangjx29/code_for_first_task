int main () {
    double  N7m3wMh [100];
    double  tempd;
    int BoDZqwIY8a5;
    int xGu3BFPk;
    int apPrZ2yKJLC [10] [3];
    int f3sjpQM;
    int X8JPoyC;
    int k;
    int nbiM5NadqzB [100];
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
    int sSkEwcfmg [100];
    int IRQNj6lgpe;
    int H7bivwszo;
    BoDZqwIY8a5 = 0;
    cin >> xGu3BFPk;
    for (f3sjpQM = 0; xGu3BFPk > f3sjpQM; f3sjpQM = f3sjpQM + 1) {
        for (X8JPoyC = 0; X8JPoyC < 3; X8JPoyC = X8JPoyC +1)
            cin >> apPrZ2yKJLC[f3sjpQM][X8JPoyC];
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
    for (f3sjpQM = 0; xGu3BFPk > f3sjpQM; f3sjpQM = f3sjpQM + 1) {
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
        for (k = f3sjpQM + 1; xGu3BFPk > k; k++) {
            N7m3wMh[BoDZqwIY8a5] = sqrt ((apPrZ2yKJLC[f3sjpQM][0] - apPrZ2yKJLC[k][0]) * (apPrZ2yKJLC[f3sjpQM][0] - apPrZ2yKJLC[k][0]) + (apPrZ2yKJLC[f3sjpQM][1] - apPrZ2yKJLC[k][1]) * (apPrZ2yKJLC[f3sjpQM][1] - apPrZ2yKJLC[k][1]) + (apPrZ2yKJLC[f3sjpQM][2] - apPrZ2yKJLC[k][2]) * (apPrZ2yKJLC[f3sjpQM][2] - apPrZ2yKJLC[k][2]));
            nbiM5NadqzB[BoDZqwIY8a5] = f3sjpQM;
            sSkEwcfmg[BoDZqwIY8a5] = k;
            BoDZqwIY8a5 = BoDZqwIY8a5 +1;
        };
    }
    for (f3sjpQM = 0; BoDZqwIY8a5 -1 > f3sjpQM; f3sjpQM = f3sjpQM + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (X8JPoyC = 0; BoDZqwIY8a5 -f3sjpQM - 1 > X8JPoyC; X8JPoyC++) {
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
            if (N7m3wMh[X8JPoyC +1] > N7m3wMh[X8JPoyC]) {
                tempd = N7m3wMh[X8JPoyC];
                N7m3wMh[X8JPoyC] = N7m3wMh[X8JPoyC +1];
                N7m3wMh[X8JPoyC +1] = tempd;
                IRQNj6lgpe = nbiM5NadqzB[X8JPoyC];
                nbiM5NadqzB[X8JPoyC] = nbiM5NadqzB[X8JPoyC +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                H7bivwszo = sSkEwcfmg[X8JPoyC];
                sSkEwcfmg[X8JPoyC] = sSkEwcfmg[X8JPoyC +1];
                sSkEwcfmg[X8JPoyC +1] = H7bivwszo;
                nbiM5NadqzB[X8JPoyC +1] = IRQNj6lgpe;
            };
        };
    }
    for (X8JPoyC = 0; BoDZqwIY8a5 > X8JPoyC; X8JPoyC++) {
        f3sjpQM = nbiM5NadqzB[X8JPoyC];
        cout << '(' << apPrZ2yKJLC[f3sjpQM][0] << ',' << apPrZ2yKJLC[f3sjpQM][1] << ',' << apPrZ2yKJLC[f3sjpQM][2] << ")-(";
        k = sSkEwcfmg[X8JPoyC];
        cout << apPrZ2yKJLC[k][0] << ',' << apPrZ2yKJLC[k][1] << ',' << apPrZ2yKJLC[k][2] << ")=";
        cout << fixed << setprecision (2) << N7m3wMh[X8JPoyC] << endl;
    };
}

