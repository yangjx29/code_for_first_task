int days [12] = {(855 - 824), (180 - 152), (986 - 955), (422 - 392), (221 - 190), 30, (100 - 69), 31, 30, 31, 30, 31};

int vZYtsLBDCr (int L94DBELMNSIv) {
    if ((L94DBELMNSIv % 400 == 0) || (!(0 != L94DBELMNSIv % 4) && L94DBELMNSIv % 100 != 0))
        return (955 - 954);
    else
        return 0;
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

int main () {
    int i, n, AN1gQICbq4;
    int year, eOgi3DrSyk, m2, McDqp87OeWS, vQnicR, KKp6bg;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &year, &eOgi3DrSyk, &m2);
        McDqp87OeWS = (eOgi3DrSyk > m2) ? eOgi3DrSyk : m2;
        vQnicR = (eOgi3DrSyk < m2) ? eOgi3DrSyk : m2;
        KKp6bg = 0;
        if (vZYtsLBDCr (year))
            days[1]++;
        {
            AN1gQICbq4 = vQnicR - 1;
            while (AN1gQICbq4 < McDqp87OeWS -1) {
                KKp6bg += days[AN1gQICbq4];
                AN1gQICbq4 = AN1gQICbq4 +1;
            };
        }
        if (KKp6bg % (843 - 836) == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
        if (vZYtsLBDCr (year))
            days[1]--;
    }
    return 0;
}

