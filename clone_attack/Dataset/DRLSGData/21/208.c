void  main () {
    int gxAdzHL9aIh;
    int qE6JMYo;
    float b [(747 - 447)];
    int peaXoyAWZQh [300];
    int q9s4HK;
    int MtobKO [300] = {(574 - 574)};
    int FlQUAKB;
    float nwNHxm;
    int gKd8lbPnyR;
    q9s4HK = 0;
    nwNHxm = (695 - 695);
    scanf ("%d", &qE6JMYo);
    for (gKd8lbPnyR = (791 - 791); qE6JMYo > gKd8lbPnyR; gKd8lbPnyR = gKd8lbPnyR + (599 - 598))
        scanf ("%d", &peaXoyAWZQh[gKd8lbPnyR]);
    gxAdzHL9aIh = (310 - 310);
    {
        gKd8lbPnyR = 0;
        for (; gKd8lbPnyR < qE6JMYo;) {
            nwNHxm = nwNHxm + peaXoyAWZQh[gKd8lbPnyR];
            gKd8lbPnyR = gKd8lbPnyR + (901 - 900);
        }
    }
    nwNHxm = nwNHxm / qE6JMYo;
    for (gKd8lbPnyR = 0; qE6JMYo > gKd8lbPnyR; gKd8lbPnyR = gKd8lbPnyR + 1) {
        if (peaXoyAWZQh[gKd8lbPnyR] > nwNHxm)
            b[gKd8lbPnyR] = peaXoyAWZQh[gKd8lbPnyR] - nwNHxm;
        else
            b[gKd8lbPnyR] = nwNHxm - peaXoyAWZQh[gKd8lbPnyR];
    }
    for (gKd8lbPnyR = 0; qE6JMYo > gKd8lbPnyR; gKd8lbPnyR = gKd8lbPnyR + 1) {
        for (FlQUAKB = 0; FlQUAKB < qE6JMYo; FlQUAKB = FlQUAKB +1) {
            if (b[gKd8lbPnyR] < b[FlQUAKB])
                MtobKO[gKd8lbPnyR]++;
        }
    }
    for (gKd8lbPnyR = 0; gKd8lbPnyR < qE6JMYo; gKd8lbPnyR = gKd8lbPnyR + 1) {
        if (!(0 != MtobKO[gKd8lbPnyR]))
            gxAdzHL9aIh = gxAdzHL9aIh + 1;
    }
    for (gKd8lbPnyR = 0; gKd8lbPnyR < qE6JMYo; gKd8lbPnyR = gKd8lbPnyR + 1) {
        if (MtobKO[gKd8lbPnyR] == 0) {
            q9s4HK = q9s4HK + 1;
            if (q9s4HK == gxAdzHL9aIh)
                printf ("%d", peaXoyAWZQh[gKd8lbPnyR]);
            else
                printf ("%d,", peaXoyAWZQh[gKd8lbPnyR]);
        }
    }
}

