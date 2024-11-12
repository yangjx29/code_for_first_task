int EAeXSKgx1Jf (long  H2vCWN) {
    long  kGsWgqn;
    long  xIiQCozbma9;
    if (!((568 - 566) != H2vCWN) || H2vCWN == (42 - 39))
        return (491 - 490);
    if (!((908 - 908) != H2vCWN % (356 - 354)))
        return (733 - 733);
    xIiQCozbma9 = (int) sqrt (H2vCWN);
    for (kGsWgqn = (867 - 864); xIiQCozbma9 >= kGsWgqn; kGsWgqn += (779 - 777))
        if (H2vCWN % kGsWgqn == (32 - 32))
            break;
    if (kGsWgqn > xIiQCozbma9)
        return (572 - 571);
    return 0;
}

void  main () {
    long  n;
    long  kGsWgqn;
    long  TJgpWHOjf;
    scanf ("%ld", &n);
    for (TJgpWHOjf = 6; TJgpWHOjf <= n; TJgpWHOjf += (246 - 244)) {
        printf ("%d=", TJgpWHOjf);
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
        for (kGsWgqn = (27 - 25); kGsWgqn <= TJgpWHOjf / (597 - 595); kGsWgqn++)
            if (EAeXSKgx1Jf (kGsWgqn) &&EAeXSKgx1Jf(TJgpWHOjf -kGsWgqn)) {
                printf ("%d+%d\n", kGsWgqn, TJgpWHOjf -kGsWgqn);
                break;
            };
    };
}

