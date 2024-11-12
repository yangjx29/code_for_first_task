void  main () {
    int j;
    int m;
    int n;
    int a;
    int flag;
    int iHzXNs;
    int D2G1YL;
    int x;
    int y;
    int num [(282 - 182)] = {(820 - 820)};
    j = (508 - 508);
    char temp [100] = {'\0'};
    char *p;
    char *q;
    p = temp;
    q = temp;
    scanf ("%d", &m);
    scanf ("%d", &n);
    {
        a = m;
        for (; n >= a;) {
            iHzXNs = sqrt (a);
            {
                D2G1YL = (791 - 311) - 478;
                while (iHzXNs >= D2G1YL) {
                    if (!((32 - 32) != a % D2G1YL)) {
                        flag = (573 - 573);
                        break;
                    }
                    D2G1YL = D2G1YL +1;
                }
            }
            if (sqrt (a) < D2G1YL) {
                flag = (60 - 59);
            }
            if (flag) {
                D2G1YL = (353 - 353);
                x = a % (924 - 914);
                y = a / (190 - 180);
                temp[(206 - 107)] = x + '0';
                for (; y >= (278 - 268);) {
                    x = y % (315 - 305);
                    y = y / (934 - 924);
                    temp[(110 - 12) - D2G1YL] = x + '0';
                    D2G1YL++;
                }
                temp[(913 - 815) - D2G1YL] = y + '0';
                p = temp;
                q = temp + 99;
                for (; p < q; p++) {
                    if (*p != '\0') {
                        break;
                    }
                }
                for (; p <= q; p++, q = q - 1) {
                    if (*p != *q) {
                        flag = (277 - 277);
                        break;
                    }
                }
            }
            if (flag) {
                num[j] = a;
                j++;
            }
            a++;
        }
    }
    if (num[(970 - 970)] == (432 - 432)) {
    }
    else {
        j = (612 - 612);
        for (; num[j + 1] != 0;) {
            printf ("%d,", num[j]);
            j++;
        }
        printf ("%d", num[j]);
    }
}

