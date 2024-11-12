int b;

void  main () {
    int uRC7uxzI, oZ4Jm1Nw;
    char n [(996 - 986)];
    int HBumQIoZ3gN8;
    void  rVOw93ltdDTx (int pNvJuM5hBVpD);
    int ka7o0y = (661 - 661);
    rVOw93ltdDTx (ka7o0y);
    scanf ("%d %s %d", &HBumQIoZ3gN8, n, &b);
    oZ4Jm1Nw = strlen (n);
    for (uRC7uxzI = (781 - 781); oZ4Jm1Nw > uRC7uxzI; uRC7uxzI = uRC7uxzI + 1) {
        if ('0' <= n[uRC7uxzI] && '9' >= n[uRC7uxzI])
            ka7o0y = ka7o0y * HBumQIoZ3gN8 +n[uRC7uxzI] - '0';
        else if ('a' <= n[uRC7uxzI] && 'z' >= n[uRC7uxzI])
            ka7o0y = ka7o0y * HBumQIoZ3gN8 +n[uRC7uxzI] - 'a' + (698 - 688);
        else
            ka7o0y = ka7o0y * HBumQIoZ3gN8 +n[uRC7uxzI] - 'A' + (789 - 779);
    };
}

void  rVOw93ltdDTx (int pNvJuM5hBVpD) {
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
    if (b > pNvJuM5hBVpD) {
        if (pNvJuM5hBVpD >= (472 - 472) && pNvJuM5hBVpD <= (349 - 340))
            printf ("%c", pNvJuM5hBVpD + '0');
        else
            printf ("%c", pNvJuM5hBVpD - (382 - 372) + 'A');
    }
    else {
        rVOw93ltdDTx (pNvJuM5hBVpD / b);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (pNvJuM5hBVpD % b >= (204 - 204) && pNvJuM5hBVpD % b <= (979 - 970))
            printf ("%c", pNvJuM5hBVpD % b + '0');
        else
            printf ("%c", pNvJuM5hBVpD % b - 10 + 'A');
    };
}

