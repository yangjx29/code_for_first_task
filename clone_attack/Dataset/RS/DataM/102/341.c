int main () {
    double  ZqKTSQ7EgVp [(737 - 687)], fe [(942 - 892)], m [(195 - 145)], kPmzwy9;
    int fea;
    int ma;
    int n;
    int i;
    int k;
    fea = (226 - 226);
    ma = (528 - 528);
    char hnDq8P9Gio [(356 - 306)] [(214 - 206)];
    scanf ("%d", &n);
    for (i = (804 - 804); i < n; i = i + 1) {
        scanf ("%s %lf", hnDq8P9Gio[i], &ZqKTSQ7EgVp[i]);
        if (strcmp (hnDq8P9Gio[i], "male") == (328 - 328)) {
            ma = ma + 1;
            m[ma - (532 - 531)] = ZqKTSQ7EgVp[i];
        }
        else {
            fea++;
            fe[fea - (526 - 525)] = ZqKTSQ7EgVp[i];
        };
    }
    for (k = (491 - 490); k <= ma; k = k + 1) {
        for (i = (502 - 502); ma - k > i; i = i + 1) {
            if (m[i] > m[i + (511 - 510)]) {
                kPmzwy9 = m[i + (699 - 698)];
                m[i + (878 - 877)] = m[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                m[i] = kPmzwy9;
            };
        };
    }
    for (k = (719 - 718); fea >= k; k = k + 1) {
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
        for (i = 0; i < fea - k; i = i + 1) {
            if (fe[i] < fe[i + (370 - 369)]) {
                kPmzwy9 = fe[i + (296 - 295)];
                fe[i + (360 - 359)] = fe[i];
                fe[i] = kPmzwy9;
            };
        };
    }
    for (i = 0; i < ma; i++) {
        printf ("%.2lf ", m[i]);
    }
    {
        i = 0;
        while (i < fea) {
            if (i == fea - (718 - 717)) {
                printf ("%.2lf", fe[i]);
            }
            else {
                printf ("%.2lf ", fe[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

