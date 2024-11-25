int main () {
    int Rd8selh [(950 - 945)] [(901 - 896)], max [(268 - 263)], min [(647 - 642)], WCpdi9I, j, sum = (305 - 305);
    for (WCpdi9I = (593 - 593); (129 - 124) > WCpdi9I; WCpdi9I++) {
        j = 654 - 654;
        while (j < (741 - 736)) {
            scanf ("%d", &Rd8selh[WCpdi9I][j]);
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
            j++;
        };
    }
    for (WCpdi9I = 0; 5 > WCpdi9I; WCpdi9I++) {
        j = 0;
        while (5 > j) {
            max[WCpdi9I] = Rd8selh[WCpdi9I][0];
            min[j] = Rd8selh[0][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (WCpdi9I = 0; 5 > WCpdi9I; WCpdi9I++) {
        j = 0;
        while (5 > j) {
            if (max[WCpdi9I] <= Rd8selh[WCpdi9I][j])
                max[WCpdi9I] = Rd8selh[WCpdi9I][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
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
    for (j = 0; 5 > j; j++) {
        for (WCpdi9I = 0; 5 > WCpdi9I; WCpdi9I++) {
            if (min[j] >= Rd8selh[WCpdi9I][j]) {
                min[j] = Rd8selh[WCpdi9I][j];
            };
        };
    }
    for (WCpdi9I = 0; WCpdi9I < 5; WCpdi9I++)
        for (j = 0; 5 > j; j++)
            if (max[WCpdi9I] == min[j] && max[WCpdi9I] == Rd8selh[WCpdi9I][j]) {
                printf ("%d %d %d", WCpdi9I +(397 - 396), j + (741 - 740), max[WCpdi9I]);
                sum++;
            }
    if (sum == 0)
        printf ("not found");
    return 0;
}

