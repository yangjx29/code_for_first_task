const  int vvrl12n = 1005;
int a [vvrl12n], TAwIjZ9cu [vvrl12n];

int OkeDVMSYN5 (int a, int TAwIjZ9cu) {
    return TAwIjZ9cu < a;
}

int main () {
    int OKUm58E;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (; cin >> OKUm58E &&OKUm58E;) {
        int W3xs7TYny;
        int opLZw2Sy;
        W3xs7TYny = OKUm58E -1;
        opLZw2Sy = OKUm58E -1;
        int wSkgz9aL = 0, QTo15BK0 = 0;
        int xVB5Npo4qSa;
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
        xVB5Npo4qSa = 0;
        {
            i = 0;
            while (OKUm58E > i) {
                cin >> a[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < OKUm58E) {
                cin >> TAwIjZ9cu[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        sort (a, a + OKUm58E, OkeDVMSYN5);
        sort (TAwIjZ9cu, TAwIjZ9cu +OKUm58E, OkeDVMSYN5);
        while (W3xs7TYny >= wSkgz9aL) {
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
            if (TAwIjZ9cu[opLZw2Sy] < a[W3xs7TYny]) {
                opLZw2Sy--;
                W3xs7TYny--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                xVB5Npo4qSa = xVB5Npo4qSa + 200;
            }
            else if (a[W3xs7TYny] < TAwIjZ9cu[opLZw2Sy]) {
                xVB5Npo4qSa = xVB5Npo4qSa - 200;
                QTo15BK0++;
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
                W3xs7TYny--;
            }
            else if (a[W3xs7TYny] == TAwIjZ9cu[opLZw2Sy]) {
                if (a[wSkgz9aL] > TAwIjZ9cu[QTo15BK0]) {
                    xVB5Npo4qSa += 200;
                    wSkgz9aL++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QTo15BK0++;
                }
                else if (a[wSkgz9aL] < TAwIjZ9cu[QTo15BK0]) {
                    QTo15BK0++;
                    W3xs7TYny--;
                    xVB5Npo4qSa = xVB5Npo4qSa - 200;
                }
                else if (a[wSkgz9aL] == TAwIjZ9cu[QTo15BK0]) {
                    if (a[W3xs7TYny] == TAwIjZ9cu[QTo15BK0]) {
                        QTo15BK0++;
                        W3xs7TYny--;
                    }
                    else {
                        xVB5Npo4qSa = xVB5Npo4qSa - 200;
                        QTo15BK0++;
                        W3xs7TYny--;
                    };
                };
            };
        }
        cout << xVB5Npo4qSa << endl;
    };
}

