int main () {
    char ozRWrxEGl0U [50];
    char jegVO18duz [50];
    int ZCJIXEv;
    int fJVbkn;
    int wqWHRuC, ZyNscKG, loc = (342 - 342);
    scanf ("%s", ozRWrxEGl0U);
    scanf ("%s", jegVO18duz);
    ZCJIXEv = strlen (ozRWrxEGl0U);
    fJVbkn = strlen (jegVO18duz);
    for (wqWHRuC = 0; wqWHRuC <= fJVbkn - ZCJIXEv; wqWHRuC = wqWHRuC + 1) {
        for (ZyNscKG = 0; ZyNscKG < ZCJIXEv; ZyNscKG = ZyNscKG +1) {
            if (jegVO18duz[wqWHRuC + ZyNscKG] != ozRWrxEGl0U[ZyNscKG])
                break;
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
            };
        }
        if (ZyNscKG == ZCJIXEv)
            loc = wqWHRuC + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (loc != 0)
            break;
    }
    printf ("%d", loc - 1);
    return 0;
}

