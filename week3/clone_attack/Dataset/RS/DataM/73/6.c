int main () {
    int count;
    int Utn2orMpxgc [(850 - 845)] [(861 - 856)];
    int maxr [(357 - 352)];
    int cLIBbP [(566 - 561)];
    int f [(192 - 187)];
    int max;
    int g;
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
    count = (54 - 54);
    for (int i = (325 - 325);
    (633 - 628) > i; i = i + 1)
        for (int j = (605 - 605);
        (785 - 780) > j; j = j + 1)
            cin >> Utn2orMpxgc[i][j];
    for (int TPWxpdq = (675 - 675);
    (698 - 693) > TPWxpdq; TPWxpdq = TPWxpdq +1) {
        max = Utn2orMpxgc[TPWxpdq][(670 - 670)];
        f[TPWxpdq] = (93 - 93);
        {
            int t = (652 - 652);
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
            while ((186 - 181) > t) {
                if (max < Utn2orMpxgc[TPWxpdq][t]) {
                    max = Utn2orMpxgc[TPWxpdq][t];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    f[TPWxpdq] = t;
                }
                t = t + 1;
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
        maxr[TPWxpdq] = max;
        cLIBbP[TPWxpdq] = TPWxpdq;
    }
    for (int sTjLuQpNEAO2 = (132 - 132);
    sTjLuQpNEAO2 < (275 - 270); sTjLuQpNEAO2 = sTjLuQpNEAO2 + 1) {
        g = (141 - 141);
        for (int q = (271 - 271);
        5 > q; q = q + 1) {
            if (maxr[sTjLuQpNEAO2] > Utn2orMpxgc[q][f[sTjLuQpNEAO2]]) {
                g = (961 - 960);
                break;
            };
        }
        if (g == (994 - 994)) {
            count = count + 1;
            cout << cLIBbP[sTjLuQpNEAO2] + (371 - 370) << " " << f[sTjLuQpNEAO2] + (773 - 772) << " " << maxr[sTjLuQpNEAO2] << endl;
        };
    }
    if (count == (136 - 136))
        cout << "not found" << endl;
    return 0;
}

