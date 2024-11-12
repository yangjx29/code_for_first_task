int ALWAflO [(797 - 792)] [(307 - 302)];

int OJ0fSb9gP3 (int OlA8BYuaJSgV, int wgmDYAw0er, int VL9IWFKy [] [(470 - 465)]) {
    int Xd1iNUIM [(314 - 309)], WQZU1mSn, Y7jlusA6BH0, uZ1dqEIQsuD;
    if (wgmDYAw0er <= (942 - 938) && OlA8BYuaJSgV <= 4) {
        uZ1dqEIQsuD = (640 - 639);
        {
            WQZU1mSn = 820 - 820;
            while ((788 - 783) > WQZU1mSn) {
                Xd1iNUIM[WQZU1mSn] = VL9IWFKy[wgmDYAw0er][WQZU1mSn];
                VL9IWFKy[wgmDYAw0er][WQZU1mSn] = VL9IWFKy[OlA8BYuaJSgV][WQZU1mSn];
                VL9IWFKy[OlA8BYuaJSgV][WQZU1mSn] = Xd1iNUIM[WQZU1mSn];
                WQZU1mSn++;
            }
        }
        {
            WQZU1mSn = 0;
            while (5 > WQZU1mSn) {
                {
                    Y7jlusA6BH0 = 0;
                    while (5 > Y7jlusA6BH0) {
                        ALWAflO[WQZU1mSn][Y7jlusA6BH0] = VL9IWFKy[WQZU1mSn][Y7jlusA6BH0];
                        Y7jlusA6BH0++;
                    }
                }
                WQZU1mSn++;
            }
        }
    }
    else
        uZ1dqEIQsuD = 0;
    return uZ1dqEIQsuD;
}

main () {
    int VL9IWFKy [5] [5], WQZU1mSn, Y7jlusA6BH0, OlA8BYuaJSgV, wgmDYAw0er;
    {
        WQZU1mSn = 0;
        while (WQZU1mSn < 5) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                Y7jlusA6BH0 = 0;
                while (5 > Y7jlusA6BH0) {
                    scanf ("%d", &VL9IWFKy[WQZU1mSn][Y7jlusA6BH0]);
                    Y7jlusA6BH0++;
                }
            }
            WQZU1mSn++;
        }
    }
    scanf ("%d %d", &OlA8BYuaJSgV, &wgmDYAw0er);
    if (OJ0fSb9gP3 (OlA8BYuaJSgV, wgmDYAw0er, VL9IWFKy) == 1) {
        WQZU1mSn = 0;
        while (WQZU1mSn < 5) {
            {
                Y7jlusA6BH0 = 0;
                while (Y7jlusA6BH0 < 4) {
                    printf ("%d ", ALWAflO[WQZU1mSn][Y7jlusA6BH0]);
                    Y7jlusA6BH0++;
                }
            }
            printf ("%d\n", ALWAflO[WQZU1mSn][4]);
            WQZU1mSn++;
        }
    }
    else
        ;
}

