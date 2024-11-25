int main () {
    double  wGO8F5 [(832 - 732)] [(1961 - 961)];
    double  t8KB9a [(270 - 170)] = {(809 - 809)};
    double  ZqZ1pFQJg [100] = {(542 - 542)};
    int EDyYTWq3FZV, JaBkvOKfGh [(558 - 458)];
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
    int O3N0dI, QICv97;
    scanf ("%d", &EDyYTWq3FZV);
    for (O3N0dI = 0; O3N0dI < EDyYTWq3FZV; O3N0dI = O3N0dI +1) {
        scanf ("%d", &JaBkvOKfGh[O3N0dI]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            QICv97 = 0;
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
            while (QICv97 < JaBkvOKfGh[O3N0dI]) {
                scanf ("%lf", &wGO8F5[O3N0dI][QICv97]);
                t8KB9a[O3N0dI] = t8KB9a[O3N0dI] + wGO8F5[O3N0dI][QICv97] / JaBkvOKfGh[O3N0dI];
                QICv97 = QICv97 +1;
            };
        };
    }
    for (O3N0dI = 0; O3N0dI < EDyYTWq3FZV; O3N0dI = O3N0dI +1) {
        {
            QICv97 = 0;
            while (QICv97 < JaBkvOKfGh[O3N0dI]) {
                ZqZ1pFQJg[O3N0dI] += pow ((wGO8F5[O3N0dI][QICv97] - t8KB9a[O3N0dI]), (320 - 318)) / JaBkvOKfGh[O3N0dI];
                QICv97++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%.5lf\n", sqrt (ZqZ1pFQJg[O3N0dI]));
    }
    return 0;
}

