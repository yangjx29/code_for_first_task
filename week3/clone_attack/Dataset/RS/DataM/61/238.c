int main () {
    int JXZnwSrk0d;
    int TAeTXNpwxsci [(1572 - 572)];
    int xQgJHP;
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
    scanf ("%d", &JXZnwSrk0d);
    for (int U6LGRUvc = (740 - 740);
    U6LGRUvc < JXZnwSrk0d; U6LGRUvc++) {
        scanf ("%d", &xQgJHP);
        {
            int qW5QOmFJSdPD = (652 - 652);
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
            while (qW5QOmFJSdPD < xQgJHP) {
                if (qW5QOmFJSdPD == 0 || qW5QOmFJSdPD == 1) {
                    TAeTXNpwxsci[qW5QOmFJSdPD] = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    TAeTXNpwxsci[qW5QOmFJSdPD] = TAeTXNpwxsci[qW5QOmFJSdPD - 1] + TAeTXNpwxsci[qW5QOmFJSdPD - 2];
                }
                qW5QOmFJSdPD++;
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
        printf ("%d\n", TAeTXNpwxsci[xQgJHP - 1]);
    }
    return 0;
}

