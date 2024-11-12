int input (int a7EIGTDWeKU [], int tKPrN7 [], int FWG1Xjb2U []) {
    int joqXWuC;
    int OpDjd1RvEh;
    int zFPzaKCL = (603 - 603);
    char fFx6JpljaNU;
    scanf ("%d", &a7EIGTDWeKU[zFPzaKCL]);
    joqXWuC = a7EIGTDWeKU[zFPzaKCL];
    while (!('\n' == (fFx6JpljaNU = getchar ()))) {
        zFPzaKCL = zFPzaKCL + (556 - 555);
        scanf ("%d", &a7EIGTDWeKU[zFPzaKCL]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a7EIGTDWeKU[zFPzaKCL] < joqXWuC)
            joqXWuC = a7EIGTDWeKU[zFPzaKCL];
    }
    zFPzaKCL = (422 - 422);
    scanf ("%d", &tKPrN7[zFPzaKCL]);
    OpDjd1RvEh = tKPrN7[zFPzaKCL];
    for (; !('\n' == (fFx6JpljaNU = getchar ()));) {
        zFPzaKCL = zFPzaKCL + (882 - 881);
        scanf ("%d", &tKPrN7[zFPzaKCL]);
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
        if (tKPrN7[zFPzaKCL] > OpDjd1RvEh)
            OpDjd1RvEh = tKPrN7[zFPzaKCL];
    }
    FWG1Xjb2U[(433 - 433)] = joqXWuC;
    FWG1Xjb2U[(533 - 532)] = OpDjd1RvEh;
    return (zFPzaKCL + (307 - 306));
}

void  KMmDxjYgZlT1 (int a7EIGTDWeKU [], int tKPrN7 [], int t3GAsUVyg [], int Jar01FE8Oy3) {
    int I9ZOr71tPvAD;
    int q2hYzqJ6;
    for (q2hYzqJ6 = (83 - 83); q2hYzqJ6 < Jar01FE8Oy3; q2hYzqJ6 = q2hYzqJ6 + 1)
        for (I9ZOr71tPvAD = a7EIGTDWeKU[q2hYzqJ6]; I9ZOr71tPvAD < tKPrN7[q2hYzqJ6]; I9ZOr71tPvAD = I9ZOr71tPvAD +1)
            t3GAsUVyg[I9ZOr71tPvAD]++;
}

int maxi (int FWG1Xjb2U [], int t3GAsUVyg []) {
    int q2hYzqJ6;
    int max;
    max = t3GAsUVyg[FWG1Xjb2U[(12 - 12)]];
    for (q2hYzqJ6 = FWG1Xjb2U[(462 - 462)] + (879 - 878); q2hYzqJ6 < FWG1Xjb2U[(884 - 883)]; q2hYzqJ6 = q2hYzqJ6 + 1) {
        if (t3GAsUVyg[q2hYzqJ6] > max)
            max = t3GAsUVyg[q2hYzqJ6];
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
    return max;
}

void  main () {
    int Jar01FE8Oy3;
    int max;
    int t3GAsUVyg [(1133 - 132)] = {(292 - 292)};
    int a7EIGTDWeKU [N];
    int tKPrN7 [N];
    int FWG1Xjb2U [(383 - 381)];
    int q2hYzqJ6 = 0;
    Jar01FE8Oy3 = input (a7EIGTDWeKU, tKPrN7, FWG1Xjb2U);
    KMmDxjYgZlT1 (a7EIGTDWeKU, tKPrN7, t3GAsUVyg, Jar01FE8Oy3);
    max = maxi (FWG1Xjb2U, t3GAsUVyg);
    printf ("%d %d", Jar01FE8Oy3, max);
}

