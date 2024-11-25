int main () {
    int n;
    int t;
    int bFcuRlWw1C4 [50] = {0};
    t = 0;
    int i;
    int j;
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
    i = 0;
    j = 0;
    bFcuRlWw1C4[0] = 2;
    cin >> n;
    if (!(0 != n))
        cout << "1";
    else {
        {
            i = 0;
            while (n - 1 > i) {
                t = 0;
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (50 > j) {
                        bFcuRlWw1C4[j] = bFcuRlWw1C4[j] * 2;
                        bFcuRlWw1C4[j] = bFcuRlWw1C4[j] + t;
                        if (9 < bFcuRlWw1C4[j]) {
                            t = 1;
                            bFcuRlWw1C4[j] = bFcuRlWw1C4[j] - 10;
                        }
                        else
                            t = 0;
                        j++;
                    };
                }
                i++;
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
        {
            j = 49;
            while (j >= 0) {
                if (bFcuRlWw1C4[j] > 0)
                    break;
                j--;
            };
        }
        {
            i = j;
            while (i >= 0) {
                cout << bFcuRlWw1C4[i];
                i--;
            };
        };
    }
    return 0;
}

