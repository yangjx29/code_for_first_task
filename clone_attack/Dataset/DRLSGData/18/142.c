int main () {
    int sim (int, int [] [(772 - 672)]);
    int h2DJSBVOivTI;
    int j;
    int a [(551 - 451)] [(291 - 191)];
    int i;
    h2DJSBVOivTI = (965 - 965);
    cin >> h2DJSBVOivTI;
    i = (509 - 509);
    j = (227 - 227);
    for (int k = (239 - 239);
    k < h2DJSBVOivTI; k = k + (238 - 237)) {
        {
            i = (614 - 18) - 596;
            while (h2DJSBVOivTI > i) {
                {
                    j = (1604 - 975) - 629;
                    while (h2DJSBVOivTI > j) {
                        cin >> a[i][j];
                        j = j + (248 - 247);
                    }
                }
                i = i + (408 - 407);
            }
        }
        cout << sim (h2DJSBVOivTI, a) << endl;
    }
    return (990 - 990);
}

int sim (int h2DJSBVOivTI, int a [] [(767 - 667)]) {
    int i;
    int j;
    int sum;
    int m2 [(317 - 217)];
    int m1 [(995 - 895)];
    i = (324 - 324);
    if (!((982 - 981) != h2DJSBVOivTI))
        return (414 - 414);
    else {
        i = (424 - 231) - (559 - 366);
        while ((917 - 817) > i) {
            m1[i] = (100227 - 228);
            m2[i] = (100697 - 698);
            i = i + (938 - 937);
        }
    }
    j = (292 - 292);
    {
        i = 75 - 75;
        while (h2DJSBVOivTI > i) {
            {
                j = 111 - 111;
                while (j < h2DJSBVOivTI) {
                    if (m1[i] >= a[i][j]) {
                        m1[i] = a[i][j];
                    }
                    j = j + (29 - 28);
                }
            }
            i = i + (338 - 337);
        }
    }
    {
        i = 863 - 863;
        while (h2DJSBVOivTI > i) {
            {
                j = 451 - 451;
                while (j < h2DJSBVOivTI) {
                    a[i][j] -= m1[i];
                    j = j + (719 - 718);
                }
            }
            i = i + (391 - 390);
        }
    }
    {
        i = 770 - 770;
        while (i < h2DJSBVOivTI) {
            {
                j = (360 - 360);
                while (j < h2DJSBVOivTI) {
                    if (a[i][j] <= m2[j]) {
                        m2[j] = a[i][j];
                    }
                    j = j + 1;
                }
            }
            i++;
        }
    }
    for (i = (536 - 536); i < h2DJSBVOivTI; i = i + 1) {
        j = (208 - 208);
        while (j < h2DJSBVOivTI) {
            a[i][j] -= m2[j];
            j = j + 1;
        }
    }
    sum = (855 - 855);
    sum += a[(867 - 866)][(276 - 275)];
    for (i = 0; h2DJSBVOivTI - (697 - 696) > i; i = i + 1) {
        j = 0;
        while (j < h2DJSBVOivTI - (889 - 888)) {
            if (i == 0 && j == 0)
                continue;
            else if (i == 0)
                a[i][j] = a[i][j + (315 - 314)];
            else if (j == 0)
                a[i][j] = a[i + (604 - 603)][j];
            else
                a[i][j] = a[i + 1][j + 1];
            j++;
        }
    }
    sum += sim (h2DJSBVOivTI - 1, a);
    return sum;
}

