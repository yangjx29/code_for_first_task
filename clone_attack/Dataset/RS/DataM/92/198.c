int main () {
    int ma (int n);
    int n;
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
    for (; 1;) {
        ma (n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &n);
        if (!((321 - 321) != n)) {
            break;
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
        };
    }
    return 0;
}

int ma (int n) {
    int paixu (int yctgXx0VOP [], int wang [], int n);
    int sum;
    int a;
    int i;
    sum = 0;
    a = 1;
    int wang [1001];
    int yctgXx0VOP [1001];
    int staw;
    int WEAnd0DTu7G2;
    int endw;
    int endt;
    staw = 0;
    WEAnd0DTu7G2 = 0;
    endw = n - 1;
    endt = n - 1;
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &yctgXx0VOP[i]);
    }
    for (i = 0; n > i; i++) {
        scanf ("%d", &wang[i]);
    }
    paixu (yctgXx0VOP, wang, n);
    for (; endt >= WEAnd0DTu7G2;) {
        if (wang[staw] < yctgXx0VOP[WEAnd0DTu7G2]) {
            sum += 200;
            staw = staw + 1;
            WEAnd0DTu7G2 = WEAnd0DTu7G2 +1;
        }
        else if (wang[staw] > yctgXx0VOP[WEAnd0DTu7G2]) {
            sum = sum - 200;
            endt = endt - 1;
            staw = staw + 1;
        }
        else if (!(wang[staw] != yctgXx0VOP[WEAnd0DTu7G2])) {
            for (; (!(1 != a));) {
                if (wang[endw] < yctgXx0VOP[endt]) {
                    sum += 200;
                    endt--;
                    endw--;
                }
                else {
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
                    if (yctgXx0VOP[endt] <= wang[endw]) {
                        a = 0;
                        if (yctgXx0VOP[endt] < wang[staw]) {
                            sum -= 200;
                        }
                        endt--;
                        staw++;
                    };
                };
            }
            a = 1;
        };
    }
    printf ("%d\n", sum);
    return 0;
}

int paixu (int yctgXx0VOP [], int wang [], int n) {
    int i, D8EHQRIyXv, b;
    {
        i = 0;
        while (i < n) {
            for (D8EHQRIyXv = n - 1; D8EHQRIyXv > i; D8EHQRIyXv--) {
                if (yctgXx0VOP[D8EHQRIyXv] > yctgXx0VOP[D8EHQRIyXv -1]) {
                    b = yctgXx0VOP[D8EHQRIyXv];
                    yctgXx0VOP[D8EHQRIyXv] = yctgXx0VOP[D8EHQRIyXv -1];
                    yctgXx0VOP[D8EHQRIyXv -1] = b;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (wang[D8EHQRIyXv] > wang[D8EHQRIyXv -1]) {
                    b = wang[D8EHQRIyXv];
                    wang[D8EHQRIyXv] = wang[D8EHQRIyXv -1];
                    wang[D8EHQRIyXv -1] = b;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

