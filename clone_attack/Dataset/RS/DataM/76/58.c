int main () {
    int sz [6000] [2];
    int i5DKg9TtS0;
    int CbLEwRxn;
    int knH10fhTz2;
    int i0gKaZ;
    int a;
    int yNfFkQ;
    int len;
    scanf ("%d", &i5DKg9TtS0);
    for (knH10fhTz2 = (735 - 735); knH10fhTz2 < i5DKg9TtS0; knH10fhTz2 = knH10fhTz2 + 1) {
        scanf ("%d%d", &(sz[knH10fhTz2][(997 - 997)]), &(sz[knH10fhTz2][(130 - 129)]));
    }
    a = sz[(831 - 831)][0];
    yNfFkQ = sz[0][(237 - 236)];
    for (knH10fhTz2 = 0; knH10fhTz2 < i5DKg9TtS0; knH10fhTz2 = knH10fhTz2 + 1) {
        if (a >= sz[knH10fhTz2][0]) {
            a = sz[knH10fhTz2][0];
        }
        if (yNfFkQ <= sz[knH10fhTz2][1]) {
            yNfFkQ = sz[knH10fhTz2][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    len = yNfFkQ - a;
    {
        i0gKaZ = 0;
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
        while (i0gKaZ < len) {
            if (CbLEwRxn == 0) {
                break;
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
            }
            CbLEwRxn = 0;
            for (knH10fhTz2 = 0; knH10fhTz2 < i5DKg9TtS0; knH10fhTz2++) {
                if (sz[knH10fhTz2][0] < sz[knH10fhTz2][1]) {
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
                    if (sz[knH10fhTz2][0] <= a + i0gKaZ && a + i0gKaZ + 1 <= sz[knH10fhTz2][1]) {
                        CbLEwRxn = CbLEwRxn +1;
                    };
                };
            }
            i0gKaZ = i0gKaZ + 1;
        };
    }
    if (CbLEwRxn == 0) {
    }
    else {
        printf ("%d %d", a, yNfFkQ);
    }
    return 0;
}

