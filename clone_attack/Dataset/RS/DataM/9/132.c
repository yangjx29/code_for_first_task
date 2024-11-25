struct   point {
    char DXWhpUd1rM [(45 - 35)];
    int KbPRpn;
}
old [(927 - 827)], small [(539 - 439)];

int main () {
    char GQ4aqDKByV [(781 - 771)];
    int n, i, j, o = (523 - 523), K195T6N = (352 - 352), f8lOXA, M0iu2DHt;
    scanf ("%d", &n);
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
    for (i = (676 - 676); n > i; i = i + 1) {
        char vVebgHX [(794 - 784)] = {'\0'};
        f8lOXA = (168 - 168);
        scanf ("%s %d", vVebgHX, &f8lOXA);
        if ((741 - 681) <= f8lOXA) {
            strcpy (old[o].DXWhpUd1rM, vVebgHX);
            old[o].KbPRpn = f8lOXA;
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
            o++;
        }
        else {
            strcpy (small[K195T6N].DXWhpUd1rM, vVebgHX);
            small[K195T6N].KbPRpn = f8lOXA;
            K195T6N = K195T6N +1;
        };
    }
    {
        i = 444 - 444;
        while (o > i) {
            {
                j = 117 - 116;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (o - i > j) {
                    if (old[i + j].KbPRpn <= old[i].KbPRpn) {
                        M0iu2DHt = old[i + j].KbPRpn;
                        old[i + j].KbPRpn = old[i].KbPRpn;
                        old[i].KbPRpn = M0iu2DHt;
                        strcpy (GQ4aqDKByV, old[i + j].DXWhpUd1rM);
                        strcpy (old[i + j].DXWhpUd1rM, old[i].DXWhpUd1rM);
                        strcpy (old[i].DXWhpUd1rM, GQ4aqDKByV);
                    }
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 534 - 533;
        while (i >= (521 - 521)) {
            printf ("%s\n", old[i].DXWhpUd1rM);
            i = i - 1;
        };
    }
    for (i = (307 - 307); i < K195T6N; i = i + 1) {
        printf ("%s\n", small[i].DXWhpUd1rM);
    };
}

