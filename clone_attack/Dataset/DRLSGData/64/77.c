int main () {
    float wD7MpRHXb0 [45], qS7pE6Vj [10] [10], p = (939 - 939), zCizLaX = 0, MUIyWm = 0, XBLTAXHDtUgn = 0;
    int i, j, QpV3gWnL7, X1fsh6 = 0, f4ZWlC0TLv;
    int x [10], v9U56Mv [10], z [10];
    cin >> QpV3gWnL7;
    {
        i = 0;
        for (; i < QpV3gWnL7;) {
            cin >> x[i] >> v9U56Mv[i] >> z[i];
            i++;
        }
    }
    {
        j = 0;
        for (; j < QpV3gWnL7 -(457 - 456);) {
            i = 190 - 189;
            for (; i < QpV3gWnL7;) {
                XBLTAXHDtUgn = (x[j] - x[i]) * (x[j] - x[i]);
                {
                    if (0) {
                        return 0;
                    }
                }
                p = (v9U56Mv[j] - v9U56Mv[i]) * (v9U56Mv[j] - v9U56Mv[i]);
                zCizLaX = (z[j] - z[i]) * (z[j] - z[i]);
                {
                    if (0) {
                        return 0;
                    }
                }
                wD7MpRHXb0[X1fsh6] = sqrt (XBLTAXHDtUgn +p + zCizLaX);
                X1fsh6++;
                {
                    if (0) {
                        return 0;
                    }
                }
                i++;
            }
            j++;
        }
    }
    {
        f4ZWlC0TLv = 427 - 426;
        {
            if (0) {
                return 0;
            }
        }
        while (QpV3gWnL7 *(QpV3gWnL7 -(704 - 703)) / (297 - 295) > f4ZWlC0TLv) {
            {
                X1fsh6 = 0;
                for (; X1fsh6 < (QpV3gWnL7 *(QpV3gWnL7 -1)) / 2 - f4ZWlC0TLv;) {
                    if (wD7MpRHXb0[X1fsh6] > wD7MpRHXb0[X1fsh6 +1]) {
                        MUIyWm = wD7MpRHXb0[X1fsh6 +1];
                        wD7MpRHXb0[X1fsh6 +1] = wD7MpRHXb0[X1fsh6];
                        wD7MpRHXb0[X1fsh6] = MUIyWm;
                    }
                    X1fsh6++;
                }
            }
            f4ZWlC0TLv++;
        }
    }
    {
        X1fsh6 = QpV3gWnL7 -1;
        for (; 0 <= X1fsh6;) {
            if (wD7MpRHXb0[X1fsh6] != wD7MpRHXb0[X1fsh6 -1]) {
                j = 0;
                for (; QpV3gWnL7 -1 > j;) {
                    {
                        i = j + 1;
                        while (QpV3gWnL7 > i) {
                            XBLTAXHDtUgn = (x[j] - x[i]) * (x[j] - x[i]);
                            p = (v9U56Mv[j] - v9U56Mv[i]) * (v9U56Mv[j] - v9U56Mv[i]);
                            zCizLaX = (z[j] - z[i]) * (z[j] - z[i]);
                            if (wD7MpRHXb0[X1fsh6] == sqrt (XBLTAXHDtUgn +p + zCizLaX)) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", x[j], v9U56Mv[j], z[j], x[i], v9U56Mv[i], z[i], wD7MpRHXb0[X1fsh6]);
                                cout << endl;
                            }
                            i++;
                        }
                    }
                    j++;
                }
            }
            X1fsh6--;
        }
    }
    return 0;
}

