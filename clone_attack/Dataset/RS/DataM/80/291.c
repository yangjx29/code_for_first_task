int leap (int a) {
    if ((a % (895 - 891) == (501 - 501) && a % 100 != (689 - 689)) || (a % 400 == 0))
        return 1;
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int l28aqFXZu [(816 - 814)] = {365, 366};
int month [2] [(640 - 628)] = {{(879 - 848), (534 - 506), (419 - 388), (338 - 308), (352 - 321), (60 - 30), (899 - 868), (592 - 561), (89 - 59), (609 - 578), (940 - 910), (679 - 648)}, {31, (707 - 678), 31, (137 - 107), 31, (83 - 53), 31, 31, 30, 31, 30, 31}};

int main () {
    int y1;
    int m1;
    int d1;
    int y2;
    int m2;
    int d2;
    int MxJBWluEZ1F7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int i;
    MxJBWluEZ1F7 = 0;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    for (i = y1 + 1; y2 > i; i = i + 1) {
        MxJBWluEZ1F7 = MxJBWluEZ1F7 +l28aqFXZu[leap (i)];
    }
    if (y2 > y1) {
        for (i = m1; i < 12; i++)
            MxJBWluEZ1F7 = MxJBWluEZ1F7 +month[leap (y1)][i];
        for (i = 0; i < m2 - 1; i++)
            MxJBWluEZ1F7 = MxJBWluEZ1F7 +month[leap (y2)][i];
        MxJBWluEZ1F7 = MxJBWluEZ1F7 +31 - d1;
        MxJBWluEZ1F7 = MxJBWluEZ1F7 +d2;
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (y1 == y2) {
            {
                i = m1;
                while (i < m2 - 1) {
                    MxJBWluEZ1F7 = MxJBWluEZ1F7 +month[leap (y1)][i];
                    i++;
                };
            }
            MxJBWluEZ1F7 = MxJBWluEZ1F7 +d2 - d1;
        };
    }
    cout << MxJBWluEZ1F7;
}

