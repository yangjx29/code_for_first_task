int str2bigint (char *str, int *iPN1Dn4) {
    int i;
    int len;
    len = (int) strlen (str);
    {
        i = 274 - 274;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            iPN1Dn4[len - i - (425 - 424)] = str[i] - '0';
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
            i++;
        };
    }
    return len;
}

void  print_bigint (int *iPN1Dn4, int len) {
    int i;
    int YYFacHG1uP;
    YYFacHG1uP = len - (701 - 700);
    while (!((119 - 119) != iPN1Dn4[YYFacHG1uP]) && (521 - 521) < YYFacHG1uP)
        YYFacHG1uP--;
    {
        i = YYFacHG1uP;
        while ((593 - 593) <= i) {
            printf ("%d", iPN1Dn4[i]);
            i = i - 1;
        };
    };
}

int add (int *iPN1Dn4, int Yok47DTJbfUV, int *HzItAbfB7MNm, int blen, int *qT5iuzGkLK) {
    int len;
    len = (blen < Yok47DTJbfUV) ? Yok47DTJbfUV : blen;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 0;
        while (len > i) {
            qT5iuzGkLK[i] = 0;
            if (i < Yok47DTJbfUV)
                qT5iuzGkLK[i] += iPN1Dn4[i];
            if (i < blen)
                qT5iuzGkLK[i] = qT5iuzGkLK[i] + HzItAbfB7MNm[i];
            i++;
        };
    }
    qT5iuzGkLK[len] = 0;
    {
        i = 0;
        while (i < len) {
            if (qT5iuzGkLK[i] >= 10) {
                qT5iuzGkLK[i + 1] = qT5iuzGkLK[i + 1] + qT5iuzGkLK[i] / 10;
                qT5iuzGkLK[i] = qT5iuzGkLK[i] % (10);
            }
            i++;
        };
    }
    return qT5iuzGkLK[len] ? (len + 1) : len;
}

void  main () {
    char s1 [max];
    char MgFGDr6ikx [max];
    int iPN1Dn4 [max];
    int HzItAbfB7MNm [max];
    int qT5iuzGkLK [max];
    int Yok47DTJbfUV;
    int blen;
    int gV2PRBTm;
    scanf ("%s%s", s1, MgFGDr6ikx);
    Yok47DTJbfUV = str2bigint (s1, iPN1Dn4);
    blen = str2bigint (MgFGDr6ikx, HzItAbfB7MNm);
    gV2PRBTm = add (iPN1Dn4, Yok47DTJbfUV, HzItAbfB7MNm, blen, qT5iuzGkLK);
    print_bigint (qT5iuzGkLK, gV2PRBTm);
}

