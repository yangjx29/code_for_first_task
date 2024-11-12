int main () {
    int navRiq [10000] = {0};
    int Qs6D1ly9MPi = 0;
    cin >> Qs6D1ly9MPi;
    navRiq[0] = 1;
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
    navRiq[1] = 1;
    for (; 0 < Qs6D1ly9MPi; Qs6D1ly9MPi--) {
        {
            int fiB6zWYud0 = 1;
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
            while (fiB6zWYud0 <= navRiq[0]) {
                navRiq[fiB6zWYud0] = navRiq[fiB6zWYud0] * (2);
                fiB6zWYud0++;
            };
        }
        {
            int fiB6zWYud0 = 1;
            while (fiB6zWYud0 <= navRiq[0]) {
                navRiq[fiB6zWYud0 + 1] = navRiq[fiB6zWYud0 + 1] + navRiq[fiB6zWYud0] / 10;
                navRiq[fiB6zWYud0] = navRiq[fiB6zWYud0] % 10;
                fiB6zWYud0++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (navRiq[navRiq[0] + 1] > 0)
            navRiq[0]++;
    }
    {
        int fiB6zWYud0 = navRiq[0];
        while (fiB6zWYud0 > 0) {
            cout << navRiq[fiB6zWYud0];
            fiB6zWYud0--;
        };
    }
    return 0;
}

