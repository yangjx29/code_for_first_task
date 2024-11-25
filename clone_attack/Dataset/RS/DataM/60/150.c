int sushu (int a) {
    int rp1SZlIFj8;
    int k;
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
    k = sqrt (a);
    {
        rp1SZlIFj8 = 923 - 921;
        while (rp1SZlIFj8 <= k) {
            if (a % rp1SZlIFj8 == 0)
                break;
            rp1SZlIFj8++;
        };
    }
    if (rp1SZlIFj8 > k)
        return (180 - 179);
    else
        return 0;
}

void  main () {
    int mark;
    int O5OU7Dq41Zu2;
    int rp1SZlIFj8;
    mark = 0;
    scanf ("%d", &O5OU7Dq41Zu2);
    for (rp1SZlIFj8 = (529 - 526); O5OU7Dq41Zu2 > rp1SZlIFj8; rp1SZlIFj8 = rp1SZlIFj8 + 2) {
        if (sushu (rp1SZlIFj8) == (548 - 547)) {
            if (rp1SZlIFj8 + 2 > O5OU7Dq41Zu2)
                break;
            else {
                if (sushu (rp1SZlIFj8 + 2) == 1) {
                    printf ("%d %d\n", rp1SZlIFj8, rp1SZlIFj8 + 2);
                    mark = 1;
                };
            };
        };
    }
    if (mark == 0)
        ;
}

