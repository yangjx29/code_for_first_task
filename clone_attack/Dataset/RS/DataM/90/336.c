int OIgQde (int hh1bGgrD, int utbyfl) {
    if (!((854 - 853) != hh1bGgrD)) {
        return (29 - 28);
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
    if (!(1 != utbyfl)) {
        return 1;
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
        };
    }
    if (utbyfl > hh1bGgrD && 2 <= hh1bGgrD) {
        return OIgQde ((hh1bGgrD - 1), utbyfl) + OIgQde (hh1bGgrD, (utbyfl - hh1bGgrD));
    }
    if (utbyfl <= hh1bGgrD && utbyfl > 1) {
        return OIgQde (utbyfl - 1, utbyfl) + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int main () {
    int hh1bGgrD [100];
    int utbyfl [100];
    int Eja6Zl4wd;
    int yIKc7kOgBRv5 [100];
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
    int BTbeYO8 = 0;
    scanf ("%d", &Eja6Zl4wd);
    do {
        scanf ("%d %d", &utbyfl[BTbeYO8], &hh1bGgrD[BTbeYO8]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        BTbeYO8++;
    }
    while (BTbeYO8 < Eja6Zl4wd);
    BTbeYO8 = 0;
    do {
        printf ("%d\n", OIgQde (hh1bGgrD[BTbeYO8], utbyfl[BTbeYO8]));
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
        BTbeYO8++;
    }
    while (BTbeYO8 < Eja6Zl4wd);
    return 0;
}

