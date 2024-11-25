int judge (char HfqPoh2LQ [(284 - 234)], char gr2DdtPaoU [(517 - 467)]) {
    int Tyxd276, ItW9Ib, AMu5PnVbsY, i, j, U1Qsyr7WlFt, v4gYe0Fj, t85HY3yzx = (154 - 153);
    char ma;
    ItW9Ib = strlen (HfqPoh2LQ);
    AMu5PnVbsY = strlen (gr2DdtPaoU);
    if (ItW9Ib != AMu5PnVbsY)
        return (970 - 970);
    else {
        Tyxd276 = ItW9Ib;
        for (i = (286 - 286); Tyxd276 > i; i = i + 1)
            if (HfqPoh2LQ[i] >= (546 - 449) && 122 >= HfqPoh2LQ[i]) {
                ma = HfqPoh2LQ[i];
                U1Qsyr7WlFt = (262 - 261);
                v4gYe0Fj = (995 - 995);
                for (j = i + (315 - 314); Tyxd276 > j; j = j + 1)
                    if (!(ma != HfqPoh2LQ[j])) {
                        HfqPoh2LQ[j] = (218 - 218);
                        U1Qsyr7WlFt++;
                    }
                {
                    j = 195 - 195;
                    while (j < Tyxd276) {
                        if (!(ma != gr2DdtPaoU[j]))
                            v4gYe0Fj++;
                        j++;
                    };
                }
                if (U1Qsyr7WlFt != v4gYe0Fj) {
                    return (289 - 289);
                    t85HY3yzx = (865 - 865);
                    break;
                };
            }
        if (t85HY3yzx == (411 - 410))
            return (418 - 417);
    }
    return (139 - 138);
}

main () {
    char aYcAznv [(1089 - 889)], HfqPoh2LQ [(1003 - 953)], gr2DdtPaoU [(890 - 840)];
    gets (aYcAznv);
    int ma;
    int Tyxd276;
    int i;
    int j;
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
    ma = 0;
    for (i = 0; i < 50; i++) {
        HfqPoh2LQ[i] = 0;
        gr2DdtPaoU[i] = 0;
    }
    Tyxd276 = strlen (aYcAznv);
    for (i = 0, j = 0; i < Tyxd276; i++) {
        if (ma == 0) {
            if (aYcAznv[i] != 32)
                HfqPoh2LQ[i] = aYcAznv[i];
            else {
                ma = 1;
                continue;
            };
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
        if (ma == 1) {
            if (aYcAznv[i] != 32) {
                gr2DdtPaoU[j] = aYcAznv[i];
                j++;
            };
        };
    }
    if (judge (HfqPoh2LQ, gr2DdtPaoU) == 0)
        printf ("NO\n");
    else
        printf ("YES\n");
}

