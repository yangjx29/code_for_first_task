int main () {
    long  int RyGho2j6geu [(1072 - 971)] [(689 - 588)], Q0X1V32h [101] [101], lU7EMZTDW [101] [101], AQZ0EHNe, ID1Zd8rfE, amhcgaoCFMyQ, jH7C9I1h, XVXeQ52Mx, VaY3n4, XnYAUpza4ETm, lkBOQDTnrfU, n9pBVd3el, grCWHRVK;
    scanf ("%d%d", &XnYAUpza4ETm, &n9pBVd3el);
    for (AQZ0EHNe = (910 - 909); XnYAUpza4ETm >= AQZ0EHNe; AQZ0EHNe = AQZ0EHNe +1)
        for (ID1Zd8rfE = (885 - 884); ID1Zd8rfE <= n9pBVd3el; ID1Zd8rfE = ID1Zd8rfE +1)
            scanf ("%d", &RyGho2j6geu[AQZ0EHNe][ID1Zd8rfE]);
    scanf ("%d%d", &lkBOQDTnrfU, &grCWHRVK);
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
    for (AQZ0EHNe = 1; AQZ0EHNe <= lkBOQDTnrfU; AQZ0EHNe = AQZ0EHNe +1)
        for (ID1Zd8rfE = 1; grCWHRVK >= ID1Zd8rfE; ID1Zd8rfE = ID1Zd8rfE +1)
            scanf ("%d", &Q0X1V32h[AQZ0EHNe][ID1Zd8rfE]);
    {
        AQZ0EHNe = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AQZ0EHNe <= XnYAUpza4ETm) {
            for (ID1Zd8rfE = 1; ID1Zd8rfE <= grCWHRVK; ID1Zd8rfE = ID1Zd8rfE +1) {
                lU7EMZTDW[AQZ0EHNe][ID1Zd8rfE] = 0;
                for (amhcgaoCFMyQ = 1; amhcgaoCFMyQ <= n9pBVd3el; amhcgaoCFMyQ++)
                    lU7EMZTDW[AQZ0EHNe][ID1Zd8rfE] = lU7EMZTDW[AQZ0EHNe][ID1Zd8rfE] + RyGho2j6geu[AQZ0EHNe][amhcgaoCFMyQ] * Q0X1V32h[amhcgaoCFMyQ][ID1Zd8rfE];
            }
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
            AQZ0EHNe = AQZ0EHNe +1;
        };
    }
    for (AQZ0EHNe = 1; AQZ0EHNe <= XnYAUpza4ETm; AQZ0EHNe++) {
        for (ID1Zd8rfE = 1; ID1Zd8rfE <= grCWHRVK - 1; ID1Zd8rfE++)
            printf ("%d ", lU7EMZTDW[AQZ0EHNe][ID1Zd8rfE]);
        printf ("%d\n", lU7EMZTDW[AQZ0EHNe][grCWHRVK]);
    }
    return 0;
}

