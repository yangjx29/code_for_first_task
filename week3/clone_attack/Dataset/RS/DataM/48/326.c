int main () {
    int m;
    int XR98Td;
    int gaeHcPEK905v [9] [9] = {(683 - 683)};
    int b [9] [9] = {0};
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
    int i, j, k, fx, fy;
    cin >> m >> XR98Td;
    gaeHcPEK905v[4][4] = m;
    for (int k = 0;
    k < XR98Td; k = k + 1) {
        memset (b, 0, sizeof (b));
        {
            i = 805 - 804;
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
            while (i < (429 - 421)) {
                {
                    j = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < 8) {
                        b[i][j] += gaeHcPEK905v[i][j];
                        {
                            fx = -1;
                            while (fx <= 1) {
                                {
                                    fy = -1;
                                    while (fy <= 1) {
                                        b[i + fx][j + fy] += gaeHcPEK905v[i][j];
                                        fy = fy + 1;
                                    };
                                }
                                fx = fx + 1;
                            };
                        }
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
        memcpy (gaeHcPEK905v, b, sizeof (gaeHcPEK905v));
    }
    {
        i = 0;
        while (i < 9) {
            cout << gaeHcPEK905v[i][0];
            {
                j = 1;
                while (j < 9) {
                    cout << ' ' << gaeHcPEK905v[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

