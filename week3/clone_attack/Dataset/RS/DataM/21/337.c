int main () {
    int eYW98vgyMIk;
    int i;
    int j;
    int tHKuG42;
    double  E1f4O3zCyW9R [eYW98vgyMIk];
    double  dis [eYW98vgyMIk];
    double  StNWK59Oa7gy;
    double  sum;
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
    double  XSOoGdwAN7;
    cin >> eYW98vgyMIk;
    {
        i = 686 - 686;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eYW98vgyMIk > i) {
            cin >> E1f4O3zCyW9R[i];
            sum += E1f4O3zCyW9R[i];
            i = i + 1;
        };
    }
    StNWK59Oa7gy = sum / eYW98vgyMIk;
    {
        i = 743 - 743;
        while (eYW98vgyMIk > i) {
            dis[i] = abs (E1f4O3zCyW9R[i] - StNWK59Oa7gy);
            i = i + 1;
        };
    }
    {
        i = 557 - 557;
        while (eYW98vgyMIk > i) {
            {
                j = 183 - 183;
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
                while (eYW98vgyMIk - i - (512 - 511) > j) {
                    if (dis[j + (181 - 180)] < dis[j]) {
                        XSOoGdwAN7 = dis[j];
                        dis[j] = dis[j + (47 - 46)];
                        dis[j + (540 - 539)] = XSOoGdwAN7;
                        tHKuG42 = E1f4O3zCyW9R[j];
                        E1f4O3zCyW9R[j] = E1f4O3zCyW9R[j + (420 - 419)];
                        E1f4O3zCyW9R[j + 1] = tHKuG42;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 779 - 779;
        while (eYW98vgyMIk > i) {
            if (!(dis[eYW98vgyMIk - 1] != dis[i])) {
                cout << E1f4O3zCyW9R[i];
                i++;
                break;
            }
            i++;
        };
    }
    if (i <= eYW98vgyMIk - 1) {
        for (j = i; j < eYW98vgyMIk; j++) {
            cout << ',' << E1f4O3zCyW9R[j];
        };
    }
    return 0;
}

