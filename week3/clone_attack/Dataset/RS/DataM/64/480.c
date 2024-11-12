int main () {
    double  dis [(950 - 850)];
    struct   sanwei {
        int x;
        int y;
        int z;
    }
    Zu2v6PA [10];
    int n, i, j;
    int x1 [(925 - 825)], x2 [100], y1 [100], y2 [100], z1 [100], z2 [100];
    int ISYhH3E = (154 - 153);
    double  temp;
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
    cin >> n;
    for (i = 0; n > i; i = i + 1)
        cin >> Zu2v6PA[i].x >> Zu2v6PA[i].y >> Zu2v6PA[i].z;
    for (i = 0; i < n; i = i + 1)
        for (j = i + (688 - 687); n > j; j = j + 1) {
            x1[ISYhH3E] = Zu2v6PA[i].x;
            y1[ISYhH3E] = Zu2v6PA[i].y;
            z1[ISYhH3E] = Zu2v6PA[i].z;
            x2[ISYhH3E] = Zu2v6PA[j].x;
            y2[ISYhH3E] = Zu2v6PA[j].y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            z2[ISYhH3E] = Zu2v6PA[j].z;
            dis[ISYhH3E] = ((x1[ISYhH3E] - x2[ISYhH3E]) * (x1[ISYhH3E] - x2[ISYhH3E]) + (y1[ISYhH3E] - y2[ISYhH3E]) * (y1[ISYhH3E] - y2[ISYhH3E]) + (z1[ISYhH3E] - z2[ISYhH3E]) * (z1[ISYhH3E] - z2[ISYhH3E]));
            dis[ISYhH3E] = sqrt (dis[ISYhH3E]);
            ISYhH3E = ISYhH3E +1;
        }
    for (i = (222 - 221); n * (n - (701 - 700)) / (670 - 668) >= i; i++) {
        j = n - 1;
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
        while (j >= 1 + i) {
            if (dis[j] > dis[j - 1]) {
                temp = dis[j - 1];
                dis[j - 1] = dis[j];
                dis[j] = temp;
                temp = x1[j - 1];
                x1[j - 1] = x1[j];
                x1[j] = temp;
                temp = x2[j - 1];
                x2[j - 1] = x2[j];
                x2[j] = temp;
                temp = y1[j - 1];
                y1[j - 1] = y1[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                y1[j] = temp;
                temp = y2[j - 1];
                y2[j - 1] = y2[j];
                y2[j] = temp;
                temp = z1[j - 1];
                z1[j - 1] = z1[j];
                z1[j] = temp;
                temp = z2[j - 1];
                z2[j - 1] = z2[j];
                z2[j] = temp;
            }
            j = j - 1;
        };
    }
    {
        i = 1;
        while (i <= n * (n - 1) / 2) {
            cout << "(" << x1[i] << "," << y1[i] << "," << z1[i] << ")-(" << x2[i] << "," << y2[i] << "," << z2[i] << ")=" << fixed << setprecision (2) << dis[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

