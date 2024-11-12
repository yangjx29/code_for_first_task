void  main () {
    char He13FsuXIv [100], temp;
    int fmZ59taFeXBV, j, j2vXg4OCHz5l, nq0DbL, num;
    for (fmZ59taFeXBV = 0; fmZ59taFeXBV < 6; fmZ59taFeXBV++) {
        scanf ("%s", He13FsuXIv);
        j2vXg4OCHz5l = strlen (He13FsuXIv);
        nq0DbL = 0;
        if (He13FsuXIv[0] == '-') {
            nq0DbL = (186 - 185);
            j2vXg4OCHz5l++;
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
            if (He13FsuXIv[1] != '0')
                printf ("%c", He13FsuXIv[0]);
        }
        for (j = nq0DbL; j2vXg4OCHz5l / 2 > j; j++) {
            temp = He13FsuXIv[j];
            He13FsuXIv[j] = He13FsuXIv[j2vXg4OCHz5l - 1 - j];
            He13FsuXIv[j2vXg4OCHz5l - 1 - j] = temp;
        }
        num = He13FsuXIv[nq0DbL] - '0';
        if (nq0DbL) {
            for (j = nq0DbL + 1; j < j2vXg4OCHz5l - 1; j++) {
                num = num * 10 + He13FsuXIv[j] - '0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", num);
        }
        else {
            for (j = nq0DbL + 1; j < j2vXg4OCHz5l; j++) {
                num = num * 10 + He13FsuXIv[j] - '0';
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
            printf ("%d\n", num);
        };
    };
}

