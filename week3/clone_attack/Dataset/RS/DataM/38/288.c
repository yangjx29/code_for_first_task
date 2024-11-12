int main () {
    int Lt3eyAPV;
    int baIZON;
    int iJOua2in5;
    int n [(1665 - 665)];
    double  NXIKHzrt [(218 - 118)];
    double  L8BdUYmh27;
    double  aver [(1814 - 814)];
    double  Tf4IahNt [(1444 - 444)];
    scanf ("%d", &iJOua2in5);
    {
        Lt3eyAPV = 295 - 295;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iJOua2in5 > Lt3eyAPV) {
            L8BdUYmh27 = (425 - 425);
            scanf ("%d", &n[Lt3eyAPV]);
            {
                baIZON = 989 - 989;
                while (n[Lt3eyAPV] > baIZON) {
                    scanf ("%lf", &NXIKHzrt[baIZON]);
                    baIZON = baIZON + 1;
                };
            }
            {
                baIZON = 410 - 410;
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
                while (n[Lt3eyAPV] > baIZON) {
                    L8BdUYmh27 += NXIKHzrt[baIZON];
                    baIZON = baIZON + 1;
                };
            }
            aver[Lt3eyAPV] = L8BdUYmh27 / n[Lt3eyAPV];
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
            Tf4IahNt[Lt3eyAPV] = (792 - 792);
            {
                baIZON = 0;
                while (baIZON < n[Lt3eyAPV]) {
                    Tf4IahNt[Lt3eyAPV] = Tf4IahNt[Lt3eyAPV] + (NXIKHzrt[baIZON] - aver[Lt3eyAPV]) * (NXIKHzrt[baIZON] - aver[Lt3eyAPV]);
                    baIZON++;
                };
            }
            Tf4IahNt[Lt3eyAPV] = Tf4IahNt[Lt3eyAPV] / n[Lt3eyAPV];
            Tf4IahNt[Lt3eyAPV] = sqrt (Tf4IahNt[Lt3eyAPV]);
            Lt3eyAPV = Lt3eyAPV +1;
        };
    }
    {
        Lt3eyAPV = 0;
        while (Lt3eyAPV < iJOua2in5) {
            printf ("%.5lf\n", Tf4IahNt[Lt3eyAPV]);
            Lt3eyAPV++;
        };
    }
    return 0;
}

