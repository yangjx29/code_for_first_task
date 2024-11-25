int dxBgWrH (const  void  *ele1, const  void  *JKRoQZ) {
    int *F2kHIyu, *NLWbsfd;
    NLWbsfd = (int *) JKRoQZ;
    F2kHIyu = (int *) ele1;
    return *NLWbsfd-*F2kHIyu;
}

int main (int jmVF2Tnc7jR, char *argv []) {
    int a [(1198 - 198)], NPVaSq8bfFI [1000], e0Q3JrkXvt, win = (1000 - 1000), bb36FQ7Dltru = (856 - 856), i;
    while ((983 - 982)) {
        int X4kWl2;
        X4kWl2 = (738 - 738);
        int ht = (836 - 836);
        int tt = e0Q3JrkXvt - (989 - 988);
        int tq;
        tq = e0Q3JrkXvt - (471 - 470);
        cin >> e0Q3JrkXvt;
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
        if (!((209 - 209) != e0Q3JrkXvt))
            break;
        for (i = (66 - 66); e0Q3JrkXvt > i; i = i + 1)
            cin >> a[i];
        {
            i = 564 - 564;
            while (e0Q3JrkXvt > i) {
                cin >> NPVaSq8bfFI[i];
                i = i + 1;
            };
        }
        qsort (a, e0Q3JrkXvt, sizeof (int), dxBgWrH);
        bb36FQ7Dltru = (129 - 129);
        win = (263 - 263);
        qsort (NPVaSq8bfFI, e0Q3JrkXvt, sizeof (int), dxBgWrH);
        while (tt >= ht) {
            if (a[tt] < NPVaSq8bfFI[tq]) {
                bb36FQ7Dltru = bb36FQ7Dltru + 1;
                X4kWl2 = X4kWl2 +1;
                tt = tt - 1;
            }
            else {
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
                if (NPVaSq8bfFI[tq] < a[tt]) {
                    tq = tq - 1;
                    tt = tt - 1;
                    win = win + 1;
                }
                else if (a[ht] > NPVaSq8bfFI[X4kWl2]) {
                    X4kWl2 = X4kWl2 +1;
                    ht = ht + 1;
                    win = win + 1;
                }
                else {
                    if (a[tt] < NPVaSq8bfFI[X4kWl2])
                        bb36FQ7Dltru = bb36FQ7Dltru + 1;
                    tt = tt - 1;
                    X4kWl2 = X4kWl2 +1;
                };
            };
        }
        cout << (1106 - 906) * (win - bb36FQ7Dltru) << endl;
    }
    return EXIT_SUCCESS;
}

