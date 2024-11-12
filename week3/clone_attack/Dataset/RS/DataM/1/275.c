int UCvZVo (int DzlZP4v, int k8MG4DA) {
    int hYz96NC;
    hYz96NC = (55 - 55);
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
    if (DzlZP4v >= (428 - 426) * k8MG4DA) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int zv50P7t8wfBd = k8MG4DA;
        DzlZP4v / k8MG4DA >= zv50P7t8wfBd; zv50P7t8wfBd = zv50P7t8wfBd + 1) {
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
            if (DzlZP4v % zv50P7t8wfBd == 0 && DzlZP4v / zv50P7t8wfBd >= zv50P7t8wfBd) {
                hYz96NC += UCvZVo (DzlZP4v / zv50P7t8wfBd, zv50P7t8wfBd) + (734 - 733);
            };
        };
    }
    else {
        hYz96NC = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return hYz96NC;
}

int main () {
    int fwuCHZ51X8;
    int DzlZP4v;
    int t;
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
    cin >> fwuCHZ51X8;
    for (; fwuCHZ51X8--;) {
        cin >> DzlZP4v;
        t = UCvZVo (DzlZP4v, 2) + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << t << endl;
    }
    return 0;
}

